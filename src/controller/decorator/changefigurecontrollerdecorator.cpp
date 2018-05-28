#include "changefigurecontrollerdecorator.h"

using namespace Kameiros::Controller;
using namespace Kameiros::Controller::Decorator;
using namespace Kameiros::View;

ChangeFigureControllerDecorator::ChangeFigureControllerDecorator(IController* inner) : IDecorator(inner)
{


}

ChangeFigureControllerDecorator::~ChangeFigureControllerDecorator()
{
    if(auto inner = dynamic_cast<Kameiros::Controller::HouseController*>(this->inner)){
    if(auto model = dynamic_cast<Kameiros::Model::HouseModel*>(inner->getModel())){
        auto outline = model->getOutline();
        if(!outline.isEmpty()){
            outline.removeLast();
        }

        model->setOutline(outline);
    }
    }
}

void ChangeFigureControllerDecorator::handleMouseMoved(QPointF position)
{
    if(auto inner = dynamic_cast<Kameiros::Controller::HouseController*>(this->inner)){
    if(auto model = dynamic_cast<Kameiros::Model::HouseModel*>(inner->getModel())){
        auto outline = model->getOutline();
        if(!outline.isEmpty()){
            outline.removeLast();
        }
        outline.append(position);

        model->setOutline(outline);
    }
    }
}

void ChangeFigureControllerDecorator::handleMousePressed(QPointF position, Qt::MouseButton button)
{
    inner->handleMousePressed(position, button);

    if(auto inner = dynamic_cast<Kameiros::Controller::HouseController*>(this->inner)){
        if(auto model = dynamic_cast<Kameiros::Model::HouseModel*>(inner->getModel())){
            model->addOutlinePoint(position);


        }
    }


}

void ChangeFigureControllerDecorator::handleMouseReleased(QPointF, Qt::MouseButton)
{

}

