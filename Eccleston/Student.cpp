#include "Student.h"


//A faire apr�s cr�ation du mod�le 


Student::Student(string firstName, string Name, string password, string login, string email) : User(firstName,Name,
				password,login,email)
{
	this->firstName = firstName;
	this->name = Name;
	this->password = password;
	this->login = login;
	this->email = email;
}


Student::~Student()
{
}


void Student::addLesson(string name, tm date1, tm date2){

}

void Student::addNotification(Lesson lesson){

}

void Student::addNotification(Resource res){

}

//TODO apr�s cr�ation de work
//id Student::addNotification(Work work){

//

Lesson* Student::getLessons(){
	return 0;
}

int Student::getUserType(){
	return 0; // 0 pour student ?
}

//Work Student::getWork(int){
	//return 0;
//}

//void setWork(int,Work); // � compl�ter plus tard