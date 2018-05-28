#include "movefigurecontrollerdecorator.h"

using namespace Kameiros::Controller::Decorator;

MoveFigureControllerDecorator::MoveFigureControllerDecorator(Kameiros::Controller::IController *inner) : IDecorator(inner)
{
    isDraggingEnabled = false;
}

void MoveFigureControllerDecorator::handleMouseMoved(QPointF)
{
    if(isDraggingEnabled){
        if(auto inner = static_cast<Kameiros::Controller::HouseController*>(this->inner)){
        if(auto model = static_cast<Kameiros::Model::HouseModel*>(inner->getModel())){

            //model->setPosition(position);//  - startPoint); // - model->getOutline().boundingRect().topLeft() + startPoint);
        }
        }
    }
}

void MoveFigureControllerDecorator::handleMousePressed(QPointF position, Qt::MouseButton button)
{
    if(button == Qt::LeftButton){


        if(auto inner = static_cast<Kameiros::Controller::HouseController*>(this->inner)){
        if(auto model = static_cast<Kameiros::Model::HouseModel*>(inner->getModel())){

            startPoint = position; //model->getOutline().boundingRect().topLeft() - position;
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
