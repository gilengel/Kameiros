#include "editfigurecontrollerdecorator.h"

using namespace Kameiros::Controller::Decorator;

EditFigureControllerDecorator::EditFigureControllerDecorator(IController* inner) : IDecorator(inner)
{

}

void EditFigureControllerDecorator::handleMouseMoved(QPointF position)
{
}

void EditFigureControllerDecorator::handleMousePressed(QPointF position, Qt::MouseButton button)
{
}

void EditFigureControllerDecorator::handleMouseReleased(QPointF, Qt::MouseButton button)
{
}
