#ifndef MOVEFIGUREVIEWDECORATOR_H
#define MOVEFIGUREVIEWDECORATOR_H

#include "../iview.h"
#include "../houseview.h"

namespace Kameiros {
namespace View {
namespace Decorator {
class MoveFigureViewDecorator : public IView
{
public:
    MoveFigureViewDecorator();
    MoveFigureViewDecorator(IView* inner);
    ~MoveFigureViewDecorator();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
private:
    QBrush defaultBrush;
//signals:
    //void mousePressed(QPointF position, Qt::MouseButton button) override;
    //void mouseReleased(QPointF position, Qt::MouseButton button) override;
    //void mouseMoved(QPointF mousePosition) override;
};
}
}
}

#endif // IVIEW_H
