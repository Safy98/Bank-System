/********************************************************************************
** Form generated from reading UI file 'maketransfer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKETRANSFER_H
#define UI_MAKETRANSFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MakeTransfer
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_senderAccNummError;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_SenderAccNumm;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_reciverAccNummError;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_recieverAccNum;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_amountError;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_amount;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Back;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *MakeTransfer)
    {
        if (MakeTransfer->objectName().isEmpty())
            MakeTransfer->setObjectName("MakeTransfer");
        MakeTransfer->resize(592, 456);
        gridLayout = new QGridLayout(MakeTransfer);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(MakeTransfer);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}\n"
""));

        verticalLayout->addWidget(label);

        label_senderAccNummError = new QLabel(MakeTransfer);
        label_senderAccNummError->setObjectName("label_senderAccNummError");
        label_senderAccNummError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout->addWidget(label_senderAccNummError);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEdit_SenderAccNumm = new QLineEdit(MakeTransfer);
        lineEdit_SenderAccNumm->setObjectName("lineEdit_SenderAccNumm");
        lineEdit_SenderAccNumm->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        horizontalLayout_3->addWidget(lineEdit_SenderAccNumm);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(MakeTransfer);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_4);

        label_reciverAccNummError = new QLabel(MakeTransfer);
        label_reciverAccNummError->setObjectName("label_reciverAccNummError");
        label_reciverAccNummError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_reciverAccNummError);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_recieverAccNum = new QLineEdit(MakeTransfer);
        lineEdit_recieverAccNum->setObjectName("lineEdit_recieverAccNum");
        lineEdit_recieverAccNum->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        horizontalLayout_2->addWidget(lineEdit_recieverAccNum);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(MakeTransfer);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_3->addWidget(label_5);

        label_amountError = new QLabel(MakeTransfer);
        label_amountError->setObjectName("label_amountError");
        label_amountError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color:red;\n"
"\n"
"}\n"
""));

        verticalLayout_3->addWidget(label_amountError);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lineEdit_amount = new QLineEdit(MakeTransfer);
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

        horizontalLayout_4->addWidget(lineEdit_amount);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Back = new QPushButton(MakeTransfer);
        pushButton_Back->setObjectName("pushButton_Back");
        pushButton_Back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_Back);

        pushButton_confirm = new QPushButton(MakeTransfer);
        pushButton_confirm->setObjectName("pushButton_confirm");
        pushButton_confirm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_confirm);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);


        retranslateUi(MakeTransfer);

        QMetaObject::connectSlotsByName(MakeTransfer);
    } // setupUi

    void retranslateUi(QDialog *MakeTransfer)
    {
        MakeTransfer->setWindowTitle(QCoreApplication::translate("MakeTransfer", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MakeTransfer", "Sender Account Number", nullptr));
        label_senderAccNummError->setText(QCoreApplication::translate("MakeTransfer", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("MakeTransfer", "Sender Account Number", nullptr));
        label_reciverAccNummError->setText(QCoreApplication::translate("MakeTransfer", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MakeTransfer", "Amount", nullptr));
        label_amountError->setText(QCoreApplication::translate("MakeTransfer", "TextLabel", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("MakeTransfer", "Back", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("MakeTransfer", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MakeTransfer: public Ui_MakeTransfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKETRANSFER_H
