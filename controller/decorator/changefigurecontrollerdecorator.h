#ifndef CHANGEFIGURECONTROLLERDECORATOR_H
#define CHANGEFIGURECONTROLLERDECORATOR_H

#include <QObject>
#include "controller/icontroller.h"
#include "controller/housecontroller.h"
#include "model/housemodel.h"
#include "controller/decorator/idecorator.h"

namespace Kameiros {
namespace Controller {
namespace Decorator {
class ChangeFigureControllerDecorator : public IDecorator
{
    Q_OBJECT
public:
    ChangeFigureControllerDecorator(IController* inner);
    ~ChangeFigureControllerDecorator() override;

public slots:
    void handleMouseMoved(QPointF position) override;
    void handleMousePressed(QPointF position, Qt::MouseButton button) override;
    void handleMouseReleased(QPointF position, Qt::MouseButton button) override;
};
}
}
}
#endif // CHANGEFIGUREVIEWDECORATOR_H
