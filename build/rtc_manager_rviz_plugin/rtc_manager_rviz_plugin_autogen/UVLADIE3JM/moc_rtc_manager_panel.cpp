/****************************************************************************
** Meta object code from reading C++ file 'rtc_manager_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/rtc_manager_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtc_manager_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_plugins__RTCAutoMode_t {
    QByteArrayData data[4];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_plugins__RTCAutoMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_plugins__RTCAutoMode_t qt_meta_stringdata_rviz_plugins__RTCAutoMode = {
    {
QT_MOC_LITERAL(0, 0, 25), // "rviz_plugins::RTCAutoMode"
QT_MOC_LITERAL(1, 26, 18), // "onChangeToAutoMode"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 20) // "onChangeToManualMode"

    },
    "rviz_plugins::RTCAutoMode\0onChangeToAutoMode\0"
    "\0onChangeToManualMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_plugins__RTCAutoMode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz_plugins::RTCAutoMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RTCAutoMode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onChangeToAutoMode(); break;
        case 1: _t->onChangeToManualMode(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject rviz_plugins::RTCAutoMode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_rviz_plugins__RTCAutoMode.data,
    qt_meta_data_rviz_plugins__RTCAutoMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_plugins::RTCAutoMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_plugins::RTCAutoMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_plugins__RTCAutoMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int rviz_plugins::RTCAutoMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_rviz_plugins__RTCManagerPanel_t {
    QByteArrayData data[9];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_plugins__RTCManagerPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_plugins__RTCManagerPanel_t qt_meta_stringdata_rviz_plugins__RTCManagerPanel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "rviz_plugins::RTCManagerPanel"
QT_MOC_LITERAL(1, 30, 16), // "onClickExecution"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "onClickWait"
QT_MOC_LITERAL(4, 60, 28), // "onClickVelocityChangeRequest"
QT_MOC_LITERAL(5, 89, 24), // "onClickExecutePathChange"
QT_MOC_LITERAL(6, 114, 21), // "onClickWaitPathChange"
QT_MOC_LITERAL(7, 136, 23), // "onClickExecuteVelChange"
QT_MOC_LITERAL(8, 160, 20) // "onClickWaitVelChange"

    },
    "rviz_plugins::RTCManagerPanel\0"
    "onClickExecution\0\0onClickWait\0"
    "onClickVelocityChangeRequest\0"
    "onClickExecutePathChange\0onClickWaitPathChange\0"
    "onClickExecuteVelChange\0onClickWaitVelChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_plugins__RTCManagerPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz_plugins::RTCManagerPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RTCManagerPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onClickExecution(); break;
        case 1: _t->onClickWait(); break;
        case 2: _t->onClickVelocityChangeRequest(); break;
        case 3: _t->onClickExecutePathChange(); break;
        case 4: _t->onClickWaitPathChange(); break;
        case 5: _t->onClickExecuteVelChange(); break;
        case 6: _t->onClickWaitVelChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject rviz_plugins::RTCManagerPanel::staticMetaObject = { {
    &rviz_common::Panel::staticMetaObject,
    qt_meta_stringdata_rviz_plugins__RTCManagerPanel.data,
    qt_meta_data_rviz_plugins__RTCManagerPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_plugins::RTCManagerPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_plugins::RTCManagerPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_plugins__RTCManagerPanel.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int rviz_plugins::RTCManagerPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Panel::qt_metacall(_c, _id, _a);
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
