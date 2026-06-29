/****************************************************************************
** Meta object code from reading C++ file 'qt_settingskeybindings.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/qt/qt_settingskeybindings.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_settingskeybindings.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsKeyBindings_t {
    QByteArrayData data[14];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsKeyBindings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsKeyBindings_t qt_meta_stringdata_SettingsKeyBindings = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SettingsKeyBindings"
QT_MOC_LITERAL(1, 20, 23), // "onCurrentMachineChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 9), // "machineId"
QT_MOC_LITERAL(4, 55, 30), // "on_tableKeys_cellDoubleClicked"
QT_MOC_LITERAL(5, 86, 3), // "row"
QT_MOC_LITERAL(6, 90, 3), // "col"
QT_MOC_LITERAL(7, 94, 31), // "on_tableKeys_currentCellChanged"
QT_MOC_LITERAL(8, 126, 10), // "currentRow"
QT_MOC_LITERAL(9, 137, 13), // "currentColumn"
QT_MOC_LITERAL(10, 151, 11), // "previousRow"
QT_MOC_LITERAL(11, 163, 14), // "previousColumn"
QT_MOC_LITERAL(12, 178, 30), // "on_pushButtonClearBind_clicked"
QT_MOC_LITERAL(13, 209, 25) // "on_pushButtonBind_clicked"

    },
    "SettingsKeyBindings\0onCurrentMachineChanged\0"
    "\0machineId\0on_tableKeys_cellDoubleClicked\0"
    "row\0col\0on_tableKeys_currentCellChanged\0"
    "currentRow\0currentColumn\0previousRow\0"
    "previousColumn\0on_pushButtonClearBind_clicked\0"
    "on_pushButtonBind_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsKeyBindings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    2,   42,    2, 0x08 /* Private */,
       7,    4,   47,    2, 0x08 /* Private */,
      12,    0,   56,    2, 0x08 /* Private */,
      13,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsKeyBindings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsKeyBindings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCurrentMachineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_tableKeys_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_tableKeys_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->on_pushButtonClearBind_clicked(); break;
        case 4: _t->on_pushButtonBind_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsKeyBindings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingsKeyBindings.data,
    qt_meta_data_SettingsKeyBindings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsKeyBindings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsKeyBindings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsKeyBindings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsKeyBindings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
