#include "abstractcontroller.h"

using namespace Kameiros::Controller;

Kameiros::Model::AbstractModel *AbstractController::getModel() const
{
    return model;
}

AbstractController::AbstractController(Model::AbstractModel* model, View::AbstractView* view)
{
    this->model = model;
    this->view = view;

    connect(model, &Kameiros::Model::AbstractModel::modelChanged, this, &AbstractController::reactOnModelChange);
}

AbstractController::~AbstractController()
{
    disconnect(model, &Kameiros::Model::AbstractModel::modelChanged, this, &AbstractController::reactOnModelChange);
}
