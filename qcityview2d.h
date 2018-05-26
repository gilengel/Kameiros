#ifndef QCITYVIEW2D_H
#define QCITYVIEW2D_H

#include <vector>
#include <QWidget>
#include <QMouseEvent>
#include <QGraphicsView>
#include <QGraphicsScene>

#include "abstractview.h"

class QCityView2D : public QGraphicsView
{
    Q_OBJECT
public:
    explicit QCityView2D(QWidget *parent = nullptr);

    void addObjectView(Kameiros::View::AbstractView* view);
    Kameiros::View::AbstractView* getObjectView(int index) const;
signals:

public slots:


protected:
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;


private:
    std::vector<Kameiros::View::AbstractView*> views;

    QGraphicsScene *scene;

};

#endif // QCITYVIEW2D_H
