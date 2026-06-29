/****************************************************************************
** Meta object code from reading C++ file 'qt_settingsharddisks.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/qt/qt_settingsharddisks.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_settingsharddisks.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsHarddisks_t {
    QByteArrayData data[14];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsHarddisks_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsHarddisks_t qt_meta_stringdata_SettingsHarddisks = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SettingsHarddisks"
QT_MOC_LITERAL(1, 18, 19), // "driveChannelChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 34), // "on_comboBoxBus_currentIndexCh..."
QT_MOC_LITERAL(4, 74, 5), // "index"
QT_MOC_LITERAL(5, 80, 38), // "on_comboBoxChannel_currentInd..."
QT_MOC_LITERAL(6, 119, 36), // "on_comboBoxSpeed_currentIndex..."
QT_MOC_LITERAL(7, 156, 36), // "on_comboBoxAudio_currentIndex..."
QT_MOC_LITERAL(8, 193, 24), // "on_pushButtonNew_clicked"
QT_MOC_LITERAL(9, 218, 29), // "on_pushButtonExisting_clicked"
QT_MOC_LITERAL(10, 248, 27), // "on_pushButtonRemove_clicked"
QT_MOC_LITERAL(11, 276, 17), // "onTableRowChanged"
QT_MOC_LITERAL(12, 294, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 306, 7) // "current"

    },
    "SettingsHarddisks\0driveChannelChanged\0"
    "\0on_comboBoxBus_currentIndexChanged\0"
    "index\0on_comboBoxChannel_currentIndexChanged\0"
    "on_comboBoxSpeed_currentIndexChanged\0"
    "on_comboBoxAudio_currentIndexChanged\0"
    "on_pushButtonNew_clicked\0"
    "on_pushButtonExisting_clicked\0"
    "on_pushButtonRemove_clicked\0"
    "onTableRowChanged\0QModelIndex\0current"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsHarddisks[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void SettingsHarddisks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsHarddisks *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->driveChannelChanged(); break;
        case 1: _t->on_comboBoxBus_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_comboBoxChannel_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_comboBoxSpeed_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_comboBoxAudio_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pushButtonNew_clicked(); break;
        case 6: _t->on_pushButtonExisting_clicked(); break;
        case 7: _t->on_pushButtonRemove_clicked(); break;
        case 8: _t->onTableRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingsHarddisks::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsHarddisks::driveChannelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsHarddisks::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingsHarddisks.data,
    qt_meta_data_SettingsHarddisks,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsHarddisks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsHarddisks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsHarddisks.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsHarddisks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SettingsHarddisks::driveChannelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
