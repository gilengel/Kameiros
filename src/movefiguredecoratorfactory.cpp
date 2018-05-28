#include "movefiguredecoratorfactory.h"

MoveFigureDecoratorFactory::MoveFigureDecoratorFactory()
{

}

MoveFigureDecoratorFactory::~MoveFigureDecoratorFactory()
{

}

Kameiros::View::IView *MoveFigureDecoratorFactory::createViewDecorator(Kameiros::View::IView* view)
{
    return new Kameiros::View::Decorator::MoveFigureViewDecorator(view);
}

Kameiros::Controller::IController *MoveFigureDecoratorFactory::createControllerDecorator(Kameiros::Controller::IController* controller)
{
    return new Kameiros::Controller::Decorator::MoveFigureControllerDecorator(controller);
}
