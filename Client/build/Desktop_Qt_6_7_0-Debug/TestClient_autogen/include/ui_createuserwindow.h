/********************************************************************************
** Form generated from reading UI file 'createuserwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEUSERWINDOW_H
#define UI_CREATEUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateUserWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_fullNameError;
    QLineEdit *lineEdit_FullName;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *label_ageError;
    QSpinBox *spinBox_Age;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_userNameError;
    QLineEdit *lineEdit_UserName;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QLabel *label_passwordError;
    QLineEdit *lineEdit_Password;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QLabel *label_confPasswordError;
    QLineEdit *lineEdit_ConfirmPassword;
    QCheckBox *checkBox_IsAdmin;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *CreateUserWindow)
    {
        if (CreateUserWindow->objectName().isEmpty())
            CreateUserWindow->setObjectName("CreateUserWindow");
        CreateUserWindow->resize(600, 600);
        CreateUserWindow->setStyleSheet(QString::fromUtf8("QDialog{\n"
"\n"
"min-width:600px;\n"
"max-width:600px;\n"
"min-height:600px;\n"
"max-height:600px;\n"
"}"));
        gridLayout = new QGridLayout(CreateUserWindow);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(CreateUserWindow);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-size:25px;\n"
"font-weight:bold;\n"
"min-width:200px;\n"
"max-height:30px\n"
"\n"
"\n"
"\n"
"}"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_6 = new QLabel(CreateUserWindow);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_6);

        label_fullNameError = new QLabel(CreateUserWindow);
        label_fullNameError->setObjectName("label_fullNameError");
        label_fullNameError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_fullNameError);

        lineEdit_FullName = new QLineEdit(CreateUserWindow);
        lineEdit_FullName->setObjectName("lineEdit_FullName");
        lineEdit_FullName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout_2->addWidget(lineEdit_FullName);


        verticalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_7 = new QLabel(CreateUserWindow);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_3->addWidget(label_7);

        label_ageError = new QLabel(CreateUserWindow);
        label_ageError->setObjectName("label_ageError");
        label_ageError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color:red;\n"
"\n"
"}\n"
""));

        verticalLayout_3->addWidget(label_ageError);

        spinBox_Age = new QSpinBox(CreateUserWindow);
        spinBox_Age->setObjectName("spinBox_Age");
        spinBox_Age->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout_3->addWidget(spinBox_Age);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(CreateUserWindow);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout->addWidget(label);

        label_userNameError = new QLabel(CreateUserWindow);
        label_userNameError->setObjectName("label_userNameError");
        label_userNameError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout->addWidget(label_userNameError);

        lineEdit_UserName = new QLineEdit(CreateUserWindow);
        lineEdit_UserName->setObjectName("lineEdit_UserName");
        lineEdit_UserName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout->addWidget(lineEdit_UserName);


        verticalLayout_6->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_8 = new QLabel(CreateUserWindow);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_4->addWidget(label_8);

        label_passwordError = new QLabel(CreateUserWindow);
        label_passwordError->setObjectName("label_passwordError");
        label_passwordError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout_4->addWidget(label_passwordError);

        lineEdit_Password = new QLineEdit(CreateUserWindow);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout_4->addWidget(lineEdit_Password);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_9 = new QLabel(CreateUserWindow);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_5->addWidget(label_9);

        label_confPasswordError = new QLabel(CreateUserWindow);
        label_confPasswordError->setObjectName("label_confPasswordError");
        label_confPasswordError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout_5->addWidget(label_confPasswordError);

        lineEdit_ConfirmPassword = new QLineEdit(CreateUserWindow);
        lineEdit_ConfirmPassword->setObjectName("lineEdit_ConfirmPassword");
        lineEdit_ConfirmPassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"height:30px;\n"
"outline:none;\n"
"border-radius:5px;\n"
"border:1px solid #ccc;\n"
"padding-left:15px;\n"
"font-size:16px;\n"
"\n"
"}\n"
""));

        verticalLayout_5->addWidget(lineEdit_ConfirmPassword);


        verticalLayout_6->addLayout(verticalLayout_5);


        gridLayout->addLayout(verticalLayout_6, 1, 0, 1, 1);

        checkBox_IsAdmin = new QCheckBox(CreateUserWindow);
        checkBox_IsAdmin->setObjectName("checkBox_IsAdmin");

        gridLayout->addWidget(checkBox_IsAdmin, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_2 = new QPushButton(CreateUserWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));
        pushButton_2->setAutoDefault(false);

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton = new QPushButton(CreateUserWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));

        horizontalLayout_5->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);


        retranslateUi(CreateUserWindow);

        QMetaObject::connectSlotsByName(CreateUserWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateUserWindow)
    {
        CreateUserWindow->setWindowTitle(QCoreApplication::translate("CreateUserWindow", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("CreateUserWindow", "Create User", nullptr));
        label_6->setText(QCoreApplication::translate("CreateUserWindow", "Full Name", nullptr));
        label_fullNameError->setText(QCoreApplication::translate("CreateUserWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("CreateUserWindow", "Age", nullptr));
        label_ageError->setText(QCoreApplication::translate("CreateUserWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("CreateUserWindow", "User Name", nullptr));
        label_userNameError->setText(QCoreApplication::translate("CreateUserWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("CreateUserWindow", "Password", nullptr));
        label_passwordError->setText(QCoreApplication::translate("CreateUserWindow", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("CreateUserWindow", "Confirm Password", nullptr));
        label_confPasswordError->setText(QCoreApplication::translate("CreateUserWindow", "TextLabel", nullptr));
        checkBox_IsAdmin->setText(QCoreApplication::translate("CreateUserWindow", "Is Admin", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreateUserWindow", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateUserWindow", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateUserWindow: public Ui_CreateUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSERWINDOW_H
