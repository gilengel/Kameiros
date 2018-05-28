#include "houseview.h"

using namespace Kameiros;
using namespace Kameiros::View;

HouseView::HouseView(Model::HouseModel* model, QGraphicsItem* parent) : AbstractView(model, parent)
{
    actualView = new QGraphicsPolygonItem(dynamic_cast<QGraphicsItem*>(this));
    setFlag(QGraphicsItem::ItemIsSelectable, true);

    actualView->setPolygon(model->getOutline());
    actualView->setParentItem(dynamic_cast<QGraphicsItem*>(this));
}

void HouseView::mouseMovedEvent(QPointF)
{
    //setMousePosition(mousePosition);
    scene()->update();

    //emit mouseMoved(mousePosition);
}

void HouseView::mousePressedEvent(QPointF, Qt::MouseButton)
{
    //emit mousePressed(position, button);
}

void HouseView::paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
{

}


QRectF HouseView::boundingRect() const
{
    qDebug() << actualView->boundingRect();
    return actualView->boundingRect();
}



QVariant HouseView::itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value)
{
    return QGraphicsItem::itemChange(change, value);
}

QGraphicsPolygonItem *HouseView::getActualView() const
{
    return actualView;
}

void HouseView::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mousePressEvent(event);

    QGraphicsItem::setCursor(QCursor(Qt::ClosedHandCursor));
}

void HouseView::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseReleaseEvent(event);

    QGraphicsItem::setCursor(QCursor(Qt::ArrowCursor));
}

