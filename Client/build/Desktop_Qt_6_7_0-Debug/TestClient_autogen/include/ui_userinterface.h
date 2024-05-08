/********************************************************************************
** Form generated from reading UI file 'userinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINTERFACE_H
#define UI_USERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_UserInterface
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_makeTransaction;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_makeTransfer;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_accountNumber;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_viewTransHistory;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_viewAccBalance;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_logout;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pushButton_connectState;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *UserInterface)
    {
        if (UserInterface->objectName().isEmpty())
            UserInterface->setObjectName("UserInterface");
        UserInterface->resize(1247, 827);
        UserInterface->setStyleSheet(QString::fromUtf8("UserInterface{\n"
"\n"
"\n"
"\n"
"max-width: 1280px;\n"
"min-width:1280px;\n"
"max-height: 820px;\n"
"min-height:820px;\n"
"background-color:#013763;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"}"));
        gridLayout = new QGridLayout(UserInterface);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_5 = new QSpacerItem(20, 48, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 11, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        pushButton_makeTransaction = new QPushButton(UserInterface);
        pushButton_makeTransaction->setObjectName("pushButton_makeTransaction");
        pushButton_makeTransaction->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"min-width:300px;\n"
"min-height:100px;\n"
"font-size:24px;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_makeTransaction);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_makeTransfer = new QPushButton(UserInterface);
        pushButton_makeTransfer->setObjectName("pushButton_makeTransfer");
        pushButton_makeTransfer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"min-width:300px;\n"
"min-height:100px;\n"
"font-size:24px;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_makeTransfer);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 2);

        verticalSpacer_6 = new QSpacerItem(20, 48, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButton_accountNumber = new QPushButton(UserInterface);
        pushButton_accountNumber->setObjectName("pushButton_accountNumber");
        pushButton_accountNumber->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"min-width:300px;\n"
"min-height:100px;\n"
"font-size:24px;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_accountNumber);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 49, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 7, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 48, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 9, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        pushButton_viewTransHistory = new QPushButton(UserInterface);
        pushButton_viewTransHistory->setObjectName("pushButton_viewTransHistory");
        pushButton_viewTransHistory->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"min-width:300px;\n"
"min-height:100px;\n"
"font-size:24px;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_viewTransHistory);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_viewAccBalance = new QPushButton(UserInterface);
        pushButton_viewAccBalance->setObjectName("pushButton_viewAccBalance");
        pushButton_viewAccBalance->setMinimumSize(QSize(300, 100));
        pushButton_viewAccBalance->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"min-width:300px;\n"
"min-height:100px;\n"
"font-size:24px;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_viewAccBalance);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);


        gridLayout->addLayout(horizontalLayout_3, 8, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 48, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton_logout = new QPushButton(UserInterface);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"min-width:300px;\n"
"min-height:100px;\n"
"font-size:24px;\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_logout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_4, 10, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        pushButton_connectState = new QPushButton(UserInterface);
        pushButton_connectState->setObjectName("pushButton_connectState");
        pushButton_connectState->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));

        horizontalLayout_6->addWidget(pushButton_connectState);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        label = new QLabel(UserInterface);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color : #DBD9D9;\n"
"font-size: 32px;\n"
"font-weight:bold;\n"
"width : 452px;\n"
"height: 39px;\n"
"\n"
"\n"
"}"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 48, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(UserInterface);

        QMetaObject::connectSlotsByName(UserInterface);
    } // setupUi

    void retranslateUi(QDialog *UserInterface)
    {
        UserInterface->setWindowTitle(QCoreApplication::translate("UserInterface", "Dialog", nullptr));
        pushButton_makeTransaction->setText(QCoreApplication::translate("UserInterface", "Make Transaction", nullptr));
        pushButton_makeTransfer->setText(QCoreApplication::translate("UserInterface", "Make Transfer", nullptr));
        pushButton_accountNumber->setText(QCoreApplication::translate("UserInterface", "Account Number", nullptr));
        pushButton_viewTransHistory->setText(QCoreApplication::translate("UserInterface", "View Trabsaction History", nullptr));
        pushButton_viewAccBalance->setText(QCoreApplication::translate("UserInterface", "View Account Balance", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("UserInterface", "Log out", nullptr));
        pushButton_connectState->setText(QCoreApplication::translate("UserInterface", "Connected", nullptr));
        label->setText(QCoreApplication::translate("UserInterface", "Welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInterface: public Ui_UserInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
