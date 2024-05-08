#include "getaccnumwindow.h"
#include "ui_getaccnumwindow.h"

GetAccNumWindow::GetAccNumWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GetAccNumWindow)
{
    ui->setupUi(this);
}

GetAccNumWindow::~GetAccNumWindow()
{
    delete ui;
}
