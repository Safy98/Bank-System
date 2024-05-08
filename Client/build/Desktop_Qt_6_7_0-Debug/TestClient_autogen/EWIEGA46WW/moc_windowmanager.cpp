/****************************************************************************
** Meta object code from reading C++ file 'windowmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../windowmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWindowManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWindowManagerENDCLASS = QtMocHelpers::stringData(
    "WindowManager",
    "makeRequest",
    "",
    "Data",
    "failedLoginSignal",
    "errorState",
    "responeForAdmin",
    "response",
    "responeForUser",
    "responeForMainWindow",
    "requestConnection",
    "requestDisconnection",
    "responseReady",
    "requestReady",
    "logout",
    "createMainUI",
    "createAdminUI",
    "createUserUI",
    "name",
    "closeAdminUI",
    "closeUserUI",
    "closeMainUI",
    "connectToTheServer"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWindowManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  116,    2, 0x06,    1 /* Public */,
       4,    1,  119,    2, 0x06,    3 /* Public */,
       6,    1,  122,    2, 0x06,    5 /* Public */,
       8,    1,  125,    2, 0x06,    7 /* Public */,
       9,    1,  128,    2, 0x06,    9 /* Public */,
      10,    0,  131,    2, 0x06,   11 /* Public */,
      11,    0,  132,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,  133,    2, 0x0a,   13 /* Public */,
      13,    1,  136,    2, 0x0a,   15 /* Public */,
      14,    0,  139,    2, 0x0a,   17 /* Public */,
      15,    0,  140,    2, 0x0a,   18 /* Public */,
      16,    0,  141,    2, 0x0a,   19 /* Public */,
      17,    1,  142,    2, 0x0a,   20 /* Public */,
      19,    0,  145,    2, 0x0a,   22 /* Public */,
      20,    0,  146,    2, 0x0a,   23 /* Public */,
      21,    0,  147,    2, 0x0a,   24 /* Public */,
      22,    0,  148,    2, 0x0a,   25 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QJsonObject,    7,
    QMetaType::Void, QMetaType::QJsonObject,    7,
    QMetaType::Void, QMetaType::QJsonObject,    7,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject WindowManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSWindowManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWindowManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWindowManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WindowManager, std::true_type>,
        // method 'makeRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'failedLoginSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'responeForAdmin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'responeForUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'responeForMainWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'requestConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestDisconnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'responseReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'requestReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createMainUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createAdminUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createUserUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'closeAdminUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeUserUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeMainUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectToTheServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void WindowManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WindowManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->makeRequest((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 1: _t->failedLoginSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->responeForAdmin((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 3: _t->responeForUser((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 4: _t->responeForMainWindow((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 5: _t->requestConnection(); break;
        case 6: _t->requestDisconnection(); break;
        case 7: _t->responseReady((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 8: _t->requestReady((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 9: _t->logout(); break;
        case 10: _t->createMainUI(); break;
        case 11: _t->createAdminUI(); break;
        case 12: _t->createUserUI((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->closeAdminUI(); break;
        case 14: _t->closeUserUI(); break;
        case 15: _t->closeMainUI(); break;
        case 16: _t->connectToTheServer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WindowManager::*)(QJsonObject );
            if (_t _q_method = &WindowManager::makeRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WindowManager::*)(int );
            if (_t _q_method = &WindowManager::failedLoginSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WindowManager::*)(QJsonObject );
            if (_t _q_method = &WindowManager::responeForAdmin; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WindowManager::*)(QJsonObject );
            if (_t _q_method = &WindowManager::responeForUser; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WindowManager::*)(QJsonObject );
            if (_t _q_method = &WindowManager::responeForMainWindow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WindowManager::*)();
            if (_t _q_method = &WindowManager::requestConnection; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WindowManager::*)();
            if (_t _q_method = &WindowManager::requestDisconnection; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *WindowManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWindowManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WindowManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void WindowManager::makeRequest(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WindowManager::failedLoginSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WindowManager::responeForAdmin(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WindowManager::responeForUser(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WindowManager::responeForMainWindow(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WindowManager::requestConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WindowManager::requestDisconnection()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
