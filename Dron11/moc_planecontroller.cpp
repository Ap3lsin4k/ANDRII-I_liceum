/****************************************************************************
** Meta object code from reading C++ file 'planecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DroneQML/planecontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planecontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlaneController_t {
    QByteArrayData data[16];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaneController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaneController_t qt_meta_stringdata_PlaneController = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PlaneController"
QT_MOC_LITERAL(1, 16, 6), // "stoped"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "positionChanged"
QT_MOC_LITERAL(4, 40, 7), // "arrived"
QT_MOC_LITERAL(5, 48, 8), // "departed"
QT_MOC_LITERAL(6, 57, 9), // "toChanged"
QT_MOC_LITERAL(7, 67, 11), // "fromChanged"
QT_MOC_LITERAL(8, 79, 3), // "pos"
QT_MOC_LITERAL(9, 83, 11), // "startFlight"
QT_MOC_LITERAL(10, 95, 16), // "swapDestinations"
QT_MOC_LITERAL(11, 112, 8), // "isFlying"
QT_MOC_LITERAL(12, 121, 8), // "position"
QT_MOC_LITERAL(13, 130, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(14, 145, 4), // "from"
QT_MOC_LITERAL(15, 150, 2) // "to"

    },
    "PlaneController\0stoped\0\0positionChanged\0"
    "arrived\0departed\0toChanged\0fromChanged\0"
    "pos\0startFlight\0swapDestinations\0"
    "isFlying\0position\0QGeoCoordinate\0from\0"
    "to"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaneController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x0049510b,
      14, 0x80000000 | 13, 0x0049510b,
      15, 0x80000000 | 13, 0x0049510b,

 // properties: notify_signal_id
       1,
       5,
       4,

       0        // eod
};

void PlaneController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaneController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stoped(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->arrived(); break;
        case 3: _t->departed(); break;
        case 4: _t->toChanged(); break;
        case 5: _t->fromChanged(); break;
        case 6: _t->pos(); break;
        case 7: _t->startFlight(); break;
        case 8: _t->swapDestinations(); break;
        case 9: { bool _r = _t->isFlying();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaneController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaneController::stoped)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaneController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaneController::positionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlaneController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaneController::arrived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlaneController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaneController::departed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlaneController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaneController::toChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlaneController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaneController::fromChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlaneController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->position(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->from(); break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->to(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PlaneController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: _t->setFrom(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 2: _t->setTo(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PlaneController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PlaneController.data,
    qt_meta_data_PlaneController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlaneController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaneController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaneController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlaneController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PlaneController::stoped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlaneController::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlaneController::arrived()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlaneController::departed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlaneController::toChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlaneController::fromChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
