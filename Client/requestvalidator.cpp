#include "requestvalidator.h"

RequestValidator::RequestValidator() {

    usernameRegex.setPattern("^[a-zA-Z0-9_]*$");
    passwordRegex.setPattern("^(?=.*?[A-Z])(?=.*?[a-z])(?=.*?[0-9])(?=.*?[#?!@$%^&*-]).{8,}$");
    fullNameRegex.setPattern("^[a-z]([-']?[a-z]+)*( [a-z]([-']?[a-z]+)*)+$");
    accountNumberRegex.setPattern("\\d{1,5}$");
    onlyNumbers.setPattern("^[+-]\\d{1,7}$");

}
int RequestValidator::validateRequest(const QJsonObject &request) const
{
    int id = request.value("RequestID").toString().toInt();

    int validationState = 0;

    switch(id)
    {
    case 0 :

       validationState = validateLogin(request.value("UserName").toString(),request.value("Password").toString());
        break;
    case 1 :

        validationState = validateCreateUser(request.value("FullName").toString(),request.value("Age").toString().toInt(),
                                             request.value("UserName").toString(),request.value("Password").toString(),
                                             request.value("ConfPassword").toString());
        break;

    case 2:
        validationState = validateAdminGetAccountNumber(request.value("UserName").toString());

        break;

    case 3:
        validationState = validateDeleteUser(request.value("AccountNumber").toString());

        break;
    case 4:
        validationState = validateUpdateUser(request.value("AccountNumber").toString(),request.value("FullName").toString(),
                                             request.value("Age").toString().toInt(),
                                             request.value("UserName").toString(),request.value("Password").toString(),
                                             request.value("ConfPassword").toString());
        break;

    case 5:
        validationState = validateViewTransHistory(request.value("AccountNumber").toString(),request.value("Count").toString());

        break;
    case 6:
        validationState = validateViewDB();
        break;
    case 7:
        validationState = validateGetAccBalance(request.value("AccountNumber").toString());

        break;
    case 8:
        validationState = validateMakeTrans(request.value("AccountNumber").toString(),
                                            request.value("Amount").toString());


        break;

    case 9:
        validationState = validateMakeTransfer(request.value("SenderAccountNumber").toString(),request.value("ReceiverAccountNumber").toString(),
                                            request.value("Amount").toString());


        break;
    }




    qInfo()<<validationState;
    return validationState;
}

int RequestValidator::validateLogin(const QString& username, const QString &password)const
{
    int errorState=0;



    qInfo()<<"from vali"<<username;
    qInfo()<<password;

    if(username.isEmpty())
    {
        errorState+=1;
    }

     if(password.isEmpty()) {
         errorState+=10;
    }

    if (!username.contains(usernameRegex)){
          errorState+=100;
    }

    if (!password.contains(passwordRegex)){
        errorState+=1000;
    }

    qInfo()<<errorState<<"errorState";

    return errorState;


}

int RequestValidator::validateCreateUser(const QString &fullName ,const int &age, const QString &userName, const QString password, const QString &confPassword) const
{
    int errorState=0;



    if(fullName.isEmpty()){
        errorState+=1;
    }

    if(userName.isEmpty()){
        errorState+=10;
    }

    if(password.isEmpty()){
        errorState+=100;
    }

    if(confPassword.isEmpty()) {
          errorState+=1000;
    }
    if (!userName.contains(usernameRegex)){
        errorState+=10000;
    }

    if (!password.contains(passwordRegex)){
        errorState+=100000;
    }
    if (!fullName.contains(fullNameRegex)){
            errorState+=1000000;
    }
    if (password != confPassword){
            errorState+=10000000;
    }
    if (age < 18)
    {
        errorState+=100000000;
    }

    qInfo()<<errorState<<"errorState";



    return errorState;

}

int RequestValidator::validateAdminGetAccountNumber(const QString &username)const
{
    int errorState = 0;


    if (username.isEmpty()){
        errorState = 1;
    }

    if (!username.contains(usernameRegex)){
        errorState = 10;
    }
    return errorState;


}

int RequestValidator::validateDeleteUser(const QString &accountNumber) const
{
    int errorState = 0;


    if (accountNumber.isEmpty()){
        errorState = 1;
    }

    if (!accountNumber.contains(accountNumberRegex)){
        errorState = 10;
    }
    return errorState;
}

int RequestValidator::validateUpdateUser(const QString &accountNumber,const QString &fullName, const int &age, const QString &userName, const QString password, const QString &confPassword) const
{

    int errorState=0;



    if(!fullName.isEmpty()){
        if (!fullName.contains(fullNameRegex)){
            errorState+=1;
        }
    }

    if(!userName.isEmpty()){
        if (!userName.contains(usernameRegex)){
            errorState+=10;
        }
    }

    if(!password.isEmpty()){
        if (!password.contains(passwordRegex)){
            errorState+=100;
        }

        if (password != confPassword){
            errorState+=1000;
        }

    }

    if (age != 0)
    {
        if (age < 18)
        {
            errorState+=10000;
        }
    }

    if(accountNumber.isEmpty()){
        errorState+=100000;

    }

    if (!accountNumber.contains(accountNumberRegex)){
        errorState+=1000000;
    }

    qInfo()<<errorState<<"errorState";



    return errorState;

}

int RequestValidator::validateMakeTrans(const QString &accountNumber, const QString &amount)const
{
    int errorState = 0;


    if (accountNumber.isEmpty()){
        errorState = 1;
    }

    if (amount.isEmpty()){
        errorState += 10;
    }


    if (!amount.contains(onlyNumbers)){
        errorState += 100;
    }
    return errorState;
}

int RequestValidator::validateViewTransHistory(const QString &accountNumber, const QString &count) const
{
    int errorState = 0;


    if (accountNumber.isEmpty()){
        errorState = 1;
    }

    if (count.isEmpty()){
        errorState = 10;
    }


    if (count.toInt() <= 0){
        errorState = 100;
    }
    if (!accountNumber.contains(accountNumberRegex)){
        errorState = 1000;
    }
    return errorState;
}

int RequestValidator::validateViewDB() const
{
    return 0;
}

int RequestValidator::validateGetAccBalance(const QString &accountNumber) const
{
    int errorState = 0;


    if (accountNumber.isEmpty()){
        errorState = 1;
    }


    if (!accountNumber.contains(accountNumberRegex)){
        errorState = 10;
    }
    return errorState;
}

int RequestValidator::validateMakeTransfer(QString senderaccountNumber, QString recieveraccountNumber, QString amount) const
{
    int errorState = 0;

    if (senderaccountNumber.isEmpty()){
        errorState = 1;
    }
    if (recieveraccountNumber.isEmpty()){
        errorState = 10;
    }
    if (amount.toDouble() <= 0 ){
        errorState = 100;
    }
    if(senderaccountNumber == recieveraccountNumber)
    {
        errorState = 1000;
    }


    if (!senderaccountNumber.contains(accountNumberRegex)){
        errorState = 10000;
    }
    if (!recieveraccountNumber.contains(accountNumberRegex)){
        errorState = 100000;
    }

    if (!amount.contains(onlyNumbers)){
        errorState = 1000000;
    }


    return errorState;


























}
