#ifndef HOUSEVIEWER_H
#define HOUSEVIEWER_H

#include <memory>
#include <QRectF>
#include <QCursor>
#include <QGraphicsSceneHoverEvent>
#include "../model/housemodel.h"
#include "../view/abstractview.h"

namespace Kameiros {
namespace View {
class HouseView : public AbstractView
{
   // Q_OBJECT
public:
    HouseView(Model::HouseModel* model, QGraphicsItem* parent = nullptr);

    void mouseMovedEvent(QPointF mousePosition);
    void mousePressedEvent(QPointF position, Qt::MouseButton button);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

    QRectF boundingRect() const override;
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value) override;
    QGraphicsPolygonItem *getActualView() const;

protected:
    //QVariant itemChange(GraphicsItemChange change, const QVariant &value);
    QGraphicsPolygonItem* actualView;


    bool isMouseHovering;

    /*
   void mouseMoveEvent(QGraphicsSceneMouseEvent*) override;
   void hoverMoveEvent(QGraphicsSceneHoverEvent*) override;
   void hoverEnterEvent(QGraphicsSceneHoverEvent*) override;
   void hoverLeaveEvent(QGraphicsSceneHoverEvent*) override;
   */
   void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
   void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;

//public slots:
//    void repaint();
};
}
}

#endif // HOUSEVIEWER_H
