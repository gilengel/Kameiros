#ifndef ABSTRACTVIEW_H
#define ABSTRACTVIEW_H

#include <QObject>
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <memory>
#include "../model/abstractmodel.h"
#include "iview.h"

namespace Kameiros {
namespace View {
class AbstractView : public IView
{
    //Q_OBJECT
public:
    AbstractView(Model::AbstractModel* model, QGraphicsItem* parent = nullptr);
    bool isMouseHovering(QPointF mousePosition);

    //QPointF getMousePosition() const;
    //void setMousePosition(const QPointF &value);

    //virtual void mousePressedEvent(QPointF position, Qt::MouseButton button) = 0;
    //virtual void mouseReleaseEvent(QPointF position, Qt::MouseButton button) = 0;
    //virtual void mouseMovedEvent(QPointF mousePosition) = 0;
    Model::AbstractModel *getModel() const;

protected:
    //void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    //void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;
    //void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
//public slots:
//    void repaint(){};
protected:
    Model::AbstractModel* model;

    QPointF mousePosition;
//signals:
    //void mousePressed(QPointF position, Qt::MouseButton button) override;
    //void mouseReleased(QPointF position, Qt::MouseButton button) override;
    //void mouseMoved(QPointF mousePosition) override;
};
}
}
#endif // ABSTRACTVIEW_H
