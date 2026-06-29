/****************************************************************************
** Meta object code from reading C++ file 'qt_settingsfloppycdrom.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/qt/qt_settingsfloppycdrom.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_settingsfloppycdrom.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsFloppyCDROM_t {
    QByteArrayData data[18];
    char stringdata0[391];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsFloppyCDROM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsFloppyCDROM_t qt_meta_stringdata_SettingsFloppyCDROM = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SettingsFloppyCDROM"
QT_MOC_LITERAL(1, 20, 19), // "cdromChannelChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 18), // "onFloppyRowChanged"
QT_MOC_LITERAL(4, 60, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 72, 7), // "current"
QT_MOC_LITERAL(6, 80, 31), // "on_comboBoxFloppyType_activated"
QT_MOC_LITERAL(7, 112, 5), // "index"
QT_MOC_LITERAL(8, 118, 36), // "on_checkBoxTurboTimings_state..."
QT_MOC_LITERAL(9, 155, 4), // "arg1"
QT_MOC_LITERAL(10, 160, 32), // "on_checkBoxCheckBPB_stateChanged"
QT_MOC_LITERAL(11, 193, 32), // "on_comboBoxFloppyAudio_activated"
QT_MOC_LITERAL(12, 226, 17), // "onCDROMRowChanged"
QT_MOC_LITERAL(13, 244, 24), // "on_comboBoxBus_activated"
QT_MOC_LITERAL(14, 269, 34), // "on_comboBoxBus_currentIndexCh..."
QT_MOC_LITERAL(15, 304, 28), // "on_comboBoxChannel_activated"
QT_MOC_LITERAL(16, 333, 26), // "on_comboBoxSpeed_activated"
QT_MOC_LITERAL(17, 360, 30) // "on_comboBoxCDROMType_activated"

    },
    "SettingsFloppyCDROM\0cdromChannelChanged\0"
    "\0onFloppyRowChanged\0QModelIndex\0current\0"
    "on_comboBoxFloppyType_activated\0index\0"
    "on_checkBoxTurboTimings_stateChanged\0"
    "arg1\0on_checkBoxCheckBPB_stateChanged\0"
    "on_comboBoxFloppyAudio_activated\0"
    "onCDROMRowChanged\0on_comboBoxBus_activated\0"
    "on_comboBoxBus_currentIndexChanged\0"
    "on_comboBoxChannel_activated\0"
    "on_comboBoxSpeed_activated\0"
    "on_comboBoxCDROMType_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsFloppyCDROM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   75,    2, 0x08 /* Private */,
       6,    1,   78,    2, 0x08 /* Private */,
       8,    1,   81,    2, 0x08 /* Private */,
      10,    1,   84,    2, 0x08 /* Private */,
      11,    1,   87,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      14,    1,   96,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,
      16,    1,  102,    2, 0x08 /* Private */,
      17,    1,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void SettingsFloppyCDROM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsFloppyCDROM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cdromChannelChanged(); break;
        case 1: _t->onFloppyRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_comboBoxFloppyType_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_checkBoxTurboTimings_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_checkBoxCheckBPB_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_comboBoxFloppyAudio_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onCDROMRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_comboBoxBus_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_comboBoxBus_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_comboBoxChannel_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_comboBoxSpeed_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_comboBoxCDROMType_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingsFloppyCDROM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsFloppyCDROM::cdromChannelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsFloppyCDROM::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingsFloppyCDROM.data,
    qt_meta_data_SettingsFloppyCDROM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsFloppyCDROM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsFloppyCDROM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsFloppyCDROM.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsFloppyCDROM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SettingsFloppyCDROM::cdromChannelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
