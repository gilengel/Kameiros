#ifndef CHANGEFIGURECONTROLLERDECORATOR_H
#define CHANGEFIGURECONTROLLERDECORATOR_H

#include <QObject>
#include "icontroller.h"
#include "housecontroller.h"
#include "housemodel.h"
#include "idecorator.h"

namespace Kameiros {
namespace Controller {
namespace Decorator {
class ChangeFigureControllerDecorator : public IDecorator
{
    Q_OBJECT
public:
    ChangeFigureControllerDecorator(IController* inner);

public slots:
    void handleMouseMoved(QPointF position) override;
    void handleMousePressed(QPointF position, Qt::MouseButton button) override;
    void handleMouseReleased(QPointF position, Qt::MouseButton button) override;
};
}
}
}
#endif // CHANGEFIGUREVIEWDECORATOR_H
