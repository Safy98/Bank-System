/********************************************************************************
** Form generated from reading UI file 'updateuserwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEUSERWINDOW_H
#define UI_UPDATEUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateUserWindow
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLabel *label_accountNumberError;
    QLineEdit *lineEdit_accountNumber;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_fullNameError;
    QLineEdit *lineEdit_fullName;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QLabel *label_ageError;
    QSpinBox *spinBox_age;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_userNameError;
    QLineEdit *lineEdit_userName;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_passwordError;
    QLineEdit *lineEdit_password;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLabel *label_confirmPasswordError;
    QLineEdit *lineEdit_confPassword;
    QCheckBox *checkBox_isAdmin;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *UpdateUserWindow)
    {
        if (UpdateUserWindow->objectName().isEmpty())
            UpdateUserWindow->setObjectName("UpdateUserWindow");
        UpdateUserWindow->resize(537, 607);
        verticalLayout_7 = new QVBoxLayout(UpdateUserWindow);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_2 = new QLabel(UpdateUserWindow);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_5->addWidget(label_2);

        label_accountNumberError = new QLabel(UpdateUserWindow);
        label_accountNumberError->setObjectName("label_accountNumberError");
        label_accountNumberError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout_5->addWidget(label_accountNumberError);

        lineEdit_accountNumber = new QLineEdit(UpdateUserWindow);
        lineEdit_accountNumber->setObjectName("lineEdit_accountNumber");
        lineEdit_accountNumber->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout_5->addWidget(lineEdit_accountNumber);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(UpdateUserWindow);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout->addWidget(label);

        label_fullNameError = new QLabel(UpdateUserWindow);
        label_fullNameError->setObjectName("label_fullNameError");
        label_fullNameError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout->addWidget(label_fullNameError);

        lineEdit_fullName = new QLineEdit(UpdateUserWindow);
        lineEdit_fullName->setObjectName("lineEdit_fullName");
        lineEdit_fullName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout->addWidget(lineEdit_fullName);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_9 = new QLabel(UpdateUserWindow);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_6->addWidget(label_9);

        label_ageError = new QLabel(UpdateUserWindow);
        label_ageError->setObjectName("label_ageError");
        label_ageError->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout_6->addWidget(label_ageError);

        spinBox_age = new QSpinBox(UpdateUserWindow);
        spinBox_age->setObjectName("spinBox_age");

        verticalLayout_6->addWidget(spinBox_age);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(UpdateUserWindow);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_3);

        label_userNameError = new QLabel(UpdateUserWindow);
        label_userNameError->setObjectName("label_userNameError");
        label_userNameError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_userNameError);

        lineEdit_userName = new QLineEdit(UpdateUserWindow);
        lineEdit_userName->setObjectName("lineEdit_userName");
        lineEdit_userName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout_2->addWidget(lineEdit_userName);


        verticalLayout_7->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(UpdateUserWindow);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_3->addWidget(label_5);

        label_passwordError = new QLabel(UpdateUserWindow);
        label_passwordError->setObjectName("label_passwordError");
        label_passwordError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout_3->addWidget(label_passwordError);

        lineEdit_password = new QLineEdit(UpdateUserWindow);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout_3->addWidget(lineEdit_password);


        verticalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_7 = new QLabel(UpdateUserWindow);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_4->addWidget(label_7);

        label_confirmPasswordError = new QLabel(UpdateUserWindow);
        label_confirmPasswordError->setObjectName("label_confirmPasswordError");
        label_confirmPasswordError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout_4->addWidget(label_confirmPasswordError);

        lineEdit_confPassword = new QLineEdit(UpdateUserWindow);
        lineEdit_confPassword->setObjectName("lineEdit_confPassword");
        lineEdit_confPassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout_4->addWidget(lineEdit_confPassword);


        verticalLayout_7->addLayout(verticalLayout_4);

        checkBox_isAdmin = new QCheckBox(UpdateUserWindow);
        checkBox_isAdmin->setObjectName("checkBox_isAdmin");

        verticalLayout_7->addWidget(checkBox_isAdmin);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_back = new QPushButton(UpdateUserWindow);
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

        pushButton_confirm = new QPushButton(UpdateUserWindow);
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


        verticalLayout_7->addLayout(horizontalLayout);


        retranslateUi(UpdateUserWindow);

        QMetaObject::connectSlotsByName(UpdateUserWindow);
    } // setupUi

    void retranslateUi(QDialog *UpdateUserWindow)
    {
        UpdateUserWindow->setWindowTitle(QCoreApplication::translate("UpdateUserWindow", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateUserWindow", "Account Number", nullptr));
        label_accountNumberError->setText(QCoreApplication::translate("UpdateUserWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("UpdateUserWindow", "Full Name", nullptr));
        label_fullNameError->setText(QCoreApplication::translate("UpdateUserWindow", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("UpdateUserWindow", "Age", nullptr));
        label_ageError->setText(QCoreApplication::translate("UpdateUserWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("UpdateUserWindow", "User Name", nullptr));
        label_userNameError->setText(QCoreApplication::translate("UpdateUserWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("UpdateUserWindow", "Password", nullptr));
        label_passwordError->setText(QCoreApplication::translate("UpdateUserWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("UpdateUserWindow", "Confirm Password", nullptr));
        label_confirmPasswordError->setText(QCoreApplication::translate("UpdateUserWindow", "TextLabel", nullptr));
        checkBox_isAdmin->setText(QCoreApplication::translate("UpdateUserWindow", "Is Admin", nullptr));
        pushButton_back->setText(QCoreApplication::translate("UpdateUserWindow", "Back", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("UpdateUserWindow", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateUserWindow: public Ui_UpdateUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEUSERWINDOW_H
