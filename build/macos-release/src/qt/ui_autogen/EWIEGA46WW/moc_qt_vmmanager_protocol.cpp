/****************************************************************************
** Meta object code from reading C++ file 'qt_vmmanager_protocol.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/qt/qt_vmmanager_protocol.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_vmmanager_protocol.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VMManagerProtocol_t {
    QByteArrayData data[27];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VMManagerProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VMManagerProtocol_t qt_meta_stringdata_VMManagerProtocol = {
    {
QT_MOC_LITERAL(0, 0, 17), // "VMManagerProtocol"
QT_MOC_LITERAL(1, 18, 6), // "Sender"
QT_MOC_LITERAL(2, 25, 7), // "Manager"
QT_MOC_LITERAL(3, 33, 6), // "Client"
QT_MOC_LITERAL(4, 40, 14), // "ManagerMessage"
QT_MOC_LITERAL(5, 55, 13), // "RequestStatus"
QT_MOC_LITERAL(6, 69, 5), // "Pause"
QT_MOC_LITERAL(7, 75, 10), // "CtrlAltDel"
QT_MOC_LITERAL(8, 86, 12), // "ShowSettings"
QT_MOC_LITERAL(9, 99, 7), // "ResetVM"
QT_MOC_LITERAL(10, 107, 15), // "RequestShutdown"
QT_MOC_LITERAL(11, 123, 13), // "ForceShutdown"
QT_MOC_LITERAL(12, 137, 26), // "GlobalConfigurationChanged"
QT_MOC_LITERAL(13, 164, 14), // "UnknownMessage"
QT_MOC_LITERAL(14, 179, 13), // "ClientMessage"
QT_MOC_LITERAL(15, 193, 6), // "Status"
QT_MOC_LITERAL(16, 200, 13), // "WindowBlocked"
QT_MOC_LITERAL(17, 214, 15), // "WindowUnblocked"
QT_MOC_LITERAL(18, 230, 19), // "RunningStateChanged"
QT_MOC_LITERAL(19, 250, 20), // "ConfigurationChanged"
QT_MOC_LITERAL(20, 271, 12), // "WinIdMessage"
QT_MOC_LITERAL(21, 284, 12), // "RunningState"
QT_MOC_LITERAL(22, 297, 7), // "Running"
QT_MOC_LITERAL(23, 305, 6), // "Paused"
QT_MOC_LITERAL(24, 312, 14), // "RunningWaiting"
QT_MOC_LITERAL(25, 327, 13), // "PausedWaiting"
QT_MOC_LITERAL(26, 341, 7) // "Unknown"

    },
    "VMManagerProtocol\0Sender\0Manager\0"
    "Client\0ManagerMessage\0RequestStatus\0"
    "Pause\0CtrlAltDel\0ShowSettings\0ResetVM\0"
    "RequestShutdown\0ForceShutdown\0"
    "GlobalConfigurationChanged\0UnknownMessage\0"
    "ClientMessage\0Status\0WindowBlocked\0"
    "WindowUnblocked\0RunningStateChanged\0"
    "ConfigurationChanged\0WinIdMessage\0"
    "RunningState\0Running\0Paused\0RunningWaiting\0"
    "PausedWaiting\0Unknown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VMManagerProtocol[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       4,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    2,   34,
       4,    4, 0x2,    9,   38,
      14,   14, 0x2,    8,   56,
      21,   21, 0x2,    5,   72,

 // enum data: key, value
       2, uint(VMManagerProtocol::Sender::Manager),
       3, uint(VMManagerProtocol::Sender::Client),
       5, uint(VMManagerProtocol::ManagerMessage::RequestStatus),
       6, uint(VMManagerProtocol::ManagerMessage::Pause),
       7, uint(VMManagerProtocol::ManagerMessage::CtrlAltDel),
       8, uint(VMManagerProtocol::ManagerMessage::ShowSettings),
       9, uint(VMManagerProtocol::ManagerMessage::ResetVM),
      10, uint(VMManagerProtocol::ManagerMessage::RequestShutdown),
      11, uint(VMManagerProtocol::ManagerMessage::ForceShutdown),
      12, uint(VMManagerProtocol::ManagerMessage::GlobalConfigurationChanged),
      13, uint(VMManagerProtocol::ManagerMessage::UnknownMessage),
      15, uint(VMManagerProtocol::ClientMessage::Status),
      16, uint(VMManagerProtocol::ClientMessage::WindowBlocked),
      17, uint(VMManagerProtocol::ClientMessage::WindowUnblocked),
      18, uint(VMManagerProtocol::ClientMessage::RunningStateChanged),
      19, uint(VMManagerProtocol::ClientMessage::ConfigurationChanged),
      20, uint(VMManagerProtocol::ClientMessage::WinIdMessage),
      12, uint(VMManagerProtocol::ClientMessage::GlobalConfigurationChanged),
      13, uint(VMManagerProtocol::ClientMessage::UnknownMessage),
      22, uint(VMManagerProtocol::RunningState::Running),
      23, uint(VMManagerProtocol::RunningState::Paused),
      24, uint(VMManagerProtocol::RunningState::RunningWaiting),
      25, uint(VMManagerProtocol::RunningState::PausedWaiting),
      26, uint(VMManagerProtocol::RunningState::Unknown),

       0        // eod
};

void VMManagerProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject VMManagerProtocol::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VMManagerProtocol.data,
    qt_meta_data_VMManagerProtocol,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VMManagerProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VMManagerProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VMManagerProtocol.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VMManagerProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
