#ifndef IVIEW_H
#define IVIEW_H

#include <QObject>
#include <QGraphicsItem>

namespace Kameiros {
namespace View {
class IView : public QGraphicsItem
{
public:
    IView(QGraphicsItem* parent);
    IView(IView* inner);
    IView *getInner() const;
protected:
    IView* inner;
};
}
}

#endif // IVIEW_H
