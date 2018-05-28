#ifndef EDITFIGURECONTROLLERDECORATOR_H
#define EDITFIGURECONTROLLERDECORATOR_H

#include "idecorator.h"
#include "../abstractcontroller.h"
#include "../../view/decorator/editfigureviewdecorator.h"
#include "../../view/handlechangepointfigure.h"

namespace Kameiros {
namespace Controller {
namespace Decorator {
class EditFigureControllerDecorator : public IDecorator
{
    Q_OBJECT
public:
    EditFigureControllerDecorator(IController* inner);

public slots:
    void handleMouseMoved(QPointF position) override;
    void handleMousePressed(QPointF position, Qt::MouseButton button) override;
    void handleMouseReleased(QPointF position, Qt::MouseButton button) override;

	void handleOutlinePointChanged(int index, QPointF newPosition);
};
}
}
}
#endif // EDITFIGURECONTROLLERDECORATOR_H
