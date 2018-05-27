#ifndef HANDLECHANGEPOINTFIGURE_H
#define HANDLECHANGEPOINTFIGURE_H

#include <QGraphicsRectItem>

namespace Kameiros {
namespace View {
class HandleChangePointFigure : public QGraphicsRectItem
{
    Q_OBJECT
public:
    HandleChangePointFigure(int index, QGraphicsItem *parent = Q_NULLPTR);
protected:
    QVariant itemChange(GraphicsItemChange change, const QVariant &value);
private:
    int index;
signals:
    void outlinePointChanged(int index, QPointF newPosition);
};
}
}
#endif // HANDLECHANGEPOINTFIGURE_H
