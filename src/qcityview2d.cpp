#include "qcityview2d.h"

QCityView2D::QCityView2D(QWidget *parent) : QGraphicsView(parent)
{
    setMouseTracking(true);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, size().width(), size().height());

    setScene(scene);
}

void QCityView2D::mouseMoveEvent(QMouseEvent *event)
{
    for(auto&& view : scene->items()){
        if(auto derived = dynamic_cast<Kameiros::View::AbstractView*>(view)){
            //derived->mouseMovedEvent(mapToScene(event->pos()));
        }
    }

    QGraphicsView::mouseMoveEvent(event);
}

void QCityView2D::mousePressEvent(QMouseEvent *event)
{
    for(auto&& view : scene->items()){
        if(auto derived = dynamic_cast<Kameiros::View::AbstractView*>(view)){
            //derived->mousePressedEvent(mapToScene(event->pos()), event->button());
        }
    }


    QGraphicsView::mousePressEvent(event);
}

void QCityView2D::mouseReleaseEvent(QMouseEvent *event)
{
    for(auto&& view : scene->items()){
        if(auto derived = dynamic_cast<Kameiros::View::AbstractView*>(view)){
            //derived->mouseReleaseEvent(mapToScene(event->pos()), event->button());
        }
    }

    QGraphicsView::mouseReleaseEvent(event);
}

void QCityView2D::addObjectView(Kameiros::View::IView *view)
{
    scene->addItem(view);
}

Kameiros::View::IView* QCityView2D::getObjectView(int) const
{
     QList<QGraphicsItem *> bla = scene->items();
     QList<QGraphicsItem *>::iterator i;
     for(i = scene->items().begin(); i < scene->items().end(); i++){
         if(auto a = dynamic_cast<Kameiros::View::IView*>(*i)){
             return a;
         }
     }

     return nullptr;
}
