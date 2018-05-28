#ifndef ABSTRACTDECORATORFACTORY_H
#define ABSTRACTDECORATORFACTORY_H

#include "controller/icontroller.h"
#include "view/iview.h"
#include "model/abstractmodel.h"

class AbstractDecoratorFactory
{
public:
    //virtual ~AbstractDecoratorFactory() = 0;
    virtual Kameiros::View::IView* createViewDecorator(Kameiros::View::IView* parent) = 0;
    virtual Kameiros::Controller::IController* createControllerDecorator(Kameiros::Controller::IController* parent) = 0;
};

#endif // ABSTRACTDECORATORFACTORY_H
