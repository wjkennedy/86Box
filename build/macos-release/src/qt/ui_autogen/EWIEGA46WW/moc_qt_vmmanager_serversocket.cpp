/****************************************************************************
** Meta object code from reading C++ file 'qt_vmmanager_serversocket.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/qt/qt_vmmanager_serversocket.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_vmmanager_serversocket.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VMManagerServerSocket_t {
    QByteArrayData data[16];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VMManagerServerSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VMManagerServerSocket_t qt_meta_stringdata_VMManagerServerSocket = {
    {
QT_MOC_LITERAL(0, 0, 21), // "VMManagerServerSocket"
QT_MOC_LITERAL(1, 22, 12), // "dataReceived"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "windowStatusChanged"
QT_MOC_LITERAL(4, 56, 6), // "status"
QT_MOC_LITERAL(5, 63, 20), // "runningStatusChanged"
QT_MOC_LITERAL(6, 84, 31), // "VMManagerProtocol::RunningState"
QT_MOC_LITERAL(7, 116, 5), // "state"
QT_MOC_LITERAL(8, 122, 20), // "configurationChanged"
QT_MOC_LITERAL(9, 143, 26), // "globalConfigurationChanged"
QT_MOC_LITERAL(10, 170, 13), // "winIdReceived"
QT_MOC_LITERAL(11, 184, 3), // "WId"
QT_MOC_LITERAL(12, 188, 2), // "id"
QT_MOC_LITERAL(13, 191, 10), // "ServerType"
QT_MOC_LITERAL(14, 202, 8), // "Standard"
QT_MOC_LITERAL(15, 211, 6) // "Legacy"

    },
    "VMManagerServerSocket\0dataReceived\0\0"
    "windowStatusChanged\0status\0"
    "runningStatusChanged\0"
    "VMManagerProtocol::RunningState\0state\0"
    "configurationChanged\0globalConfigurationChanged\0"
    "winIdReceived\0WId\0id\0ServerType\0"
    "Standard\0Legacy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VMManagerServerSocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,
       8,    0,   51,    2, 0x06 /* Public */,
       9,    0,   52,    2, 0x06 /* Public */,
      10,    1,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

 // enums: name, alias, flags, count, data
      13,   13, 0x2,    2,   61,

 // enum data: key, value
      14, uint(VMManagerServerSocket::ServerType::Standard),
      15, uint(VMManagerServerSocket::ServerType::Legacy),

       0        // eod
};

void VMManagerServerSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VMManagerServerSocket *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataReceived(); break;
        case 1: _t->windowStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->runningStatusChanged((*reinterpret_cast< VMManagerProtocol::RunningState(*)>(_a[1]))); break;
        case 3: _t->configurationChanged(); break;
        case 4: _t->globalConfigurationChanged(); break;
        case 5: _t->winIdReceived((*reinterpret_cast< WId(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VMManagerServerSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerServerSocket::dataReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VMManagerServerSocket::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerServerSocket::windowStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VMManagerServerSocket::*)(VMManagerProtocol::RunningState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerServerSocket::runningStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VMManagerServerSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerServerSocket::configurationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VMManagerServerSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerServerSocket::globalConfigurationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VMManagerServerSocket::*)(WId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerServerSocket::winIdReceived)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VMManagerServerSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_VMManagerServerSocket.data,
    qt_meta_data_VMManagerServerSocket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VMManagerServerSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VMManagerServerSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VMManagerServerSocket.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VMManagerServerSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void VMManagerServerSocket::dataReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VMManagerServerSocket::windowStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VMManagerServerSocket::runningStatusChanged(VMManagerProtocol::RunningState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VMManagerServerSocket::configurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void VMManagerServerSocket::globalConfigurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void VMManagerServerSocket::winIdReceived(WId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
