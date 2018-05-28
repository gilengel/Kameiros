#include "editfigurecontrollerdecorator.h"

using namespace Kameiros::View;
using namespace Kameiros::View::Decorator;
using namespace Kameiros::Controller::Decorator;

EditFigureControllerDecorator::EditFigureControllerDecorator(IController* inner) : IDecorator(inner)
{
	if (AbstractController* controller = dynamic_cast<AbstractController*>(inner)) {
		if (auto inner = dynamic_cast<EditFigureViewDecorator*>(controller->getView())) {
			for (auto it = inner->getHandleItems().begin(); it < inner->getHandleItems().end(); it++) {
				QObject::connect(*it, &HandleChangePointFigure::outlinePointChanged, this, &EditFigureControllerDecorator::handleOutlinePointChanged);
			}
		}
	}
	
}

void EditFigureControllerDecorator::handleMouseMoved(QPointF)
{
}

void EditFigureControllerDecorator::handleMousePressed(QPointF, Qt::MouseButton)
{
}

void EditFigureControllerDecorator::handleMouseReleased(QPointF, Qt::MouseButton)
{
}

void EditFigureControllerDecorator::handleOutlinePointChanged(int index, QPointF newPosition)
{
	qDebug() << index << " " << newPosition;
}