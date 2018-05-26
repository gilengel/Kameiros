#include "movefigurecontrollerdecorator.h"

using namespace Kameiros::Controller::Decorator;

MoveFigureControllerDecorator::MoveFigureControllerDecorator(Kameiros::Controller::IController *inner) : IDecorator(inner)
{
    isDraggingEnabled = false;
}

void MoveFigureControllerDecorator::handleMouseMoved(QPointF position)
{
    if(isDraggingEnabled){
        if(auto inner = static_cast<Kameiros::Controller::HouseController*>(this->inner)){
        if(auto model = static_cast<Kameiros::Model::HouseModel*>(inner->getModel())){

            model->setPosition(position - model->getOutline().boundingRect().topLeft() + startPoint);
        }
        }
    }
}

void MoveFigureControllerDecorator::handleMousePressed(QPointF point, Qt::MouseButton button)
{
    if(button == Qt::LeftButton){


        if(auto inner = static_cast<Kameiros::Controller::HouseController*>(this->inner)){
        if(auto model = static_cast<Kameiros::Model::HouseModel*>(inner->getModel())){

            startPoint = model->getOutline().boundingRect().topLeft() - point;
            isDraggingEnabled = true;
        }
        }

    }
}

void MoveFigureControllerDecorator::handleMouseReleased(QPointF, Qt::MouseButton button)
{
    if(button == Qt::LeftButton){
        startPoint = QPointF(0, 0);
        isDraggingEnabled = false;
    }
}
