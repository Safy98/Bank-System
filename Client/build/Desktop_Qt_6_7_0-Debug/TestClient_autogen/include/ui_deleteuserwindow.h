/********************************************************************************
** Form generated from reading UI file 'deleteuserwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEUSERWINDOW_H
#define UI_DELETEUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeleteUserWindow
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_error;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *DeleteUserWindow)
    {
        if (DeleteUserWindow->objectName().isEmpty())
            DeleteUserWindow->setObjectName("DeleteUserWindow");
        DeleteUserWindow->resize(470, 357);
        verticalLayout = new QVBoxLayout(DeleteUserWindow);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(DeleteUserWindow);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"font-size:24px;\n"
"\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_error = new QLabel(DeleteUserWindow);
        label_error->setObjectName("label_error");
        label_error->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout->addWidget(label_error);

        lineEdit = new QLineEdit(DeleteUserWindow);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_back = new QPushButton(DeleteUserWindow);
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

        pushButton_confirm = new QPushButton(DeleteUserWindow);
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


        retranslateUi(DeleteUserWindow);

        QMetaObject::connectSlotsByName(DeleteUserWindow);
    } // setupUi

    void retranslateUi(QDialog *DeleteUserWindow)
    {
        DeleteUserWindow->setWindowTitle(QCoreApplication::translate("DeleteUserWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DeleteUserWindow", "Enter The Account number ", nullptr));
        label_error->setText(QCoreApplication::translate("DeleteUserWindow", "TextLabel", nullptr));
        pushButton_back->setText(QCoreApplication::translate("DeleteUserWindow", "Back", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("DeleteUserWindow", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteUserWindow: public Ui_DeleteUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEUSERWINDOW_H
