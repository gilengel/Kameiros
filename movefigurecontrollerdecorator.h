#ifndef MOVEFIGURECONTROLLERDECORATOR_H
#define MOVEFIGURECONTROLLERDECORATOR_H

#include <QtDebug>
#include "icontroller.h"
#include "housecontroller.h"
#include "housemodel.h"
#include "idecorator.h"

namespace Kameiros {
namespace Controller {
namespace Decorator {
class MoveFigureControllerDecorator : public IDecorator
{
    Q_OBJECT
public:
    MoveFigureControllerDecorator(IController* inner);
private:
    bool isDraggingEnabled;
    QPointF startPoint;
public slots:
    void handleMouseMoved(QPointF position) override;
    void handleMousePressed(QPointF position, Qt::MouseButton button) override;
    void handleMouseReleased(QPointF position, Qt::MouseButton button) override;
};
}
}
}
#endif // MOVEFIGURECONTROLLERDECORATOR_H
