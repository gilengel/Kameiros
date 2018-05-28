#include "abstractview.h"

using namespace Kameiros;
using namespace Kameiros::View;

AbstractView::AbstractView(Model::AbstractModel* model, QGraphicsItem* parent) : IView(parent)
{
    this->model = model;
}

bool AbstractView::isMouseHovering(QPointF mousePosition)
{
    return model->calculateBoundingBox().contains(mousePosition);
}

Model::AbstractModel *AbstractView::getModel() const
{
    return model;
}
/*
QPointF AbstractView::getMousePosition() const
{
    return mousePosition;
}

void AbstractView::setMousePosition(const QPointF &value)
{
    mousePosition = value;
}

void AbstractView::mousePressEvent(QGraphicsSceneMouseEvent *)
{
    qDebug() << "Mouse Pressed";
}

void AbstractView::mouseReleaseEvent(QGraphicsSceneMouseEvent *)
{

}

void AbstractView::mouseMoveEvent(QGraphicsSceneMouseEvent *)
{
    qDebug() << "Mouse moved";
}
*/
