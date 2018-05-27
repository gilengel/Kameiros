#include "editfiguredecoratorfactory.h"

EditFigureDecoratorFactory::EditFigureDecoratorFactory()
{

}

EditFigureDecoratorFactory::~EditFigureDecoratorFactory()
{

}

Kameiros::View::IView *EditFigureDecoratorFactory::createViewDecorator(Kameiros::View::IView* view)
{
    return new Kameiros::View::Decorator::EditFigureViewDecorator(view);
}

Kameiros::Controller::IController *EditFigureDecoratorFactory::createControllerDecorator(Kameiros::Controller::IController* controller)
{
    return new Kameiros::Controller::Decorator::EditFigureControllerDecorator(controller);
}
