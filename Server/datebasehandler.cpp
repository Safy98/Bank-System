#include "datebasehandler.h"
#include <QCoreApplication>


/// @brief Private constructor since this class is singleton
DataBasaHandler::DataBasaHandler()
{
    
    DataBaseFile = new QFile("myDataBase.json");
    DBLogger = new Logger("./dbLogger.log");

    initilaize();

}


/// @brief Static method used to create one instance of the class
/// @return Pointer to the on existing instance which was created by the server at the beginning
DataBasaHandler *DataBasaHandler::DataBaseHandlerInstance()
{
    static DataBasaHandler * instance= new DataBasaHandler();


    return instance;
}



/// @brief Initilaize the database manger , if a db file doesn't exist it creates one with default admin
void DataBasaHandler::initilaize()
{
    if(!DataBaseFile->exists())
    {
        DataBaseFile->open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream stream(DataBaseFile);

        QJsonObject container;

        QJsonObject Admin;

        Admin["FullName"] = "Admin";
        Admin["AccountNumber"]="1";
        Admin["Age"] = "25";
        Admin["Password"] = "safee1234S$";
        Admin["IsAdmin"] = true;
        Admin["AccountBalance"] = "0";
        QJsonArray history;
        Admin["TransactionHistory"] = history;



        container["Safy98"]=Admin;

        QJsonDocument doc(container);
        stream << QString::fromUtf8(doc.toJson(QJsonDocument::JsonFormat::Indented));
        stream.flush();
        DataBaseFile->close();
    }
}


