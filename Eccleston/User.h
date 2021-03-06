#ifndef USER_H
#define USER_H

//#include "ModelEccleston.h"
#include "Notification.h"
#include <iostream>
#include <vector>
class ModelEccleston;
using namespace std;

class User{
public:
	User();
	User(string, string, string, string, string, ModelEccleston*, int);
	int checkEmail();
	string getEmail() const{ return (this->email); }
	string getFirstName() const{ return this->firstName; }
	string getLogin() const{ return this->login; }
	string getName() const { return this->name; }
	string getPassword() const{ return this->password; }
	int getUserType() const{ return this->userType; };
	void setEmail(string);
	void setFirstName(string);
	void setLogin(string);
	void setName(string);
	void setPassword(string);
	void setUserType(string);
	~User();

protected:
	string firstName;
	string name;
	string password;
	string login;
	string email;
	int userType;
	std::vector<Notification> listNotification;
	ModelEccleston* mde;
};

#endif
