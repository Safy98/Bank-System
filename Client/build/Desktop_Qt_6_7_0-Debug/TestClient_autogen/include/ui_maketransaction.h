/********************************************************************************
** Form generated from reading UI file 'maketransaction.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKETRANSACTION_H
#define UI_MAKETRANSACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MakeTransaction
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_accountNumError;
    QLineEdit *lineEdit_username;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_amoutError;
    QLineEdit *lineEdit_amount;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *MakeTransaction)
    {
        if (MakeTransaction->objectName().isEmpty())
            MakeTransaction->setObjectName("MakeTransaction");
        MakeTransaction->resize(503, 478);
        verticalLayout_3 = new QVBoxLayout(MakeTransaction);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(MakeTransaction);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout->addWidget(label);

        label_accountNumError = new QLabel(MakeTransaction);
        label_accountNumError->setObjectName("label_accountNumError");
        label_accountNumError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout->addWidget(label_accountNumError);

        lineEdit_username = new QLineEdit(MakeTransaction);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout->addWidget(lineEdit_username);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(MakeTransaction);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_3);

        label_amoutError = new QLabel(MakeTransaction);
        label_amoutError->setObjectName("label_amoutError");
        label_amoutError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_amoutError);

        lineEdit_amount = new QLineEdit(MakeTransaction);
        lineEdit_amount->setObjectName("lineEdit_amount");
        lineEdit_amount->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout_2->addWidget(lineEdit_amount);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_back = new QPushButton(MakeTransaction);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));
        pushButton_back->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_back);

        pushButton_confirm = new QPushButton(MakeTransaction);
        pushButton_confirm->setObjectName("pushButton_confirm");
        pushButton_confirm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));
        pushButton_confirm->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_confirm);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(MakeTransaction);

        QMetaObject::connectSlotsByName(MakeTransaction);
    } // setupUi

    void retranslateUi(QDialog *MakeTransaction)
    {
        MakeTransaction->setWindowTitle(QCoreApplication::translate("MakeTransaction", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MakeTransaction", "AccountNumber", nullptr));
        label_accountNumError->setText(QCoreApplication::translate("MakeTransaction", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MakeTransaction", "Amount", nullptr));
        label_amoutError->setText(QCoreApplication::translate("MakeTransaction", "TextLabel", nullptr));
        pushButton_back->setText(QCoreApplication::translate("MakeTransaction", "Back", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("MakeTransaction", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MakeTransaction: public Ui_MakeTransaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKETRANSACTION_H
