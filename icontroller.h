#ifndef ICONTROLLER_H
#define ICONTROLLER_H

#include <QObject>
#include <QMouseEvent>
#include "abstractview.h"

namespace Kameiros {
namespace Controller {
class IController : public QObject
{
    Q_OBJECT
public:
    IController();
    IController(IController* inner);
    IController *getInner() const;

    void connectMouseSignals(View::AbstractView* view);

public slots:
    virtual void handleMousePressed(QPointF position, Qt::MouseButton button) = 0;
    virtual void handleMouseReleased(QPointF position, Qt::MouseButton button) = 0;
    virtual void handleMouseMoved(QPointF position) = 0;
protected:
    IController* inner;
};
}
}

#endif // ICONTROLLER_H
