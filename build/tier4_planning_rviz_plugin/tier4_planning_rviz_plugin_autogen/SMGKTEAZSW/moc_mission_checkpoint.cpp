/****************************************************************************
** Meta object code from reading C++ file 'mission_checkpoint.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/mission_checkpoint/mission_checkpoint.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mission_checkpoint.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_plugins__MissionCheckpointTool_t {
    QByteArrayData data[3];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_plugins__MissionCheckpointTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_plugins__MissionCheckpointTool_t qt_meta_stringdata_rviz_plugins__MissionCheckpointTool = {
    {
QT_MOC_LITERAL(0, 0, 35), // "rviz_plugins::MissionCheckpoi..."
QT_MOC_LITERAL(1, 36, 11), // "updateTopic"
QT_MOC_LITERAL(2, 48, 0) // ""

    },
    "rviz_plugins::MissionCheckpointTool\0"
    "updateTopic\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_plugins__MissionCheckpointTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void rviz_plugins::MissionCheckpointTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MissionCheckpointTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTopic(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject rviz_plugins::MissionCheckpointTool::staticMetaObject = { {
    &rviz_default_plugins::tools::PoseTool::staticMetaObject,
    qt_meta_stringdata_rviz_plugins__MissionCheckpointTool.data,
    qt_meta_data_rviz_plugins__MissionCheckpointTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_plugins::MissionCheckpointTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_plugins::MissionCheckpointTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_plugins__MissionCheckpointTool.stringdata0))
        return static_cast<void*>(this);
    return rviz_default_plugins::tools::PoseTool::qt_metacast(_clname);
}

int rviz_plugins::MissionCheckpointTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_default_plugins::tools::PoseTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
