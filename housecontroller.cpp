#include "housecontroller.h"

using namespace Kameiros::Controller;

HouseController::HouseController(Model::HouseModel* model, View::HouseView* view) : AbstractController(model, view)
{
    connect(model, &Kameiros::Model::HouseModel::modelChanged, this, &HouseController::reactOnModelChange);

}

void HouseController::handleMousePressed(QPointF position, Qt::MouseButton button)
{

}

void HouseController::handleMouseReleased(QPointF position, Qt::MouseButton button)
{

}

void HouseController::handleMouseMoved(QPointF position)
{

}

void HouseController::reactOnModelChange(Model::AbstractModel* model)
{
    dynamic_cast<View::HouseView*>(view)->repaint();
}

