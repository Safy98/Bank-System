/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *pushButton_login;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_userName;
    QLineEdit *lineEdit_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 407);
        pushButton_login = new QPushButton(Login);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(130, 310, 131, 65));
        pushButton_login->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"min-width:100px;\n"
"min-height:65px;\n"
"font-size:24px;\n"
"}"));
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(9, 24, 381, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"max-height:32px;\n"
"font-size:24px;\n"
"font-weight:bold;\n"
"color:#DBD9D9;\n"
"\n"
"\n"
"}"));

        verticalLayout->addWidget(label);

        label_userName = new QLabel(layoutWidget);
        label_userName->setObjectName("label_userName");
        label_userName->setMaximumSize(QSize(16777215, 18));
        label_userName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-size:16px;\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout->addWidget(label_userName);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"border-radius:20px;\n"
"border :3px solid #DBD9D9;\n"
"padding-top: 2px;\n"
"padding-bottom: 2px;\n"
"padding-left: 20px;\n"
"max-height:32px;\n"
"background-color:transparent;\n"
"color:#DBD9D9;\n"
"font-size: 18px;\n"
"margin-top:0px;\n"
"}\n"
"\n"
"\n"
"QLineEdit::focus{\n"
"\n"
"border :3px solid #f1f1f1;\n"
"\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(lineEdit_username);

        label_password = new QLabel(layoutWidget);
        label_password->setObjectName("label_password");
        label_password->setMaximumSize(QSize(16777215, 18));
        label_password->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-size:16px;\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout->addWidget(label_password);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"border-radius:20px;\n"
"border :3px solid #DBD9D9;\n"
"padding-top: 2px;\n"
"padding-bottom: 2px;\n"
"padding-left: 20px;\n"
"max-height:32px;\n"
"background-color:transparent;\n"
"color:#DBD9D9;\n"
"font-size: 18px\n"
"}\n"
"\n"
"\n"
"QLineEdit::focus{\n"
"\n"
"border :3px solid #f1f1f1;\n"
"\n"
"\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(lineEdit_password);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "Log in", nullptr));
        label->setText(QCoreApplication::translate("Login", "Log in", nullptr));
        label_userName->setText(QCoreApplication::translate("Login", "TextLabel", nullptr));
        label_password->setText(QCoreApplication::translate("Login", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
