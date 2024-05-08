#ifndef UPDATEUSERWINDOW_H
#define UPDATEUSERWINDOW_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class UpdateUserWindow;
}

class UpdateUserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateUserWindow(QWidget *parent = nullptr);
    ~UpdateUserWindow();

    void responseSuccessfull(void);
    void responseFailed(int errorState);


signals:
    void updateUserRequest(QString accountNumber,QString fullName ,int age,QString userName,QString password,QString confPassword,bool isAdmin);
    void backPressed();

private slots:
    void on_pushButton_confirm_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::UpdateUserWindow *ui;

};

#endif // UPDATEUSERWINDOW_H
