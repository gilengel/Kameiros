#include "abstractview.h"

using namespace Kameiros::View;

AbstractView::AbstractView(Model::AbstractModel* model, QObject* parent) : QObject (parent)
{
    this->model = model;
}

bool AbstractView::isMouseHovering(QPointF mousePosition)
{
    return model->calculateBoundingBox().contains(mousePosition);
}

QPointF AbstractView::getMousePosition() const
{
    return mousePosition;
}

void AbstractView::setMousePosition(const QPointF &value)
{
    mousePosition = value;
}

void AbstractView::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    qDebug() << "Mouse Pressed";
}

void AbstractView::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

}

void AbstractView::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    qDebug() << "Mouse moved";
}
