#include "houseview.h"

using namespace Kameiros::View;

HouseView::HouseView(Model::HouseModel* model, QObject* parent) : AbstractView(model, parent)
{
    setAcceptHoverEvents(true);
}


void HouseView::mouseMovedEvent(QPointF mousePosition)
{
    setMousePosition(mousePosition);
    this->scene()->update();

    emit mouseMoved(mousePosition);
}

void HouseView::mousePressedEvent(QPointF position, Qt::MouseButton button)
{
    emit mousePressed(position, button);
}

/*
void HouseView::mouseReleasedEvent(QPointF position, Qt::MouseButton button)
{
    emit mouseReleased(position, button);
}
*/


void HouseView::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(auto derived = dynamic_cast<Kameiros::Model::HouseModel*>(model)){

        QBrush brush(QColor(0, 255, 0), Qt::SolidPattern);
        brush.setStyle(Qt::SolidPattern);

        QPointF position = derived->getPosition();

        QPainterPath path;
        auto outline = derived->getOutline();
        path.moveTo(*outline.begin() + position);
        for(auto p = outline.begin() + 1; p < outline.end(); p++){
            path.lineTo (*p + position);
        }
        path.lineTo(*outline.begin() + position);

        if(isMouseHovering){
            painter->setPen (Qt :: NoPen);
            painter->fillPath (path, QBrush (QColor (245, 245, 245)));
        }

        painter->setPen (Qt::SolidLine);
        painter->drawPath(path);

    }
}



void HouseView::mouseMoveEvent(QGraphicsSceneMouseEvent *)
{
}

void HouseView::hoverMoveEvent(QGraphicsSceneHoverEvent *evt)
{
    emit mouseMoved(evt->pos());
}

void HouseView::hoverEnterEvent(QGraphicsSceneHoverEvent *)
{
    isMouseHovering = true;
}

void HouseView::hoverLeaveEvent(QGraphicsSceneHoverEvent *)
{
    isMouseHovering = false;
}

void HouseView::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    emit mousePressed(event->pos(), event->button());
}

void HouseView::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    emit mouseReleased(event->pos(), event->button());
}

void HouseView::repaint()
{
    if(auto derived = dynamic_cast<Kameiros::Model::HouseModel*>(model)){
        auto polygon = derived->getOutline();
        polygon.translate(derived->getPosition());
        setPolygon(polygon);
    }

    //this->scene()->update(boundingRect());
}
