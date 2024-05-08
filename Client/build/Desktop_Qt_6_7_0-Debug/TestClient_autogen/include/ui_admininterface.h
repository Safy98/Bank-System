/********************************************************************************
** Form generated from reading UI file 'admininterface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdminInterface
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton_connectState;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pbUpdateUser;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pbCreateUser;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbDeleteeUser;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pbGetAccountNum;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbViewDB;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pbViewTransHistory;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pbGetAccountBalance;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pushButton_logout;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *AdminInterface)
    {
        if (AdminInterface->objectName().isEmpty())
            AdminInterface->setObjectName("AdminInterface");
        AdminInterface->resize(1272, 821);
        AdminInterface->setStyleSheet(QString::fromUtf8("AdminInterface{\n"
"\n"
"\n"
"\n"
"\n"
"background-color:#013763;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"}"));
        verticalLayout = new QVBoxLayout(AdminInterface);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);

        pushButton_connectState = new QPushButton(AdminInterface);
        pushButton_connectState->setObjectName("pushButton_connectState");
        pushButton_connectState->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));

        horizontalLayout_6->addWidget(pushButton_connectState);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_16);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        pbUpdateUser = new QPushButton(AdminInterface);
        pbUpdateUser->setObjectName("pbUpdateUser");
        pbUpdateUser->setMinimumSize(QSize(300, 100));
        pbUpdateUser->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"max-width:300px;\n"
"max-height:100px;\n"
"font-size:24px;\n"
"}\n"
""));

        horizontalLayout_5->addWidget(pbUpdateUser);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        pbCreateUser = new QPushButton(AdminInterface);
        pbCreateUser->setObjectName("pbCreateUser");
        pbCreateUser->setMinimumSize(QSize(300, 100));
        pbCreateUser->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"max-width:300px;\n"
"max-height:100px;\n"
"font-size:24px;\n"
"}\n"
""));

        horizontalLayout->addWidget(pbCreateUser);

        horizontalSpacer = new QSpacerItem(400, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbDeleteeUser = new QPushButton(AdminInterface);
        pbDeleteeUser->setObjectName("pbDeleteeUser");
        pbDeleteeUser->setMinimumSize(QSize(300, 100));
        pbDeleteeUser->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"max-width:300px;\n"
"min-height:100px;\n"
"font-size:24px;\n"
"}\n"
""));

        horizontalLayout->addWidget(pbDeleteeUser);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        pbGetAccountNum = new QPushButton(AdminInterface);
        pbGetAccountNum->setObjectName("pbGetAccountNum");
        pbGetAccountNum->setMaximumSize(QSize(300, 100));
        pbGetAccountNum->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"min-width:300px;\n"
"min-height:100px;\n"
"font-size:24px;\n"
"}"));

        horizontalLayout_2->addWidget(pbGetAccountNum);

        horizontalSpacer_3 = new QSpacerItem(120, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label = new QLabel(AdminInterface);
        label->setObjectName("label");
        label->setMaximumSize(QSize(250, 16777215));
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
        label->setLineWidth(1);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(120, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pbViewDB = new QPushButton(AdminInterface);
        pbViewDB->setObjectName("pbViewDB");
        pbViewDB->setMinimumSize(QSize(300, 100));
        pbViewDB->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"max-width:300px;\n"
"max-height:100px;\n"
"font-size:24px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pbViewDB);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        pbViewTransHistory = new QPushButton(AdminInterface);
        pbViewTransHistory->setObjectName("pbViewTransHistory");
        pbViewTransHistory->setMinimumSize(QSize(300, 100));
        pbViewTransHistory->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"max-width:300px;\n"
"max-height:100px;\n"
"font-size:24px;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pbViewTransHistory);

        horizontalSpacer_4 = new QSpacerItem(400, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pbGetAccountBalance = new QPushButton(AdminInterface);
        pbGetAccountBalance->setObjectName("pbGetAccountBalance");
        pbGetAccountBalance->setMinimumSize(QSize(300, 100));
        pbGetAccountBalance->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"max-width:300px;\n"
"max-height:100px;\n"
"font-size:24px;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pbGetAccountBalance);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);

        pushButton_logout = new QPushButton(AdminInterface);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setMinimumSize(QSize(300, 100));
        pushButton_logout->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"max-width:300px;\n"
"max-height:100px;\n"
"font-size:24px;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(pushButton_logout);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        retranslateUi(AdminInterface);

        QMetaObject::connectSlotsByName(AdminInterface);
    } // setupUi

    void retranslateUi(QDialog *AdminInterface)
    {
        AdminInterface->setWindowTitle(QCoreApplication::translate("AdminInterface", "Dialog", nullptr));
        pushButton_connectState->setText(QCoreApplication::translate("AdminInterface", "Connected", nullptr));
        pbUpdateUser->setText(QCoreApplication::translate("AdminInterface", "Update User", nullptr));
        pbCreateUser->setText(QCoreApplication::translate("AdminInterface", "Create User", nullptr));
        pbDeleteeUser->setText(QCoreApplication::translate("AdminInterface", "Delete User", nullptr));
        pbGetAccountNum->setText(QCoreApplication::translate("AdminInterface", "Account Number", nullptr));
        label->setText(QCoreApplication::translate("AdminInterface", "Welcome Admin", nullptr));
        pbViewDB->setText(QCoreApplication::translate("AdminInterface", "View Bank DataBase", nullptr));
        pbViewTransHistory->setText(QCoreApplication::translate("AdminInterface", "View Trabsaction History", nullptr));
        pbGetAccountBalance->setText(QCoreApplication::translate("AdminInterface", "View Account Balance", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("AdminInterface", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminInterface: public Ui_AdminInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
