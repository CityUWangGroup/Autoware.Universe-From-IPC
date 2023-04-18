/****************************************************************************
** Meta object code from reading C++ file 'display.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/drivable_area/display.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'display.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_plugins__AutowareDrivableAreaDisplay_t {
    QByteArrayData data[9];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_plugins__AutowareDrivableAreaDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_plugins__AutowareDrivableAreaDisplay_t qt_meta_stringdata_rviz_plugins__AutowareDrivableAreaDisplay = {
    {
QT_MOC_LITERAL(0, 0, 41), // "rviz_plugins::AutowareDrivabl..."
QT_MOC_LITERAL(1, 42, 10), // "mapUpdated"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 7), // "showMap"
QT_MOC_LITERAL(4, 62, 11), // "updateAlpha"
QT_MOC_LITERAL(5, 74, 15), // "updateDrawUnder"
QT_MOC_LITERAL(6, 90, 13), // "updatePalette"
QT_MOC_LITERAL(7, 104, 12), // "transformMap"
QT_MOC_LITERAL(8, 117, 20) // "updateMapUpdateTopic"

    },
    "rviz_plugins::AutowareDrivableAreaDisplay\0"
    "mapUpdated\0\0showMap\0updateAlpha\0"
    "updateDrawUnder\0updatePalette\0"
    "transformMap\0updateMapUpdateTopic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_plugins__AutowareDrivableAreaDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    0,   54,    2, 0x09 /* Protected */,
       8,    0,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz_plugins::AutowareDrivableAreaDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutowareDrivableAreaDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapUpdated(); break;
        case 1: _t->showMap(); break;
        case 2: _t->updateAlpha(); break;
        case 3: _t->updateDrawUnder(); break;
        case 4: _t->updatePalette(); break;
        case 5: _t->transformMap(); break;
        case 6: _t->updateMapUpdateTopic(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutowareDrivableAreaDisplay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutowareDrivableAreaDisplay::mapUpdated)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject rviz_plugins::AutowareDrivableAreaDisplay::staticMetaObject = { {
    &rviz_common::MessageFilterDisplay<autoware_auto_planning_msgs::msg::Path>::staticMetaObject,
    qt_meta_stringdata_rviz_plugins__AutowareDrivableAreaDisplay.data,
    qt_meta_data_rviz_plugins__AutowareDrivableAreaDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_plugins::AutowareDrivableAreaDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_plugins::AutowareDrivableAreaDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_plugins__AutowareDrivableAreaDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::MessageFilterDisplay<autoware_auto_planning_msgs::msg::Path>::qt_metacast(_clname);
}

int rviz_plugins::AutowareDrivableAreaDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::MessageFilterDisplay<autoware_auto_planning_msgs::msg::Path>::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void rviz_plugins::AutowareDrivableAreaDisplay::mapUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
