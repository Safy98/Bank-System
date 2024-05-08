/********************************************************************************
** Form generated from reading UI file 'agetaccountnumwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGETACCOUNTNUMWINDOW_H
#define UI_AGETACCOUNTNUMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AgetAccountNumWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_error;
    QLineEdit *lineEdit;
    QLabel *label_result;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Back;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *AgetAccountNumWindow)
    {
        if (AgetAccountNumWindow->objectName().isEmpty())
            AgetAccountNumWindow->setObjectName("AgetAccountNumWindow");
        AgetAccountNumWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(AgetAccountNumWindow);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AgetAccountNumWindow);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"font-size:24px;\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout->addWidget(label);

        label_error = new QLabel(AgetAccountNumWindow);
        label_error->setObjectName("label_error");
        label_error->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color:red;\n"
"\n"
"\n"
"}"));

        verticalLayout->addWidget(label_error);

        lineEdit = new QLineEdit(AgetAccountNumWindow);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        label_result = new QLabel(AgetAccountNumWindow);
        label_result->setObjectName("label_result");

        verticalLayout->addWidget(label_result);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_Back = new QPushButton(AgetAccountNumWindow);
        pushButton_Back->setObjectName("pushButton_Back");
        pushButton_Back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));
        pushButton_Back->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_Back);

        pushButton_confirm = new QPushButton(AgetAccountNumWindow);
        pushButton_confirm->setObjectName("pushButton_confirm");
        pushButton_confirm->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_confirm);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AgetAccountNumWindow);

        QMetaObject::connectSlotsByName(AgetAccountNumWindow);
    } // setupUi

    void retranslateUi(QDialog *AgetAccountNumWindow)
    {
        AgetAccountNumWindow->setWindowTitle(QCoreApplication::translate("AgetAccountNumWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AgetAccountNumWindow", "Enter the account user name", nullptr));
        label_error->setText(QCoreApplication::translate("AgetAccountNumWindow", "TextLabel", nullptr));
        label_result->setText(QCoreApplication::translate("AgetAccountNumWindow", "TextLabel", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("AgetAccountNumWindow", "Back", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("AgetAccountNumWindow", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AgetAccountNumWindow: public Ui_AgetAccountNumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGETACCOUNTNUMWINDOW_H
