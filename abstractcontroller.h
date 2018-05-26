#ifndef ABSTRACTCONTROLLER_H
#define ABSTRACTCONTROLLER_H

#include <QDebug>
#include <QMouseEvent>
#include <memory>
#include "abstractmodel.h"
#include "abstractview.h"
#include "icontroller.h"

namespace Kameiros {
namespace Controller {
class AbstractController : public IController
{
    Q_OBJECT
protected:
    Model::AbstractModel* model;
    View::AbstractView* view;
public slots:
    virtual void reactOnModelChange(Model::AbstractModel* model) = 0;
public:
    AbstractController(Model::AbstractModel* model, View::AbstractView* view);
    ~AbstractController();

    Model::AbstractModel *getModel() const;
};
}
}
#endif // ABSTRACTCONTROLLER_H

