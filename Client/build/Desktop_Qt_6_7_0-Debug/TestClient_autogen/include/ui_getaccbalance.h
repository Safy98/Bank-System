/********************************************************************************
** Form generated from reading UI file 'getaccbalance.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETACCBALANCE_H
#define UI_GETACCBALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GetAccBalance
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_accNumError;
    QLineEdit *lineEdit_accnum;
    QLabel *label_balance;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *GetAccBalance)
    {
        if (GetAccBalance->objectName().isEmpty())
            GetAccBalance->setObjectName("GetAccBalance");
        GetAccBalance->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(GetAccBalance);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(GetAccBalance);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"font-size:24px;\n"
"\n"
"font-weight:500;\n"
"\n"
"}\n"
""));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(GetAccBalance);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_accNumError = new QLabel(GetAccBalance);
        label_accNumError->setObjectName("label_accNumError");
        label_accNumError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color:red;\n"
"}"));

        verticalLayout->addWidget(label_accNumError);

        lineEdit_accnum = new QLineEdit(GetAccBalance);
        lineEdit_accnum->setObjectName("lineEdit_accnum");
        lineEdit_accnum->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"height:30px;\n"
"outline:none;\n"
"border-radius:5px;\n"
"border:1px solid #ccc;\n"
"padding-left:15px;\n"
"font-size:16px;\n"
"\n"
"}"));

        verticalLayout->addWidget(lineEdit_accnum);


        verticalLayout_2->addLayout(verticalLayout);

        label_balance = new QLabel(GetAccBalance);
        label_balance->setObjectName("label_balance");
        label_balance->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"font-size:20px;\n"
"\n"
"font-weight:500;\n"
"\n"
"}\n"
""));

        verticalLayout_2->addWidget(label_balance);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_back = new QPushButton(GetAccBalance);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_back);

        pushButton_confirm = new QPushButton(GetAccBalance);
        pushButton_confirm->setObjectName("pushButton_confirm");
        pushButton_confirm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_confirm);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(GetAccBalance);

        QMetaObject::connectSlotsByName(GetAccBalance);
    } // setupUi

    void retranslateUi(QDialog *GetAccBalance)
    {
        GetAccBalance->setWindowTitle(QCoreApplication::translate("GetAccBalance", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("GetAccBalance", "Enter Account Number", nullptr));
        label->setText(QCoreApplication::translate("GetAccBalance", "Account Number", nullptr));
        label_accNumError->setText(QCoreApplication::translate("GetAccBalance", "TextLabel", nullptr));
        label_balance->setText(QCoreApplication::translate("GetAccBalance", "Balance : ", nullptr));
        pushButton_back->setText(QCoreApplication::translate("GetAccBalance", "Back", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("GetAccBalance", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetAccBalance: public Ui_GetAccBalance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETACCBALANCE_H
