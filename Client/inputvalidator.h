#ifndef INPUTVALIDATOR_H
#define INPUTVALIDATOR_H


#include <QRegularExpression>
class InputValidator
{
public:
    InputValidator();

   int validateLogin(QString username , QString password);

private:
   QRegularExpression usernameRegex;
   QRegularExpression passwordRegex;
};

#endif // INPUTVALIDATOR_H
