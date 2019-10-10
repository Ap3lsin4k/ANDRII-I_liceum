/****************************************************************************
** Meta object code from reading C++ file 'wayinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DroneQML/wayinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wayinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WayInfo_t {
    QByteArrayData data[26];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WayInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WayInfo_t qt_meta_stringdata_WayInfo = {
    {
QT_MOC_LITERAL(0, 0, 7), // "WayInfo"
QT_MOC_LITERAL(1, 8, 8), // "offStart"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 6), // "offEnd"
QT_MOC_LITERAL(4, 25, 4), // "Base"
QT_MOC_LITERAL(5, 30, 14), // "shortageEnergy"
QT_MOC_LITERAL(6, 45, 6), // "wayFly"
QT_MOC_LITERAL(7, 52, 21), // "QList<QGeoCoordinate>"
QT_MOC_LITERAL(8, 74, 12), // "countSquares"
QT_MOC_LITERAL(9, 87, 11), // "endPosition"
QT_MOC_LITERAL(10, 99, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(11, 114, 13), // "startPosition"
QT_MOC_LITERAL(12, 128, 12), // "basePosition"
QT_MOC_LITERAL(13, 141, 11), // "countenergy"
QT_MOC_LITERAL(14, 153, 14), // "setCoordinates"
QT_MOC_LITERAL(15, 168, 11), // "coordinates"
QT_MOC_LITERAL(16, 180, 6), // "combin"
QT_MOC_LITERAL(17, 187, 15), // "setAllParametrs"
QT_MOC_LITERAL(18, 203, 5), // "focus"
QT_MOC_LITERAL(19, 209, 6), // "horizA"
QT_MOC_LITERAL(20, 216, 9), // "verticalA"
QT_MOC_LITERAL(21, 226, 9), // "costPhoto"
QT_MOC_LITERAL(22, 236, 7), // "costFly"
QT_MOC_LITERAL(23, 244, 2), // "he"
QT_MOC_LITERAL(24, 247, 6), // "energy"
QT_MOC_LITERAL(25, 254, 10) // "handleDate"

    },
    "WayInfo\0offStart\0\0offEnd\0Base\0"
    "shortageEnergy\0wayFly\0QList<QGeoCoordinate>\0"
    "countSquares\0endPosition\0QGeoCoordinate\0"
    "startPosition\0basePosition\0countenergy\0"
    "setCoordinates\0coordinates\0combin\0"
    "setAllParametrs\0focus\0horizA\0verticalA\0"
    "costPhoto\0costFly\0he\0energy\0handleDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WayInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   83,    2, 0x0a /* Public */,
       8,    0,   84,    2, 0x0a /* Public */,
       9,    0,   85,    2, 0x0a /* Public */,
      11,    0,   86,    2, 0x0a /* Public */,
      12,    0,   87,    2, 0x0a /* Public */,
      13,    0,   88,    2, 0x0a /* Public */,
      14,    2,   89,    2, 0x0a /* Public */,
      17,    7,   94,    2, 0x0a /* Public */,
      25,    0,  109,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 7,
    QMetaType::Int,
    0x80000000 | 10,
    0x80000000 | 10,
    0x80000000 | 10,
    QMetaType::Double,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   18,   19,   20,   21,   22,   23,   24,
    QMetaType::Void,

       0        // eod
};

void WayInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WayInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->offStart(); break;
        case 1: _t->offEnd(); break;
        case 2: _t->Base(); break;
        case 3: _t->shortageEnergy(); break;
        case 4: { QList<QGeoCoordinate> _r = _t->wayFly();
            if (_a[0]) *reinterpret_cast< QList<QGeoCoordinate>*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->countSquares();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { QGeoCoordinate _r = _t->endPosition();
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 7: { QGeoCoordinate _r = _t->startPosition();
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 8: { QGeoCoordinate _r = _t->basePosition();
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 9: { double _r = _t->countenergy();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setCoordinates((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->setAllParametrs((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 12: _t->handleDate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WayInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WayInfo::offStart)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WayInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WayInfo::offEnd)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WayInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WayInfo::Base)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WayInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WayInfo::shortageEnergy)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WayInfo::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_WayInfo.data,
    qt_meta_data_WayInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WayInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WayInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WayInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WayInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void WayInfo::offStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WayInfo::offEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WayInfo::Base()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WayInfo::shortageEnergy()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
