#include "housecontroller.h"

using namespace Kameiros;
using namespace Kameiros::Controller;

HouseController::HouseController(Model::HouseModel* model, View::HouseView* view) : AbstractController(model, view)
{
    connect(model, &Kameiros::Model::HouseModel::modelChanged, this, &HouseController::reactOnModelChange);

}

void HouseController::handleMousePressed(QPointF, Qt::MouseButton)
{

}

void HouseController::handleMouseReleased(QPointF, Qt::MouseButton)
{

}

void HouseController::handleMouseMoved(QPointF)
{

}

void HouseController::reactOnModelChange(Model::AbstractModel*)
{
    //dynamic_cast<View::HouseView*>(view)->repaint();
}

