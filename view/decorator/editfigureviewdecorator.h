#ifndef EDITFIGUREVIEWDECORATOR_H
#define EDITFIGUREVIEWDECORATOR_H

#include "../../model/abstractmodel.h"
#include "../iview.h"
#include "../houseview.h"
#include "../handlechangepointfigure.h"


namespace Kameiros {
namespace View {
namespace Decorator {
class EditFigureViewDecorator : public IView
{
public:
    EditFigureViewDecorator();
    EditFigureViewDecorator(IView* inner);
    ~EditFigureViewDecorator();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
protected slots:
    void handlePointChanged(int index, QPointF position);
private:
    QBrush defaultBrush;
    int handleSize;

    QVector<QGraphicsRectItem*> handleItems;

    Model::AbstractModel* getModelOfView(IView* view);
};
}
}
}

#endif // EDITFIGUREVIEWDECORATOR_H
