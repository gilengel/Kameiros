#include "movefigureviewdecorator.h"

using namespace Kameiros::View;
using namespace Kameiros::View::Decorator;


MoveFigureViewDecorator::MoveFigureViewDecorator(IView *inner) : IView(inner)
{
    if(auto derived = dynamic_cast<HouseView*>(inner)){
        derived->setFlag(QGraphicsItem::ItemIsSelectable, true);
        derived->setFlag(QGraphicsItem::ItemIsMovable, true);
        derived->setFlag(QGraphicsItem::ItemSendsGeometryChanges, true);

        defaultBrush = derived->getActualView()->brush();
        derived->getActualView()->setBrush(QBrush(QColor(254, 202, 87)));

        QGraphicsRectItem* rect = new QGraphicsRectItem(dynamic_cast<QGraphicsItem*>(derived));
        rect->setRect(0, 0, 100, 100);
        rect->setPen(QPen(QColor(255, 0, 0)));
        rect->setParentItem(dynamic_cast<QGraphicsItem*>(derived));
    }
}

MoveFigureViewDecorator::~MoveFigureViewDecorator()
{
    if(auto derived = dynamic_cast<HouseView*>(this->inner)){
        derived->setFlag(QGraphicsItem::ItemIsSelectable, false);
        derived->setFlag(QGraphicsItem::ItemIsMovable, false);
        derived->setFlag(QGraphicsItem::ItemSendsGeometryChanges, false);

        derived->getActualView()->setBrush(defaultBrush);
    }
}

QRectF MoveFigureViewDecorator::boundingRect() const
{
    if(auto inner = dynamic_cast<QGraphicsPolygonItem*>(this->inner)){
        return inner->boundingRect();
    }
}

void MoveFigureViewDecorator::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(auto inner = dynamic_cast<HouseView*>(this->inner)){
        return inner->paint(painter, option, widget);
    }
}
