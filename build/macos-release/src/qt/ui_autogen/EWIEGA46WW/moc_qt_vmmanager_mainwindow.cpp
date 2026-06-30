/****************************************************************************
** Meta object code from reading C++ file 'qt_vmmanager_mainwindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/qt/qt_vmmanager_mainwindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_vmmanager_mainwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VMManagerMainWindow_t {
    QByteArrayData data[17];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VMManagerMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VMManagerMainWindow_t qt_meta_stringdata_VMManagerMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 19), // "VMManagerMainWindow"
QT_MOC_LITERAL(1, 20, 18), // "preferencesUpdated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "languageUpdated"
QT_MOC_LITERAL(4, 56, 13), // "setStatusLeft"
QT_MOC_LITERAL(5, 70, 4), // "text"
QT_MOC_LITERAL(6, 75, 14), // "setStatusRight"
QT_MOC_LITERAL(7, 90, 14), // "updateLanguage"
QT_MOC_LITERAL(8, 105, 15), // "vmmStateChanged"
QT_MOC_LITERAL(9, 121, 22), // "const VMManagerSystem*"
QT_MOC_LITERAL(10, 144, 9), // "sysconfig"
QT_MOC_LITERAL(11, 154, 32), // "on_actionHide_tool_bar_triggered"
QT_MOC_LITERAL(12, 187, 20), // "preferencesTriggered"
QT_MOC_LITERAL(13, 208, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(14, 232, 32), // "on_actionDocumentation_triggered"
QT_MOC_LITERAL(15, 265, 30), // "on_actionAbout_86Box_triggered"
QT_MOC_LITERAL(16, 296, 27) // "on_actionAbout_Qt_triggered"

    },
    "VMManagerMainWindow\0preferencesUpdated\0"
    "\0languageUpdated\0setStatusLeft\0text\0"
    "setStatusRight\0updateLanguage\0"
    "vmmStateChanged\0const VMManagerSystem*\0"
    "sysconfig\0on_actionHide_tool_bar_triggered\0"
    "preferencesTriggered\0on_actionExit_triggered\0"
    "on_actionDocumentation_triggered\0"
    "on_actionAbout_86Box_triggered\0"
    "on_actionAbout_Qt_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VMManagerMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   76,    2, 0x0a /* Public */,
       6,    1,   79,    2, 0x0a /* Public */,
       7,    0,   82,    2, 0x0a /* Public */,
       8,    1,   83,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    0,   87,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VMManagerMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VMManagerMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->preferencesUpdated(); break;
        case 1: _t->languageUpdated(); break;
        case 2: _t->setStatusLeft((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setStatusRight((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateLanguage(); break;
        case 5: _t->vmmStateChanged((*reinterpret_cast< const VMManagerSystem*(*)>(_a[1]))); break;
        case 6: _t->on_actionHide_tool_bar_triggered(); break;
        case 7: _t->preferencesTriggered(); break;
        case 8: _t->on_actionExit_triggered(); break;
        case 9: _t->on_actionDocumentation_triggered(); break;
        case 10: _t->on_actionAbout_86Box_triggered(); break;
        case 11: _t->on_actionAbout_Qt_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VMManagerMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerMainWindow::preferencesUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VMManagerMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerMainWindow::languageUpdated)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VMManagerMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_VMManagerMainWindow.data,
    qt_meta_data_VMManagerMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VMManagerMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VMManagerMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VMManagerMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int VMManagerMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void VMManagerMainWindow::preferencesUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VMManagerMainWindow::languageUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
