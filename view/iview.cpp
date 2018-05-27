#include "iview.h"

using namespace Kameiros::View;

IView::IView(QGraphicsItem* parent) : QGraphicsItem (parent)
{
    inner = nullptr;
}

IView::IView(IView *inner)
{
    this->inner = inner;
}

IView *IView::getInner() const
{
    return inner;
}
