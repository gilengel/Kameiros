#include "handlechangepointfigure.h"

Kameiros::View::HandleChangePointFigure::HandleChangePointFigure(int index, QGraphicsItem *parent) : QGraphicsRectItem (parent)
{
    setFlag(QGraphicsItem::ItemIsSelectable, true);
    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemSendsGeometryChanges, true);

    this->index = index;
}

QVariant Kameiros::View::HandleChangePointFigure::itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value)
{
    if (change == ItemPositionChange && scene()) {
        emit outlinePointChanged(index, value.toPointF());
	}

	return QGraphicsItem::itemChange(change, value);
}
