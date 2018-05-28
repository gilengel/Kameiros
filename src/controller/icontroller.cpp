#include "icontroller.h"

using namespace Kameiros::Controller;

IController::IController()
{

}

IController::IController(IController *inner)
{
    this->inner = inner;
}

IController *IController::getInner() const
{
    return inner;
}

void IController::connectMouseSignals(Kameiros::View::IView*)
{
    //connect(view, &Kameiros::View::IView::mouseMoved, this, &Kameiros::Controller::IController::handleMouseMoved);
    //connect(view, &Kameiros::View::IView::mousePressed, this, &Kameiros::Controller::IController::handleMousePressed);
    //connect(view, &Kameiros::View::IView::mouseReleased, this, &Kameiros::Controller::IController::handleMouseReleased);
}

