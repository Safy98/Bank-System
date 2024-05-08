#ifndef GETACCNUMWINDOW_H
#define GETACCNUMWINDOW_H

#include <QDialog>

namespace Ui {
class GetAccNumWindow;
}

class GetAccNumWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GetAccNumWindow(QWidget *parent = nullptr);
    ~GetAccNumWindow();

private:
    Ui::GetAccNumWindow *ui;
};

#endif // GETACCNUMWINDOW_H
