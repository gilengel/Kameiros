#ifndef ABSTRACTMODEL_H
#define ABSTRACTMODEL_H

#include <memory>
#include <QObject>
#include <QDebug>
#include <QRect>

namespace Kameiros {
namespace Model  {
class AbstractModel : public QObject
{
    Q_OBJECT
public:
    AbstractModel(QObject* parent = nullptr);

    virtual QRectF calculateBoundingBox() = 0;

signals:
    void modelChanged(Model::AbstractModel* model);
};

}
}

#endif // ABSTRACTMODEL_H
