/****************************************************************************
** Meta object code from reading C++ file 'admininterface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../admininterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admininterface.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAdminInterfaceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAdminInterfaceENDCLASS = QtMocHelpers::stringData(
    "AdminInterface",
    "adminRequest",
    "",
    "request",
    "connectToTheServer",
    "logout",
    "on_pbCreateUser_clicked",
    "on_pbGetAccountNum_clicked",
    "on_pbDeleteeUser_clicked",
    "on_pbUpdateUser_clicked",
    "on_pushButton_logout_clicked",
    "on_pbViewTransHistory_clicked",
    "createUserRequest",
    "fullName",
    "age",
    "userName",
    "password",
    "confPassword",
    "isAdmin",
    "getAccountNumberRequest",
    "username",
    "deleteUserRequest",
    "accountNumber",
    "updateUserRequest",
    "sendViewTransHistory",
    "count",
    "GetAccountBalance",
    "responseReady",
    "response",
    "backPressed",
    "createTransHistoryUI",
    "createViewDBUI",
    "createGetAccNumUI",
    "connectedSuccessfully",
    "disconnected",
    "on_pbViewDB_clicked",
    "on_pbGetAccountBalance_clicked",
    "on_pushButton_connectState_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAdminInterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  164,    2, 0x06,    1 /* Public */,
       4,    0,  167,    2, 0x06,    3 /* Public */,
       5,    0,  168,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  169,    2, 0x08,    5 /* Private */,
       7,    0,  170,    2, 0x08,    6 /* Private */,
       8,    0,  171,    2, 0x08,    7 /* Private */,
       9,    0,  172,    2, 0x08,    8 /* Private */,
      10,    0,  173,    2, 0x08,    9 /* Private */,
      11,    0,  174,    2, 0x08,   10 /* Private */,
      12,    6,  175,    2, 0x0a,   11 /* Public */,
      19,    1,  188,    2, 0x0a,   18 /* Public */,
      21,    1,  191,    2, 0x0a,   20 /* Public */,
      23,    7,  194,    2, 0x0a,   22 /* Public */,
      24,    2,  209,    2, 0x0a,   30 /* Public */,
      26,    1,  214,    2, 0x0a,   33 /* Public */,
      27,    1,  217,    2, 0x0a,   35 /* Public */,
      29,    0,  220,    2, 0x0a,   37 /* Public */,
      30,    0,  221,    2, 0x08,   38 /* Private */,
      31,    0,  222,    2, 0x08,   39 /* Private */,
      32,    0,  223,    2, 0x08,   40 /* Private */,
      33,    0,  224,    2, 0x08,   41 /* Private */,
      34,    0,  225,    2, 0x08,   42 /* Private */,
      35,    0,  226,    2, 0x08,   43 /* Private */,
      36,    0,  227,    2, 0x08,   44 /* Private */,
      37,    0,  228,    2, 0x08,   45 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   13,   14,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   22,   13,   14,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   22,   25,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QJsonObject,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AdminInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSAdminInterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAdminInterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAdminInterfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminInterface, std::true_type>,
        // method 'adminRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'connectToTheServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbCreateUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbGetAccountNum_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbDeleteeUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbUpdateUser_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_logout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbViewTransHistory_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createUserRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getAccountNumberRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'deleteUserRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateUserRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendViewTransHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'GetAccountBalance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'responseReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'backPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createTransHistoryUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createViewDBUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createGetAccNumUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectedSuccessfully'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbViewDB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbGetAccountBalance_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_connectState_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->adminRequest((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 1: _t->connectToTheServer(); break;
        case 2: _t->logout(); break;
        case 3: _t->on_pbCreateUser_clicked(); break;
        case 4: _t->on_pbGetAccountNum_clicked(); break;
        case 5: _t->on_pbDeleteeUser_clicked(); break;
        case 6: _t->on_pbUpdateUser_clicked(); break;
        case 7: _t->on_pushButton_logout_clicked(); break;
        case 8: _t->on_pbViewTransHistory_clicked(); break;
        case 9: _t->createUserRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6]))); break;
        case 10: _t->getAccountNumberRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->deleteUserRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->updateUserRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        case 13: _t->sendViewTransHistory((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->GetAccountBalance((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->responseReady((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 16: _t->backPressed(); break;
        case 17: _t->createTransHistoryUI(); break;
        case 18: _t->createViewDBUI(); break;
        case 19: _t->createGetAccNumUI(); break;
        case 20: _t->connectedSuccessfully(); break;
        case 21: _t->disconnected(); break;
        case 22: _t->on_pbViewDB_clicked(); break;
        case 23: _t->on_pbGetAccountBalance_clicked(); break;
        case 24: _t->on_pushButton_connectState_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdminInterface::*)(QJsonObject );
            if (_t _q_method = &AdminInterface::adminRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AdminInterface::*)();
            if (_t _q_method = &AdminInterface::connectToTheServer; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AdminInterface::*)();
            if (_t _q_method = &AdminInterface::logout; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *AdminInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAdminInterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdminInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void AdminInterface::adminRequest(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AdminInterface::connectToTheServer()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AdminInterface::logout()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
