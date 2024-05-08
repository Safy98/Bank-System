#include "inputvalidator.h"

InputValidator::InputValidator() {


    usernameRegex.setPattern("^[a-zA-Z0-9_]*$");
    passwordRegex.setPattern("^(?=.*?[A-Z])(?=.*?[a-z])(?=.*?[0-9])(?=.*?[#?!@$%^&*-]).{8,}$");
}

int InputValidator::validateLogin(QString username, QString password)
{
    int errorState=0;

    username =username.trimmed();
    password = password.trimmed();

    qInfo()<<username;
    qInfo()<<password;

    if(username.isEmpty())
    {


        errorState=1;

    }

    else if(password.isEmpty())
    {


        errorState=2;

    }
    else if (!username.contains(usernameRegex))
    {


        errorState=3;


    }
    else if (!password.contains(passwordRegex))
    {


        errorState=4;
    }

    return errorState;



}
