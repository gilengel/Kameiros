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

void IController::connectMouseSignals(Kameiros::View::AbstractView* view)
{
    connect(view, &Kameiros::View::AbstractView::mouseMoved, this, &Kameiros::Controller::IController::handleMouseMoved);
    connect(view, &Kameiros::View::AbstractView::mousePressed, this, &Kameiros::Controller::IController::handleMousePressed);
    connect(view, &Kameiros::View::AbstractView::mouseReleased, this, &Kameiros::Controller::IController::handleMouseReleased);
}

