#ifndef CREATEUSERWINDOW_H
#define CREATEUSERWINDOW_H

#include <QDialog>
#include <QJsonObject>
#include <QMessageBox>
namespace Ui {
class CreateUserWindow;
}

class CreateUserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CreateUserWindow(QWidget *parent = nullptr);
    ~CreateUserWindow();

public slots:
    void responseFailed(int errorState);
    void responseSuccessfull(void);
private slots:
    void on_pushButton_clicked();

    void on_lineEdit_FullName_textChanged(const QString &arg1);

    void on_lineEdit_UserName_textChanged(const QString &arg1);

    void on_lineEdit_Password_textChanged(const QString &arg1);

    void on_lineEdit_ConfirmPassword_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

signals:
    void createUserRequest(QString fullName ,int age,QString userName,QString password,QString confPassword,bool isAdmin);
    void backPressed();
private:
    Ui::CreateUserWindow *ui;
};

#endif // CREATEUSERWINDOW_H
