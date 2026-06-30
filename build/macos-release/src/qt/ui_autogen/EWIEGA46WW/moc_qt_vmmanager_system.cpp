/****************************************************************************
** Meta object code from reading C++ file 'qt_vmmanager_system.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/qt/qt_vmmanager_system.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_vmmanager_system.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VMManagerSystem_t {
    QByteArrayData data[27];
    char stringdata0[441];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VMManagerSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VMManagerSystem_t qt_meta_stringdata_VMManagerSystem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "VMManagerSystem"
QT_MOC_LITERAL(1, 16, 19), // "windowStatusChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "itemDataChanged"
QT_MOC_LITERAL(4, 53, 26), // "clientProcessStatusChanged"
QT_MOC_LITERAL(5, 80, 20), // "configurationChanged"
QT_MOC_LITERAL(6, 101, 16), // "VMManagerSystem*"
QT_MOC_LITERAL(7, 118, 9), // "sysconfig"
QT_MOC_LITERAL(8, 128, 26), // "globalConfigurationChanged"
QT_MOC_LITERAL(9, 155, 11), // "launch86Box"
QT_MOC_LITERAL(10, 167, 8), // "settings"
QT_MOC_LITERAL(11, 176, 14), // "launchSettings"
QT_MOC_LITERAL(12, 191, 18), // "startButtonPressed"
QT_MOC_LITERAL(13, 210, 20), // "restartButtonPressed"
QT_MOC_LITERAL(14, 231, 18), // "pauseButtonPressed"
QT_MOC_LITERAL(15, 250, 28), // "shutdownRequestButtonPressed"
QT_MOC_LITERAL(16, 279, 26), // "shutdownForceButtonPressed"
QT_MOC_LITERAL(17, 306, 16), // "cadButtonPressed"
QT_MOC_LITERAL(18, 323, 12), // "reloadConfig"
QT_MOC_LITERAL(19, 336, 30), // "sendGlobalConfigurationChanged"
QT_MOC_LITERAL(20, 367, 13), // "ProcessStatus"
QT_MOC_LITERAL(21, 381, 7), // "Stopped"
QT_MOC_LITERAL(22, 389, 7), // "Running"
QT_MOC_LITERAL(23, 397, 6), // "Paused"
QT_MOC_LITERAL(24, 404, 13), // "PausedWaiting"
QT_MOC_LITERAL(25, 418, 14), // "RunningWaiting"
QT_MOC_LITERAL(26, 433, 7) // "Unknown"

    },
    "VMManagerSystem\0windowStatusChanged\0"
    "\0itemDataChanged\0clientProcessStatusChanged\0"
    "configurationChanged\0VMManagerSystem*\0"
    "sysconfig\0globalConfigurationChanged\0"
    "launch86Box\0settings\0launchSettings\0"
    "startButtonPressed\0restartButtonPressed\0"
    "pauseButtonPressed\0shutdownRequestButtonPressed\0"
    "shutdownForceButtonPressed\0cadButtonPressed\0"
    "reloadConfig\0sendGlobalConfigurationChanged\0"
    "ProcessStatus\0Stopped\0Running\0Paused\0"
    "PausedWaiting\0RunningWaiting\0Unknown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VMManagerSystem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       1,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    1,   97,    2, 0x06 /* Public */,
       8,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  101,    2, 0x0a /* Public */,
       9,    0,  104,    2, 0x2a /* Public | MethodCloned */,
      11,    0,  105,    2, 0x0a /* Public */,
      12,    0,  106,    2, 0x0a /* Public */,
      13,    0,  107,    2, 0x0a /* Public */,
      14,    0,  108,    2, 0x0a /* Public */,
      15,    0,  109,    2, 0x0a /* Public */,
      16,    0,  110,    2, 0x0a /* Public */,
      17,    0,  111,    2, 0x0a /* Public */,
      18,    0,  112,    2, 0x0a /* Public */,
      19,    0,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      20,   20, 0x2,    6,  119,

 // enum data: key, value
      21, uint(VMManagerSystem::ProcessStatus::Stopped),
      22, uint(VMManagerSystem::ProcessStatus::Running),
      23, uint(VMManagerSystem::ProcessStatus::Paused),
      24, uint(VMManagerSystem::ProcessStatus::PausedWaiting),
      25, uint(VMManagerSystem::ProcessStatus::RunningWaiting),
      26, uint(VMManagerSystem::ProcessStatus::Unknown),

       0        // eod
};

void VMManagerSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VMManagerSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->windowStatusChanged(); break;
        case 1: _t->itemDataChanged(); break;
        case 2: _t->clientProcessStatusChanged(); break;
        case 3: _t->configurationChanged((*reinterpret_cast< VMManagerSystem*(*)>(_a[1]))); break;
        case 4: _t->globalConfigurationChanged(); break;
        case 5: _t->launch86Box((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->launch86Box(); break;
        case 7: _t->launchSettings(); break;
        case 8: _t->startButtonPressed(); break;
        case 9: _t->restartButtonPressed(); break;
        case 10: _t->pauseButtonPressed(); break;
        case 11: _t->shutdownRequestButtonPressed(); break;
        case 12: _t->shutdownForceButtonPressed(); break;
        case 13: _t->cadButtonPressed(); break;
        case 14: _t->reloadConfig(); break;
        case 15: _t->sendGlobalConfigurationChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VMManagerSystem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VMManagerSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerSystem::windowStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VMManagerSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerSystem::itemDataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VMManagerSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerSystem::clientProcessStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VMManagerSystem::*)(VMManagerSystem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerSystem::configurationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VMManagerSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VMManagerSystem::globalConfigurationChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VMManagerSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_VMManagerSystem.data,
    qt_meta_data_VMManagerSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VMManagerSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VMManagerSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VMManagerSystem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VMManagerSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void VMManagerSystem::windowStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VMManagerSystem::itemDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VMManagerSystem::clientProcessStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VMManagerSystem::configurationChanged(VMManagerSystem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VMManagerSystem::globalConfigurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_VMManager_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VMManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VMManager_t qt_meta_stringdata_VMManager = {
    {
QT_MOC_LITERAL(0, 0, 9) // "VMManager"

    },
    "VMManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VMManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject VMManager::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_VMManager.data,
    qt_meta_data_VMManager,
    nullptr,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_VMManager__Display_t {
    QByteArrayData data[27];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VMManager__Display_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VMManager__Display_t qt_meta_stringdata_VMManager__Display = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VMManager::Display"
QT_MOC_LITERAL(1, 19, 4), // "Name"
QT_MOC_LITERAL(2, 24, 7), // "Machine"
QT_MOC_LITERAL(3, 32, 3), // "CPU"
QT_MOC_LITERAL(4, 36, 6), // "Memory"
QT_MOC_LITERAL(5, 43, 5), // "Video"
QT_MOC_LITERAL(6, 49, 5), // "Disks"
QT_MOC_LITERAL(7, 55, 6), // "Floppy"
QT_MOC_LITERAL(8, 62, 2), // "CD"
QT_MOC_LITERAL(9, 65, 5), // "RDisk"
QT_MOC_LITERAL(10, 71, 2), // "MO"
QT_MOC_LITERAL(11, 74, 4), // "Tape"
QT_MOC_LITERAL(12, 79, 14), // "SCSIController"
QT_MOC_LITERAL(13, 94, 17), // "StorageController"
QT_MOC_LITERAL(14, 112, 7), // "MidiOut"
QT_MOC_LITERAL(15, 120, 8), // "Joystick"
QT_MOC_LITERAL(16, 129, 6), // "Serial"
QT_MOC_LITERAL(17, 136, 8), // "Parallel"
QT_MOC_LITERAL(18, 145, 5), // "Audio"
QT_MOC_LITERAL(19, 151, 6), // "Voodoo"
QT_MOC_LITERAL(20, 158, 3), // "NIC"
QT_MOC_LITERAL(21, 162, 8), // "Keyboard"
QT_MOC_LITERAL(22, 171, 5), // "Mouse"
QT_MOC_LITERAL(23, 177, 6), // "IsaRtc"
QT_MOC_LITERAL(24, 184, 6), // "IsaMem"
QT_MOC_LITERAL(25, 191, 6), // "IsaRom"
QT_MOC_LITERAL(26, 198, 7) // "Unknown"

    },
    "VMManager::Display\0Name\0Machine\0CPU\0"
    "Memory\0Video\0Disks\0Floppy\0CD\0RDisk\0"
    "MO\0Tape\0SCSIController\0StorageController\0"
    "MidiOut\0Joystick\0Serial\0Parallel\0Audio\0"
    "Voodoo\0NIC\0Keyboard\0Mouse\0IsaRtc\0"
    "IsaMem\0IsaRom\0Unknown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VMManager__Display[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,   25,   19,

 // enum data: key, value
       2, uint(VMManager::Display::Name::Machine),
       3, uint(VMManager::Display::Name::CPU),
       4, uint(VMManager::Display::Name::Memory),
       5, uint(VMManager::Display::Name::Video),
       6, uint(VMManager::Display::Name::Disks),
       7, uint(VMManager::Display::Name::Floppy),
       8, uint(VMManager::Display::Name::CD),
       9, uint(VMManager::Display::Name::RDisk),
      10, uint(VMManager::Display::Name::MO),
      11, uint(VMManager::Display::Name::Tape),
      12, uint(VMManager::Display::Name::SCSIController),
      13, uint(VMManager::Display::Name::StorageController),
      14, uint(VMManager::Display::Name::MidiOut),
      15, uint(VMManager::Display::Name::Joystick),
      16, uint(VMManager::Display::Name::Serial),
      17, uint(VMManager::Display::Name::Parallel),
      18, uint(VMManager::Display::Name::Audio),
      19, uint(VMManager::Display::Name::Voodoo),
      20, uint(VMManager::Display::Name::NIC),
      21, uint(VMManager::Display::Name::Keyboard),
      22, uint(VMManager::Display::Name::Mouse),
      23, uint(VMManager::Display::Name::IsaRtc),
      24, uint(VMManager::Display::Name::IsaMem),
      25, uint(VMManager::Display::Name::IsaRom),
      26, uint(VMManager::Display::Name::Unknown),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject VMManager::Display::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_VMManager__Display.data,
    qt_meta_data_VMManager__Display,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
