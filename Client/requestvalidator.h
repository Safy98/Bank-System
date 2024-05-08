#ifndef REQUESTVALIDATOR_H
#define REQUESTVALIDATOR_H

#include <QJsonObject>
#include <QString>
#include <QThread>
class RequestValidator
{
public:
    RequestValidator();

    int validateRequest(const QJsonObject &request)const;



private:
    QRegularExpression usernameRegex;
    QRegularExpression passwordRegex;
    QRegularExpression fullNameRegex;
    QRegularExpression accountNumberRegex;
    QRegularExpression onlyNumbers;
    QRegularExpression  transAmount;

    int validateLogin(const QString& username,const QString &password) const;

    int validateCreateUser(const QString &fullName ,const int &age, const QString &userName, const QString password, const QString &confPassword)const;
    int validateAdminGetAccountNumber(const QString &username)const;
    int validateDeleteUser(const QString &accountNumber)const;
    int validateUpdateUser(const QString &accountNumber,const QString &fullName ,const int &age, const QString &userName, const QString password, const QString &confPassword)const;
    int validateMakeTrans(const QString& accountNumber,const QString &amount)const;
    int validateViewTransHistory(const QString& accountNumber,const QString &count)const;
    int validateViewDB()const;
    int validateGetAccBalance(const QString& accountNumber)const;
    int validateMakeTransfer(QString senderaccountNumber ,QString recieveraccountNumber , QString amount)const;
};

#endif // REQUESTVALIDATOR_H
