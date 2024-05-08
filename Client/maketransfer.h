#ifndef MAKETRANSFER_H
#define MAKETRANSFER_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class MakeTransfer;
}

class MakeTransfer : public QDialog
{
    Q_OBJECT

public:
    explicit MakeTransfer(QWidget *parent = nullptr);
    ~MakeTransfer();
    void responseSuccessfull();
    void responseFailed(int errorState);

signals:
    void backPressed();
    void sendTransferRequest(QString senderaccountNumber ,QString recieveraccountNumber , QString amount);

private slots:
    void on_pushButton_Back_clicked();

    void on_pushButton_confirm_clicked();

    void on_lineEdit_SenderAccNumm_textChanged(const QString &arg1);

    void on_lineEdit_recieverAccNum_textChanged(const QString &arg1);

    void on_lineEdit_amount_textChanged(const QString &arg1);

private:
    Ui::MakeTransfer *ui;
};

#endif // MAKETRANSFER_H