/// @brief checks if the recived username and password belongs to registered account
/// @param data : QJosnObject contains the user's username and password
/// @return Returns a QJsonObject contains in the "ResponseID" key weather the  account is registerd or not with and error code key "Reason"
QJsonObject DataBasaHandler::logIn(QJsonObject data)
{
    QJsonObject jResponse;
    QJsonParseError jError;
    jResponse["ResponseID"] = "0";



    // Check if the database file exists
    if (!DataBaseFile->exists())
    {
        DBLogger->log("Database file doesn't exist.");
        // qCritical() << "Database file doesn't exist.";

        jResponse["State"] = false;
        jResponse["Reason"] = "-3";

        return jResponse;
    }

    // Open the database file for reading
    if (!DataBaseFile->open(QIODevice::ReadOnly))
    {

        DBLogger->log("Failed to open database file for reading.");
        // qCritical() << "Failed to open database file for reading.";
        DataBaseFile->close();
        jResponse["State"] = false;
        jResponse["Reason"] = "-3";
        return jResponse;
    }

    // Read JSON content from the database file
    QJsonDocument doc = QJsonDocument::fromJson(DataBaseFile->readAll(), &jError);
    DataBaseFile->close(); 

    // Parse the read data 
    if (jError.error != QJsonParseError::NoError)
    {

        // qCritical() << "Failed to parse JSON:" << jError.errorString();
        DBLogger->log("Failed to parse JSON.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-3";

        return jResponse;
    }



    QJsonObject obj = doc.object();



    // Check if the user exists in the database
    if (!obj.contains(data.value("UserName").toString()))
    {
        // qCritical() << "User not found.";
        DBLogger->log("User not found.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-1";

        return jResponse;
    }



    // Check if the password matches
    QString userPass = obj.value(data.value("UserName").toString()).toObject().value("Password").toString();
    if (data.value("Password").toString() != userPass)
    {
        // qCritical() << "Incorrect password.";
        DBLogger->log("Incorrect password.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";

        return jResponse;
    }



    // Login successful
    bool isAdmin = obj.value(data.value("UserName").toString()).toObject().value("IsAdmin").toBool();
    jResponse["State"] = true;
    jResponse["IsAdmin"] = isAdmin;
    jResponse["Name"] = obj.value(data.value("UserName").toString()).toObject().value("FullName").toString();

    DBLogger->log("User: " + data.value("UserName").toString() + " has logged in successfully.");

    return jResponse;
}

/// @brief returns the account number assosiated with the received username if exists
/// @param data : QJosnObject contains the user's username
/// @return Returns a QJsonObject contains in the "ResponseID" key and "State" key indicates the state of the request (true - false) and error code key "Reason" 
QJsonObject DataBasaHandler::getAccount_Number(QJsonObject data)
{

    QJsonObject jResponse;
    QJsonParseError jError;
    jResponse["ResponseID"] = "2";



    // Open the database file for reading
    if (!DataBaseFile->open(QIODevice::ReadOnly | QIODevice::Text))
    {


        DBLogger->log("Failed to open database file for reading.");
        // qCritical() << "Failed to open database file for reading.";
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";

        return jResponse;
    }

    // Read JSON content from the database file
    QJsonDocument doc = QJsonDocument::fromJson(DataBaseFile->readAll(), &jError);
    DataBaseFile->close(); 

    if (jError.error != QJsonParseError::NoError)
    {

        qCritical() << "Failed to parse JSON:" << jError.errorString();
        // DBLogger->log("Failed to parse JSON.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";
        return jResponse;
    }

    QJsonObject obj = doc.object();

    // Check if the user exists in the database
    if(obj.value(data.value("UserName").toString()) == QJsonValue::Undefined)
    {
        // qCritical() << "User not found.";
        DBLogger->log("User not found.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-1";
        return jResponse;
    }

    // Retrieve the account number of the user
    QString accountNumber = obj.value(data.value("UserName").toString()).toObject().value("AccountNumber").toString();



    jResponse["State"] = true;
    jResponse["AccountNumber"]=accountNumber;
    return jResponse;
}

/// @brief returns the balance assosiated with the received account number if exists
/// @param data  QJosnObject contains the user's accoun number
/// @return  Returns a QJsonObject contains in the "ResponseID" key and "State" key indicates the state of the request (true - false) and error code key "Reason" 
QJsonObject DataBasaHandler::viewAccount_Balance(QJsonObject data)
{
    QJsonParseError jError;
    QJsonObject jResponse;
    jResponse["ResponseID"] = "7";

    // Open the database file for reading
    if(!(DataBaseFile->open(QIODevice::ReadOnly | QIODevice::Text)))
    {


        // qCritical() << "Can't open database file.";
        DBLogger->log("Can't open database file.");
        DataBaseFile->close();
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";
        return jResponse;
    }

    // Read JSON content from the database file
    QJsonDocument doc = QJsonDocument::fromJson(DataBaseFile->readAll(), &jError);

    //Parse the read data
    if (jError.error != QJsonParseError::NoError)
    {


        // qCritical() << "Failed to parse JSON:" << jError.errorString();
        DBLogger->log("Failed to parse JSON.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";
        return jResponse;
    }
    DataBaseFile->close();



    QJsonObject database = doc.object();
    QJsonObject desiredObj;

    // stores all the keys of the DB to loop on all the accounts and find the desired user
    QStringList list = database.keys();
    bool flag = false;

    foreach (QString key, list) {
        QString number =  database.value(key).toObject().value("AccountNumber").toString();
        if(number == data.value("AccountNumber").toString())
        {
            desiredObj = database.value(key).toObject();
            flag=true;
            break;
        }
    }

    //user found
    if(flag)
    {
        jResponse["AccountBalance"] =desiredObj.value("AccountBalance").toString();
        jResponse["State"] = true;
        jResponse["Reason"] = "0";
        return jResponse;
    }

    // user not found
    jResponse["State"] = false;
    jResponse["Reason"] = "-1";
    return jResponse;
}




/// @brief  returns transactions assosiated with the received account number if exists
/// @param data  QJosnObject contains the user's accoun number and the number of transactions to pass back
/// @return  Returns a QJsonObject contains in the "ResponseID" key and "State" key indicates the state of the request (true - false) and error code key "Reason" 
QJsonObject DataBasaHandler::viewTransaction_History(QJsonObject data)
{
    QJsonParseError jError;
    QJsonObject jResponse;
    jResponse["ResponseID"] = "5";





    // Open the database file for reading
    if(!(DataBaseFile->open(QIODevice::ReadOnly | QIODevice::Text)))
    {


        // qCritical() << "Can't open database file.";
        DBLogger->log("Can't open database file.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-3";
        return jResponse;
    }

    // Read JSON content from the database file
    QJsonDocument doc = QJsonDocument::fromJson(DataBaseFile->readAll(), &jError);
        DataBaseFile->close();

    //Parse the read data
    if (jError.error != QJsonParseError::NoError)
    {

        // qCritical() << "Failed to parse JSON:" << jError.errorString();
        DBLogger->log("Failed to parse JSON.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-3";
        return jResponse;
    }

    QJsonObject database = doc.object();


    QJsonObject desiredObj;
    QJsonArray newArr;

    //number of the transactions to pass back
    int count = data.value("Count").toString().toInt();

    // stores all the keys of the DB to loop on all the accounts and find the desired user
    QStringList list = database.keys();
    bool flag = false;

    foreach (QString key, list) {
        QString number =  database.value(key).toObject().value("AccountNumber").toString();
        if(number == data.value("AccountNumber").toString())
        {
            desiredObj = database.value(key).toObject();
            flag=true;
            break;
        }
    }

    //user found
    if (flag)
    {
        QJsonArray transHistory =   desiredObj.value("TransactionHistory").toArray();
        if(transHistory.empty())
        {
            jResponse["State"] = false;
            jResponse["Reason"] = "-2";
            return jResponse;
        }


        // stores the required number of transactions into a QJsonArray
        for(int i = transHistory.size()-1 ; i>=0 ; i--)
        {


            newArr.append(transHistory.at(i).toObject());
            count--;
            if(count == 0)
            {
                break;
            }
        }
        jResponse["Transactions"] = newArr;

        jResponse["State"] = true;
        jResponse["Reason"] = "0";
        return jResponse;




    }


    //user not found
    jResponse["State"] = false;
    jResponse["Reason"] = "-1";

    DBLogger->log("User: " + data.value("AccountNumber").toString() + "  not found in  JSON DataBase successfully.");
    return jResponse;


}




/// @brief  depoists or withdraws the amount of money of the account assosiated with received account numerb based on sign of the received value
/// @param data  QJosnObject contains the user's accoun number and a signed number to indicate if it's a withdraw or deposite
/// @return  Returns a QJsonObject contains in the "ResponseID" key and "State" key indicates the state of the request (true - false) and error code key "Reason" 
QJsonObject DataBasaHandler::makeTransaction(QJsonObject data)
{
    QJsonParseError jError;
    QJsonObject jResponse;
    jResponse["ResponseID"] = "8";

    // Open the database file for reading
    if(!(DataBaseFile->open(QIODevice::ReadOnly | QIODevice::Text)))
    {

        // qCritical() << "Can't open database file.";
        DBLogger->log("Can't open database file.");
        DataBaseFile->close();
        jResponse["State"] = false;
        jResponse["Reason"] = "-3";

        return jResponse;
    }

        
    // Read JSON content from the database file
    QJsonDocument doc = QJsonDocument::fromJson(DataBaseFile->readAll(), &jError);
    DataBaseFile->close();

    //Parse the read data
    if (jError.error != QJsonParseError::NoError)
    {

        qCritical() << "Failed to parse JSON:" << jError.errorString();
        DBLogger->log("Failed to parse JSON.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-3";
        return jResponse;
    }


    //creating a new transaction.



    QJsonObject desiredObj;
    QString desiredKey;
    QJsonObject database = doc.object();

    // stores all the keys of the DB to loop on all the accounts and find the desired user
    QStringList list = database.keys();
    bool flag = false;


    foreach (QString key, list) {
        QString number =  database.value(key).toObject().value("AccountNumber").toString();
        if(number == data.value("AccountNumber").toString())
        {
            // the desired username
            desiredKey = key;

            //cope the object assosiated withe username to perform operation on it
            desiredObj = database.value(key).toObject();

            //remove the original userobject and will replace it with another one later if successfull
            //else , this change won't take place in the real file untill write back to it
            database.remove(key);

            //indicates user found
            flag=true;
            break;
        }
    }

    //user found
    if(flag)
    {
        double oldBalnce = desiredObj.value("AccountBalance").toString().toDouble();
        double amount = data.value("Amount").toString().toDouble();

        // the sign of the amound could be negative so the operation could be substraction
        double newBalance = oldBalnce+amount;

        // if the new balance is negative , operation will terminate with error
        if(newBalance < 0 )
        {
            jResponse["State"] = false;
            jResponse["Reason"] = "-2";
            return jResponse;
        }

        // transaction successfull
        desiredObj["AccountBalance"]=QString::number(newBalance);

        // copying the previous transactions to append this one to them
        QJsonArray TransactionHistory = desiredObj.value("TransactionHistory").toArray();

        QJsonObject transaction;
        QString date = QDateTime::currentDateTime().toString("dd.MM.yyyy");
        transaction["date"] = date;


        if(amount > 0)
        {
            transaction["Type"] = "Deposit" ;
        }
        else
        {
            transaction["Type"] = "Withdraw" ;

        }


        transaction["Amount"] = QString::number(amount);
        TransactionHistory.append(transaction);

        desiredObj["TransactionHistory"] = TransactionHistory;


        database[desiredKey]=desiredObj;


        // Write the modified JSON back to the file
        if (!DataBaseFile->open(QIODevice::ReadWrite | QIODevice::Text))
        {

            // qCritical() << "Failed to open file for reading and writing.";
            jResponse["State"] = false;
            jResponse["Reason"] = "-3";
            DataBaseFile->close();
            return jResponse;
        }

        // Clear file to write it all back again
        DataBaseFile->resize(0); 
        QTextStream stream(DataBaseFile);
        stream << QJsonDocument(database).toJson(QJsonDocument::Indented);
        DataBaseFile->close();


        jResponse["State"] = true;
        jResponse["Reason"] = "0";





        return jResponse;
    }

    //user not found
    jResponse["State"] = false;
    jResponse["Reason"] = "-1";
    // qDebug() << "User" << data.value("UserName").toString() << "user not found";
    DBLogger->log("User: " + data.value("AccountNumber").toString() + "  not found in  JSON DataBase successfully.");

    return jResponse;


}



/// @brief  transfers money only ne  direction from the sender to the receiver ,  
/// @param data  QJosnObject contains the user's account number of the sender adn the reciever  and a positive number as the amount to transfer
/// @return  Returns a QJsonObject contains in the "ResponseID" key and "State" key indicates the state of the request (true - false) and error code key "Reason" 
QJsonObject DataBasaHandler::transferAmount(QJsonObject data)
{
    QJsonParseError jError;
    QJsonObject jResponse;
    jResponse["ResponseID"] = "9";

     // Open the database file for reading
    if(!(DataBaseFile->open(QIODevice::ReadOnly | QIODevice::Text)))
    {
        // qCritical() << "Can't open database file.";
        DBLogger->log("Can't open database file.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-3";

        DataBaseFile->close();
    }

    // Read JSON content from the database file
    QJsonDocument doc = QJsonDocument::fromJson(DataBaseFile->readAll(), &jError);
    DataBaseFile->close();

    //parse the read data
    if (jError.error != QJsonParseError::NoError)
    {
        // qCritical() << "Failed to parse JSON:" << jError.errorString();
        DBLogger->log("Failed to parse JSON.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-3";
        return jResponse;
    }



    QJsonObject DataBaseObj = doc.object();


    //next will use the make transaction method twice but before that we need to make sure
    //1- reciever exists
    //2- the sender exists and has the amount of money required , this is the job of make transaction method
    //3- call make transaction on the reciever to add the money to him


    // stores all the keys of the DB to loop on all the accounts and find the receiver user
    QStringList list = DataBaseObj.keys();
    bool receiverFound = false;

    foreach (QString key, list) {
        QString number =  DataBaseObj.value(key).toObject().value("AccountNumber").toString();
        if(number == data.value("ReceiverAccountNumber").toString())
        {

            receiverFound=true;

        }
    }

    //receiver not found
    if(!receiverFound)
    {
        jResponse["State"] = false;
        jResponse["Reason"] = "-4";
        return jResponse;
    }


    QJsonObject senderObj;

    //call the make transaction on the sender with negative amount to be substracted

    
    /* the amount is already handled in the client side to be non zero positive value so the sender
     can't take money from the receiver if he writes a negative value in the amount section */

    double senderAmount = (data.value("Amount").toString().toDouble())* (-1);



    senderObj["AccountNumber"]=data.value("SenderAccountNumber").toString();
    senderObj["Amount"]=QString::number(senderAmount);


    QJsonObject senderTransResponseObj =  makeTransaction(senderObj);

    if(!(senderTransResponseObj.value("State").toBool() ))
    {

        jResponse["State"]=false;
        jResponse["Reason"] = senderTransResponseObj.value("Reason").toString();
        return jResponse;


    }


    QJsonObject receiverObj;

    receiverObj["AccountNumber"]=data.value("ReceiverAccountNumber").toString();
    receiverObj["Amount"]=data.value("Amount").toString(); ;

    QJsonObject receiverTransResponseObj =  makeTransaction(receiverObj);


    // check if the make transaction method was done successfully and the amount was added from the user
    if(!(receiverTransResponseObj.value("State").toBool() ))
    {

        jResponse["State"]=false;
        jResponse["Reason"] = receiverTransResponseObj.value("Reason").toString();
        return jResponse;


    }

    jResponse["State"] = true;
    jResponse["Reason"] = "0";

    return jResponse;



}


/// @brief  checks if the database exists and not empty and returns it in QJsonObject
/// @return  Returns a QJsonObject contains "DataBase" key and "ResponseID" key and "State" key indicates the state of the request (true - false) and error code key "Reason" 
QJsonObject DataBasaHandler::viewBankDB()
{
    QJsonParseError jError;
    QJsonObject jResponse;
    jResponse["ResponseID"] = "6";

     // Open the database file for reading
    if(!(DataBaseFile->open(QIODevice::ReadOnly | QIODevice::Text)))
    {

        DBLogger->log("Can't open database file.");
        DataBaseFile->close();
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";

        return jResponse;
    }

    QJsonDocument doc = QJsonDocument::fromJson(DataBaseFile->readAll(), &jError);
    DataBaseFile->close();

    // parese the read data
    if (jError.error != QJsonParseError::NoError)
    {

        // qCritical() << "Failed to parse JSON:" << jError.errorString();
        DBLogger->log("Failed to parse JSON.");
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";

        return jResponse;
    }



    QJsonObject obj = doc.object();


    if(obj.empty())
    {
        jResponse["State"] = false;
        jResponse["Reason"] = "-1";
        return jResponse;

    }


    jResponse["DataBase"]=obj;
    jResponse["State"] = true;
    jResponse["Reason"] = "0";
    return jResponse;
}

QJsonObject DataBasaHandler::createUser(QJsonObject data)
{
    QJsonObject jResponse;
    jResponse["ResponseID"] = "1";

    // Open the database file
    if (!DataBaseFile->open(QIODevice::ReadWrite | QIODevice::Text))
    {
        // qCritical() << "Can't open database file!";
        DBLogger->log("Can't open database file!");
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";
        return jResponse;
    }

    // Read existing JSON content
    QJsonParseError jError;
    QJsonDocument doc = QJsonDocument::fromJson(DataBaseFile->readAll(), &jError);
    if (jError.error != QJsonParseError::NoError)
    {
        // qCritical() << "Failed to parse JSON:" << jError.errorString();
        DBLogger->log("Failed to parse JSON:");
        DataBaseFile->close();
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";
        return jResponse;
    }

    DataBaseFile->close();

    QJsonObject jsonObj= doc.object();
    // check if user name already reserved
    if(jsonObj.contains(data.value("UserName").toString()) )
    {
        jResponse["State"] = false;
        jResponse["Reason"] = "-1";

        return jResponse;

    }
    bool flag;
    int accountNum =  randomNumGen.bounded(1,1000);

    QStringList list = jsonObj.keys();
    while(1)
    {
         accountNum =  randomNumGen.bounded(1,1000);
        flag = false;
        foreach (QString key, list) {
            int number =  jsonObj.value(key).toObject().value("AccountNumber").toString().toInt();
            if(number == accountNum)
            {

                flag=true;
                break;
            }


        }
        if(!flag)
        {
            break;
        }

    }







    // Prepare data to be added
    QJsonArray history;
    data["TransactionHistory"] = history;
    data["AccountNumber"] = QString::number(accountNum);

    // Insert new user data into JSON object
    data.remove("RequestID");
    QJsonObject newobj = data;
    newobj.remove("UserName");
    jsonObj.insert(data.value("UserName").toString(), newobj);

    // Open the database file again for writing
    if (!DataBaseFile->open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate))
    {
        // qCritical() << "Can't open database file!";
        DBLogger->log("Can't open database file!");
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";
        return jResponse;
    }

    // Write the updated JSON to the file
    QJsonDocument writableDoc(jsonObj);
    QTextStream stream(DataBaseFile);
    stream << QString::fromUtf8(writableDoc.toJson(QJsonDocument::Indented));
    DataBaseFile->close();

    jResponse["State"] = true;
    jResponse["Reason"] = "0";

    return jResponse;
}


QJsonObject DataBasaHandler::deleteUser(QJsonObject data)
{
    QJsonObject jResponse;
    jResponse["ResponseID"] = "3";

    if (!DataBaseFile->open(QIODevice::ReadWrite | QIODevice::Text))
    {
        // qCritical() << "Failed to open file for reading and writing.";
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";
        DataBaseFile->close();
        return jResponse;
    }

    // Read JSON content
    QByteArray jsonData = DataBaseFile->readAll();
    DataBaseFile->close();

    // Parse JSON
    QJsonParseError error;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData, &error);
    if (error.error != QJsonParseError::NoError)
    {
        // qCritical() << "Failed to parse JSON:" << error.errorString();
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";
        DataBaseFile->close();
        return jResponse;
    }

    // Modify JSON object: Remove the key
    QJsonObject jsonObj = jsonDoc.object();
    QStringList list = jsonObj.keys();
    bool flag = false;
    foreach (QString key, list) {
        QString number =  jsonObj.value(key).toObject().value("AccountNumber").toString();
        if(number == data.value("AccountNumber").toString())
        {
            jsonObj.remove(key);
            flag=true;
            break;
        }
    }
    if(flag)
    {
        // Write the modified JSON back to the file
        if (!DataBaseFile->open(QIODevice::ReadWrite | QIODevice::Text))
        {
            // qCritical() << "Failed to open file for reading and writing.";
            jResponse["State"] = false;
            jResponse["Reason"] = "-2";
            DataBaseFile->close();
            return jResponse;
        }

        DataBaseFile->resize(0); // Clear existing content
        QTextStream stream(DataBaseFile);
        stream << QJsonDocument(jsonObj).toJson(QJsonDocument::Indented);
        DataBaseFile->close();

        jResponse["State"] = true;
        jResponse["Reason"] = "0";
        // qDebug() << "User" << data.value("UserName").toString() << "deleted from JSON file successfully.";
        // DBLogger->log("User: " + data.value("UserName").toString() + " deleted from JSON file successfully.");
        return jResponse;

    }

    jResponse["State"] = false;
    jResponse["Reason"] = "-1";
    // qDebug() << "User" << data.value("UserName").toString() << "user not found";
    DBLogger->log("User: " + data.value("AccountNumber").toString() + "  not found in  JSON DataBase successfully.");
    return jResponse;


}

QJsonObject DataBasaHandler::updateUser(QJsonObject data)
{
    QJsonObject jResponse;
    // Read the JSON file
    jResponse["ResponseID"] = "4";

    if (!DataBaseFile->open(QIODevice::ReadWrite | QIODevice::Text))
    {
        // qCritical() << "Failed to open file for reading and writing.";
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";
        DataBaseFile->close();
        return jResponse;
    }

    // Read JSON content
    QByteArray jsonData = DataBaseFile->readAll();
    DataBaseFile->close();

    // Parse JSON
    QJsonParseError error;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData, &error);
    if (error.error != QJsonParseError::NoError)
    {
        // qCritical() << "Failed to parse JSON:" << error.errorString();
        jResponse["State"] = false;
        jResponse["Reason"] = "-2";
        DataBaseFile->close();
        return jResponse;
    }

    QJsonObject jsonObj = jsonDoc.object();


    QStringList list = jsonObj.keys();
    QString desiredKey;
    bool flag = false;
    foreach (QString key, list) {
        QString number =  jsonObj.value(key).toObject().value("AccountNumber").toString();
        if(number == data.value("AccountNumber").toString())
        {
            desiredKey = key;
            flag=true;
            break;
        }
    }
    if(flag)
    {
        QJsonObject desiredObj =   jsonObj.value(desiredKey).toObject();

        if(!(data.value("FullName").toString().isEmpty()))
        {
            desiredObj["FullName"]=data.value("FullName").toString();
        }
        if(!(data.value("Password").toString().isEmpty()))
        {
            desiredObj["Password"]=data.value("Password").toString();
        }
        if(!(data.value("Age").toString().toInt() == 0))
        {
            desiredObj["Age"]=data.value("Age").toString();
        }
        if(!(data.value("UserName").toString().isEmpty()))
        {

            if (!(jsonObj.contains(data.value("UserName").toString())))
            {
                jsonObj[data.value("UserName").toString()]=desiredObj;
                jsonObj.remove(desiredKey);


            }
            else
            {
                jResponse["State"] = false;
                jResponse["Reason"] = "-3";
                // qDebug() << "User" << data.value("UserName").toString() << "user name reserved ";
                DBLogger->log("User: " + data.value("AccountNumber").toString() + "  nuser name reserved in  JSON DataBase successfully.");
                return jResponse;
            }
        }
        else
        {
            jsonObj.remove(desiredKey);
            jsonObj[desiredKey]=desiredObj;


        }







        // Write the modified JSON back to the file
        if (!DataBaseFile->open(QIODevice::ReadWrite | QIODevice::Text))
        {
            // qCritical() << "Failed to open file for reading and writing.";
            jResponse["State"] = false;
            jResponse["Reason"] = "-2";
            DataBaseFile->close();
            return jResponse;
        }

        DataBaseFile->resize(0); // Clear existing content
        QTextStream stream(DataBaseFile);
        stream << QJsonDocument(jsonObj).toJson(QJsonDocument::Indented);
        DataBaseFile->close();

        jResponse["State"] = true;
        jResponse["Reason"] = "0";
        // qDebug() << "User" << data.value("UserName").toString() << "user updated successfully ";
        DBLogger->log("User: " + data.value("AccountNumber").toString() + "  user updated in JSON DataBase successfully.");
        return jResponse;
    }

    jResponse["State"] = false;
    jResponse["Reason"] = "-1";
    // qDebug() << "User" << data.value("UserName").toString() << "user not found";
    DBLogger->log("User: " + data.value("AccountNumber").toString() + "  not found in  JSON DataBase successfully.");
    return jResponse;

}
