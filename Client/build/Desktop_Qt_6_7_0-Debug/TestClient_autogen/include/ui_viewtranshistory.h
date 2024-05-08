/********************************************************************************
** Form generated from reading UI file 'viewtranshistory.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWTRANSHISTORY_H
#define UI_VIEWTRANSHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ViewTransHistory
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_AccountNumError;
    QLineEdit *lineEdit_accountNum;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_coutError;
    QSpinBox *spinBox_count;
    QSpacerItem *verticalSpacer;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ViewTransHistory)
    {
        if (ViewTransHistory->objectName().isEmpty())
            ViewTransHistory->setObjectName("ViewTransHistory");
        ViewTransHistory->resize(995, 512);
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu")});
        font.setPointSize(14);
        font.setBold(true);
        ViewTransHistory->setFont(font);
        verticalLayout_4 = new QVBoxLayout(ViewTransHistory);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ViewTransHistory);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout->addWidget(label);

        label_AccountNumError = new QLabel(ViewTransHistory);
        label_AccountNumError->setObjectName("label_AccountNumError");
        label_AccountNumError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout->addWidget(label_AccountNumError);

        lineEdit_accountNum = new QLineEdit(ViewTransHistory);
        lineEdit_accountNum->setObjectName("lineEdit_accountNum");
        lineEdit_accountNum->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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

        verticalLayout->addWidget(lineEdit_accountNum);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(ViewTransHistory);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-weight:500;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_4);

        label_coutError = new QLabel(ViewTransHistory);
        label_coutError->setObjectName("label_coutError");
        label_coutError->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"\n"
"color:red;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_coutError);

        spinBox_count = new QSpinBox(ViewTransHistory);
        spinBox_count->setObjectName("spinBox_count");
        spinBox_count->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
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

        verticalLayout_2->addWidget(spinBox_count);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        tableWidget = new QTableWidget(ViewTransHistory);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMinimumSize(QSize(200, 0));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->verticalHeader()->setVisible(true);

        horizontalLayout_2->addWidget(tableWidget);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(ViewTransHistory);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(ViewTransHistory);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"\n"
"height:40px;\n"
"\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(ViewTransHistory);

        QMetaObject::connectSlotsByName(ViewTransHistory);
    } // setupUi

    void retranslateUi(QDialog *ViewTransHistory)
    {
        ViewTransHistory->setWindowTitle(QCoreApplication::translate("ViewTransHistory", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ViewTransHistory", "Account Number", nullptr));
        label_AccountNumError->setText(QCoreApplication::translate("ViewTransHistory", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("ViewTransHistory", "Count", nullptr));
        label_coutError->setText(QCoreApplication::translate("ViewTransHistory", "TextLabel", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ViewTransHistory", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ViewTransHistory", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ViewTransHistory", "Date", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ViewTransHistory", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("ViewTransHistory", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewTransHistory: public Ui_ViewTransHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWTRANSHISTORY_H
