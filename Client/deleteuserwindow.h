#ifndef DELETEUSERWINDOW_H
#define DELETEUSERWINDOW_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class DeleteUserWindow;
}

class DeleteUserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteUserWindow(QWidget *parent = nullptr);
    ~DeleteUserWindow();

    void responseSuccessfull(void);
    void responseFailed(int errorState);

private slots:
    void on_pushButton_back_clicked();
    void on_pushButton_confirm_clicked();


    void on_lineEdit_textChanged(const QString &arg1);

signals:
    void backPressed();
    void deleteUserRequest(QString accountNumber);

private:
    Ui::DeleteUserWindow *ui;
};

#endif // DELETEUSERWINDOW_H
