#ifndef HOUSEMODEL_H
#define HOUSEMODEL_H

#include <vector>
#include <QPointF>
#include <QPolygonF>

#include "abstractmodel.h"
namespace Kameiros {
namespace Model {

enum HouseType{
    AGRICULTURAL,
    CIVIL,
    RESIDENTIAL,
    MEDICAL,
    EDUCATIONAL,
    GOVERNMENTAL,
    INDUSTRIAL,
    MILITARY,
    STORAGE,
    RELIGIOUS
};

class HouseModel : public AbstractModel
{
    Q_OBJECT

    public:
       HouseModel(QObject* parent = nullptr);
    int getInhabitants() const;
    HouseType getType() const;
    QPointF getPosition() const;


    QPolygonF getOutline() const;


public slots:
    void setInhabitants(int value);
    void setType(const HouseType &value);
    void setPosition(const QPointF &value);

    void addOutlinePoint(const QPointF &value);
    void removeOutlinePoint(const QPointF &value);
    void setOutline(const QPolygonF &value);
    QRectF calculateBoundingBox() override;



    private:
    int inhabitants;
    QPointF position;
    QPolygonF outline;

    HouseType type;

};
}
}
#endif // HOUSEMODEL_H
