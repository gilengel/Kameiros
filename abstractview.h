#ifndef ABSTRACTVIEW_H
#define ABSTRACTVIEW_H

#include <QObject>
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <memory>
#include "abstractmodel.h"


namespace Kameiros {
namespace View {
class AbstractView : public QObject, public QGraphicsPolygonItem
{
    Q_OBJECT
public:
    AbstractView(Model::AbstractModel* model, QObject* parent = nullptr);
    bool isMouseHovering(QPointF mousePosition);

    QPointF getMousePosition() const;
    void setMousePosition(const QPointF &value);

    virtual void mousePressedEvent(QPointF position, Qt::MouseButton button) = 0;
    //virtual void mouseReleaseEvent(QPointF position, Qt::MouseButton button) = 0;
    virtual void mouseMovedEvent(QPointF mousePosition) = 0;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
public slots:
    void repaint(){};
protected:
    Model::AbstractModel* model;

    QPointF mousePosition;
signals:
    void mousePressed(QPointF position, Qt::MouseButton button);
    void mouseReleased(QPointF position, Qt::MouseButton button);
    void mouseMoved(QPointF mousePosition);
};
}
}
#endif // ABSTRACTVIEW_H
