/****************************************************************************
** Meta object code from reading C++ file 'userinterface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../userinterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userinterface.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSUserInterfaceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSUserInterfaceENDCLASS = QtMocHelpers::stringData(
    "UserInterface",
    "logout",
    "",
    "userRequest",
    "request",
    "connectToTheServer",
    "sendTransRequest",
    "accountNumber",
    "amount",
    "getAccountBalance",
    "getAccountNumber",
    "userName",
    "sendViewTransHistory",
    "count",
    "sendTransferRequest",
    "senderaccountNumber",
    "receiveraccountNumber",
    "responseReady",
    "response",
    "on_pushButton_logout_clicked",
    "on_pushButton_makeTransaction_clicked",
    "backPressed",
    "on_pushButton_accountNumber_clicked",
    "createGetAccNumUI",
    "createGetAccBalanceUI",
    "createTransHistoryUI",
    "createTransferUI",
    "connectedSuccessfully",
    "disconnected",
    "on_pushButton_viewAccBalance_clicked",
    "on_pushButton_viewTransHistory_clicked",
    "on_pushButton_makeTransfer_clicked",
    "on_pushButton_connectState_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUserInterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  152,    2, 0x06,    1 /* Public */,
       3,    1,  153,    2, 0x06,    2 /* Public */,
       5,    0,  156,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    2,  157,    2, 0x0a,    5 /* Public */,
       9,    1,  162,    2, 0x0a,    8 /* Public */,
      10,    1,  165,    2, 0x0a,   10 /* Public */,
      12,    2,  168,    2, 0x0a,   12 /* Public */,
      14,    3,  173,    2, 0x0a,   15 /* Public */,
      17,    1,  180,    2, 0x0a,   19 /* Public */,
      19,    0,  183,    2, 0x08,   21 /* Private */,
      20,    0,  184,    2, 0x08,   22 /* Private */,
      21,    0,  185,    2, 0x08,   23 /* Private */,
      22,    0,  186,    2, 0x08,   24 /* Private */,
      23,    0,  187,    2, 0x08,   25 /* Private */,
      24,    0,  188,    2, 0x08,   26 /* Private */,
      25,    0,  189,    2, 0x08,   27 /* Private */,
      26,    0,  190,    2, 0x08,   28 /* Private */,
      27,    0,  191,    2, 0x08,   29 /* Private */,
      28,    0,  192,    2, 0x08,   30 /* Private */,
      29,    0,  193,    2, 0x08,   31 /* Private */,
      30,    0,  194,    2, 0x08,   32 /* Private */,
      31,    0,  195,    2, 0x08,   33 /* Private */,
      32,    0,  196,    2, 0x08,   34 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   15,   16,    8,
    QMetaType::Void, QMetaType::QJsonObject,   18,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject UserInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSUserInterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUserInterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUserInterfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserInterface, std::true_type>,
        // method 'logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'connectToTheServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendTransRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getAccountBalance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getAccountNumber'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendViewTransHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendTransferRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'responseReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'on_pushButton_logout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_makeTransaction_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_accountNumber_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createGetAccNumUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createGetAccBalanceUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createTransHistoryUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createTransferUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectedSuccessfully'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_viewAccBalance_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_viewTransHistory_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_makeTransfer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_connectState_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void UserInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logout(); break;
        case 1: _t->userRequest((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 2: _t->connectToTheServer(); break;
        case 3: _t->sendTransRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->getAccountBalance((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->getAccountNumber((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->sendViewTransHistory((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->sendTransferRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 8: _t->responseReady((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 9: _t->on_pushButton_logout_clicked(); break;
        case 10: _t->on_pushButton_makeTransaction_clicked(); break;
        case 11: _t->backPressed(); break;
        case 12: _t->on_pushButton_accountNumber_clicked(); break;
        case 13: _t->createGetAccNumUI(); break;
        case 14: _t->createGetAccBalanceUI(); break;
        case 15: _t->createTransHistoryUI(); break;
        case 16: _t->createTransferUI(); break;
        case 17: _t->connectedSuccessfully(); break;
        case 18: _t->disconnected(); break;
        case 19: _t->on_pushButton_viewAccBalance_clicked(); break;
        case 20: _t->on_pushButton_viewTransHistory_clicked(); break;
        case 21: _t->on_pushButton_makeTransfer_clicked(); break;
        case 22: _t->on_pushButton_connectState_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserInterface::*)();
            if (_t _q_method = &UserInterface::logout; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserInterface::*)(QJsonObject );
            if (_t _q_method = &UserInterface::userRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserInterface::*)();
            if (_t _q_method = &UserInterface::connectToTheServer; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *UserInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUserInterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UserInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void UserInterface::logout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UserInterface::userRequest(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UserInterface::connectToTheServer()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
