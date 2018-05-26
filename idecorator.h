#ifndef IDECORATOR_H
#define IDECORATOR_H

#include "icontroller.h"

namespace Kameiros {
namespace Controller {
namespace Decorator {
class IDecorator : public IController
{
public:
    IDecorator(IController* inner);


    void connectMouseSignals(View::AbstractView* view);
    void disconnectMouseSignals(View::AbstractView* view);
};
}
}
}
#endif // IDECORATOR_H
