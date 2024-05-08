/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pbContinue;
    QGraphicsView *graphicsView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_CoreTechIcon;
    QLabel *label_ImtIcon;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 820);
        MainWindow->setMinimumSize(QSize(1280, 820));
        MainWindow->setMaximumSize(QSize(1280, 820));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"\n"
"max-width: 1280px;\n"
"min-width:1280px;\n"
"max-height: 820px;\n"
"min-height:820px;\n"
"background-color:#013763;\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 30, 911, 61));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-size:40px;\n"
"font-weight: bold;\n"
"color : #DBD9D9;\n"
"\n"
"\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 220, 461, 131));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"color : #DBD9D9;\n"
"font-size: 32px;\n"
"font-weight:bold;\n"
"width : 452px;\n"
"height: 39px;\n"
"\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 350, 351, 71));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"font-size: 24px;\n"
"color : #DBD9D9;\n"
"width: 328px;\n"
"height: 29px;\n"
"\n"
"\n"
"}"));
        pbContinue = new QPushButton(centralwidget);
        pbContinue->setObjectName("pbContinue");
        pbContinue->setGeometry(QRect(180, 550, 187, 65));
        pbContinue->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border: none;\n"
"background-color: #DBD9D9;\n"
"border-radius:16px;\n"
"color:#013763;\n"
"min-width:187px;\n"
"min-height:65px;\n"
"font-size:24px;\n"
"}"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(660, 200, 4, 481));
        graphicsView->setMinimumSize(QSize(0, 125));
        graphicsView->setMaximumSize(QSize(4, 1012));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{\n"
"\n"
"border-radius:2px;\n"
"\n"
"}"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(730, 240, 511, 391));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_CoreTechIcon = new QLabel(verticalLayoutWidget);
        label_CoreTechIcon->setObjectName("label_CoreTechIcon");
        label_CoreTechIcon->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_CoreTechIcon);

        label_ImtIcon = new QLabel(verticalLayoutWidget);
        label_ImtIcon->setObjectName("label_ImtIcon");
        label_ImtIcon->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_ImtIcon);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CoreTech Innovations - IMT School ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Welcome To The Bank System", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Developed by: Eng. Safy Srio", nullptr));
        pbContinue->setText(QCoreApplication::translate("MainWindow", "Connect->", nullptr));
        label_CoreTechIcon->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_ImtIcon->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
