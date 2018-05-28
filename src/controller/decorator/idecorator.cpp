#include "idecorator.h"

using namespace Kameiros::Controller;
using namespace Kameiros::Controller::Decorator;



IDecorator::IDecorator(Kameiros::Controller::IController *inner) : IController(inner)
{

}

void IDecorator::connectMouseSignals(Kameiros::View::IView *view)
{
    //disconnect(view, &Kameiros::View::IView::mouseMoved, inner, &Kameiros::Controller::IController::handleMouseMoved);
    //disconnect(view, &Kameiros::View::IView::mousePressed, inner, &Kameiros::Controller::IController::handleMousePressed);
    //disconnect(view, &Kameiros::View::IView::mouseReleased, inner, &Kameiros::Controller::IController::handleMouseReleased);

    IController::connectMouseSignals(view);
}

void IDecorator::disconnectMouseSignals(Kameiros::View::IView *view)
{
    //disconnect(view, &Kameiros::View::IView::mouseMoved, this, &Kameiros::Controller::IController::handleMouseMoved);
    //disconnect(view, &Kameiros::View::IView::mousePressed, this, &Kameiros::Controller::IController::handleMousePressed);
    //disconnect(view, &Kameiros::View::IView::mouseReleased, this, &Kameiros::Controller::IController::handleMouseReleased);

    inner->connectMouseSignals(view);
}
