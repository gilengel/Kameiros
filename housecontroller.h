#ifndef HOUSECONTROLLER_H
#define HOUSECONTROLLER_H

#include "abstractcontroller.h"
#include "housemodel.h"
#include "houseview.h"

namespace Kameiros {
namespace Controller {
class HouseController : public AbstractController
{
    Q_OBJECT
public slots:
    void reactOnModelChange(Model::AbstractModel* model) override;
    void handleMousePressed(QPointF position, Qt::MouseButton button) override;
    void handleMouseReleased(QPointF position, Qt::MouseButton button) override;
    void handleMouseMoved(QPointF position) override;
public:
    HouseController(Model::HouseModel* model, View::HouseView* view);
    void mouseMoved(QMouseEvent* event);
};
}
}

#endif // HOUSECONTROLLER_H

