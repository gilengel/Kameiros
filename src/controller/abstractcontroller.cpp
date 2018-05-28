#include "abstractcontroller.h"

using namespace Kameiros;
using namespace Kameiros::Controller;

Model::AbstractModel *AbstractController::getModel() const
{
    return model;
}

AbstractController::AbstractController(Model::AbstractModel* model, View::AbstractView* view)
{
    this->model = model;
    this->view = view;

    connect(model, &Model::AbstractModel::modelChanged, this, &AbstractController::reactOnModelChange);
}

AbstractController::~AbstractController()
{
    disconnect(model, &Model::AbstractModel::modelChanged, this, &AbstractController::reactOnModelChange);
}

View::AbstractView * Kameiros::Controller::AbstractController::getView() const
{
	return this->view;
}