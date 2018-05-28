#ifndef EDITFIGUREDECORATORFACTORY_H
#define EDITFIGUREDECORATORFACTORY_H

#include "abstractdecoratorfactory.h"
#include "controller/decorator/editfigurecontrollerdecorator.h"
#include "view/decorator/editfigureviewdecorator.h"

class EditFigureDecoratorFactory : public AbstractDecoratorFactory
{
public:
    EditFigureDecoratorFactory();
    ~EditFigureDecoratorFactory();

    Kameiros::View::IView* createViewDecorator(Kameiros::View::IView* parent) override;
    Kameiros::Controller::IController *createControllerDecorator(Kameiros::Controller::IController* parent) override;
};

#endif // EDITFIGUREDECORATORFACTORY_H
