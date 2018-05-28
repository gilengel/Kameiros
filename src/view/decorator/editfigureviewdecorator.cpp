#include "editfigureviewdecorator.h"

using namespace Kameiros::Model;
using namespace Kameiros::View;
using namespace Kameiros::View::Decorator;


EditFigureViewDecorator::EditFigureViewDecorator(IView *inner) : IView(inner)
{
    handleSize = 20;

    if(auto derived = dynamic_cast<HouseView*>(inner)){
        auto model = dynamic_cast<HouseModel*>(getModelOfView(inner));
        auto polygon = model->getOutline();

		int i = 0;
        for(auto it = polygon.begin(); it < polygon.end(); it++){
            HandleChangePointFigure* rect = new HandleChangePointFigure(i, dynamic_cast<QGraphicsItem*>(derived));
            rect->setRect((*it).x() - handleSize / 2, (*it).y() - handleSize / 2, handleSize, handleSize);
            rect->setParentItem(dynamic_cast<QGraphicsItem*>(derived));

            handleItems.append(rect);

			i++;
        }
    }
}

EditFigureViewDecorator::~EditFigureViewDecorator()
{
    for(auto it = handleItems.begin(); it < handleItems.end(); it++){
        (*it)->setParentItem(nullptr);
       delete (*it);
    }
}

AbstractModel *EditFigureViewDecorator::getModelOfView(IView* view)
{
    if(view->getInner() == nullptr){
        auto viewWithModel = dynamic_cast<AbstractView*>(view);
        return viewWithModel->getModel();
    }else{
        return getModelOfView(view->getInner());
    }
}

QRectF EditFigureViewDecorator::boundingRect() const
{
    if(auto inner = dynamic_cast<QGraphicsPolygonItem*>(this->inner)){
        return inner->boundingRect();
    }

	return QRectF(0, 0, 0, 0);
}

void EditFigureViewDecorator::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(auto inner = dynamic_cast<HouseView*>(this->inner)){
        return inner->paint(painter, option, widget);
    }
}

QVector<HandleChangePointFigure*> Kameiros::View::Decorator::EditFigureViewDecorator::getHandleItems()
{
	return handleItems;
}

