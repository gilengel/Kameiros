#include "idecorator.h"

using namespace Kameiros::Controller;
using namespace Kameiros::Controller::Decorator;



IDecorator::IDecorator(Kameiros::Controller::IController *inner) : IController(inner)
{

}

void IDecorator::connectMouseSignals(Kameiros::View::AbstractView *view)
{
    disconnect(view, &Kameiros::View::AbstractView::mouseMoved, inner, &Kameiros::Controller::IController::handleMouseMoved);
    disconnect(view, &Kameiros::View::AbstractView::mousePressed, inner, &Kameiros::Controller::IController::handleMousePressed);
    disconnect(view, &Kameiros::View::AbstractView::mouseReleased, inner, &Kameiros::Controller::IController::handleMouseReleased);

    IController::connectMouseSignals(view);
}

void IDecorator::disconnectMouseSignals(Kameiros::View::AbstractView *view)
{
    disconnect(view, &Kameiros::View::AbstractView::mouseMoved, this, &Kameiros::Controller::IController::handleMouseMoved);
    disconnect(view, &Kameiros::View::AbstractView::mousePressed, this, &Kameiros::Controller::IController::handleMousePressed);
    disconnect(view, &Kameiros::View::AbstractView::mouseReleased, this, &Kameiros::Controller::IController::handleMouseReleased);

    inner->connectMouseSignals(view);
}
