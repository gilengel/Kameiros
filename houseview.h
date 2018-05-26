#ifndef HOUSEVIEWER_H
#define HOUSEVIEWER_H

#include <memory>
#include <QRectF>
#include <QGraphicsSceneHoverEvent>
#include "housemodel.h"
#include "abstractview.h"

namespace Kameiros {
namespace View {
class HouseView : public AbstractView
{
    Q_OBJECT
public:
    HouseView(Model::HouseModel* model, QObject* parent = nullptr);

    void mouseMovedEvent(QPointF mousePosition);
    void mousePressedEvent(QPointF position, Qt::MouseButton button);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;


protected:
    bool isMouseHovering;

   void mouseMoveEvent(QGraphicsSceneMouseEvent*) override;
   void hoverMoveEvent(QGraphicsSceneHoverEvent*) override;
   void hoverEnterEvent(QGraphicsSceneHoverEvent*) override;
   void hoverLeaveEvent(QGraphicsSceneHoverEvent*) override;
   void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
   void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;
public slots:
    void repaint();
};
}
}

#endif // HOUSEVIEWER_H
