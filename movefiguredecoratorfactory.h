#ifndef MOVEFIGUREDECORATORFACTORY_H
#define MOVEFIGUREDECORATORFACTORY_H

#include "abstractdecoratorfactory.h"
#include "controller/decorator/movefigurecontrollerdecorator.h"
#include "view/decorator/movefigureviewdecorator.h"

class MoveFigureDecoratorFactory : public AbstractDecoratorFactory
{
public:
    MoveFigureDecoratorFactory();
    ~MoveFigureDecoratorFactory();

    Kameiros::View::IView* createViewDecorator(Kameiros::View::IView* parent) override;
    Kameiros::Controller::IController *createControllerDecorator(Kameiros::Controller::IController* parent) override;
};

#endif // MOVEFIGUREDECORATORFACTORY_H
