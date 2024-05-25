# Bank System 
A bank system Based on the client-server model and developed with Qt framework.


## About The System:

A graphical user interface (GUI) allows the user to perform several services depending on the user permissions
there are two user types :  
- Regular User   
- Admin  

### Admin services:
- View transaction history of a particular client.  
- View account balance of a particular client.  
- Get account number of a particular client.  
- View Bank dataBase  
- Create a client account .  
- Update a client account data.  
- Delete client account.  

### User services:
- View transaction history of a particular client.  
- View account balance of a particular client.  
- Get account number of a particular client.  
- Make a transaction either a deposit or a withdrawal.  
- Make a transfer from one account to another.  

you can log in to the system either as a regular user or as an admin.

## System Details

### Server Application :

- multithreaded server capable of handling multiple requests concurrently.
- Singleton pattern used to create the Database.
- Global mutex shared among all the threads to prevent data race over the Data base .


### Client Application:
- Gui application.  
- Separate thread for the logic .  
- Observer pattern applied between the gui and the logic component.  
- Singleton pattern used to create the application.  
- Each functionality provided by the gui is implemented in a separate class which complies the single responsibility principle.  

## System Architecture:
- the system is designed based on the MVC pattern ( Model View control).  
- Platform independent since it's designed using Qt framework.  
- OOP principles are applied.  
- Single responsibility principle is applied where each user request is implemented as a singlet class.  
- singleton, observer design patterns applied.  

## To use the system :
- you should have a Linux distro and Qt framework installed  
- Many distributions have a working FUSE setup out-of-the-box. However if it is not working for you, you may need to install and configure FUSE manually.  

For example, on Ubuntu (>= 22.04):
```
sudo add-apt-repository universe
sudo apt install libfuse2
```
- Download the client image and the server image in the deployed file  
- Give them execution permission  
- Run each of the executables.  
