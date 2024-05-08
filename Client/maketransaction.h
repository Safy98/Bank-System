#ifndef MAKETRANSACTION_H
#define MAKETRANSACTION_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class MakeTransaction;
}

class MakeTransaction : public QDialog
{
    Q_OBJECT

public:
    explicit MakeTransaction(QWidget *parent = nullptr);
    ~MakeTransaction();

   void responseSuccessfull();
    void responseFailed(int errorState);

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_confirm_clicked();
    void on_lineEdit_amount_textChanged(const QString &arg1);

    void on_lineEdit_username_textChanged(const QString &arg1);

signals:
    void backPressed();
    void sendTransRequest(QString accountNumber , QString amount);
private:
    Ui::MakeTransaction *ui;
};

#endif // MAKETRANSACTION_H
