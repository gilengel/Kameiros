#include "housemodel.h"

using namespace Kameiros::Model;


HouseModel::HouseModel(QObject *parent) : AbstractModel(parent)
{

}

int HouseModel::getInhabitants() const
{
    return inhabitants;
}

void HouseModel::setInhabitants(int value)
{
    inhabitants = value;
    emit modelChanged(this);
}

HouseType HouseModel::getType() const
{
    return type;
}

void HouseModel::setType(const HouseType &value)
{
    type = value;
    emit modelChanged(this);
}

QPointF HouseModel::getPosition() const
{
    return position;
}

void HouseModel::setPosition(const QPointF &value)
{
    outline.translate(-position);
    position = value;
    outline.translate(value);
    emit modelChanged(this);
}

void HouseModel::addOutlinePoint(const QPointF &value)
{
    outline << value;
    emit modelChanged(this);

}

void HouseModel::removeOutlinePoint(const QPointF &value)
{
    if(outline.removeOne(value)){
        emit modelChanged(this);
    }else{
        qDebug() << "HouseModel: Point " << value << " is not part of the polygon";
    }
}

QRectF HouseModel::calculateBoundingBox()
{
    return outline.boundingRect();
}

QPolygonF HouseModel::getOutline() const
{
    return outline;
}

void HouseModel::setOutline(const QPolygonF &value)
{
    outline = value;
    emit modelChanged(this);
}


