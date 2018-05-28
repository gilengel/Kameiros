/****************************************************************************
** Meta object code from reading C++ file 'housemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/model/housemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'housemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Kameiros__Model__HouseModel_t {
    QByteArrayData data[11];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Kameiros__Model__HouseModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Kameiros__Model__HouseModel_t qt_meta_stringdata_Kameiros__Model__HouseModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Kameiros::Model::HouseModel"
QT_MOC_LITERAL(1, 28, 14), // "setInhabitants"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "value"
QT_MOC_LITERAL(4, 50, 7), // "setType"
QT_MOC_LITERAL(5, 58, 9), // "HouseType"
QT_MOC_LITERAL(6, 68, 11), // "setPosition"
QT_MOC_LITERAL(7, 80, 15), // "addOutlinePoint"
QT_MOC_LITERAL(8, 96, 18), // "removeOutlinePoint"
QT_MOC_LITERAL(9, 115, 10), // "setOutline"
QT_MOC_LITERAL(10, 126, 20) // "calculateBoundingBox"

    },
    "Kameiros::Model::HouseModel\0setInhabitants\0"
    "\0value\0setType\0HouseType\0setPosition\0"
    "addOutlinePoint\0removeOutlinePoint\0"
    "setOutline\0calculateBoundingBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Kameiros__Model__HouseModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       7,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPolygonF,    3,
    QMetaType::QRectF,

       0        // eod
};

void Kameiros::Model::HouseModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HouseModel *_t = static_cast<HouseModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setInhabitants((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setType((*reinterpret_cast< const HouseType(*)>(_a[1]))); break;
        case 2: _t->setPosition((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 3: _t->addOutlinePoint((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 4: _t->removeOutlinePoint((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 5: _t->setOutline((*reinterpret_cast< const QPolygonF(*)>(_a[1]))); break;
        case 6: { QRectF _r = _t->calculateBoundingBox();
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Kameiros::Model::HouseModel::staticMetaObject = {
    { &AbstractModel::staticMetaObject, qt_meta_stringdata_Kameiros__Model__HouseModel.data,
      qt_meta_data_Kameiros__Model__HouseModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Kameiros::Model::HouseModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Kameiros::Model::HouseModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Kameiros__Model__HouseModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractModel::qt_metacast(_clname);
}

int Kameiros::Model::HouseModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
