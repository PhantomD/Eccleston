#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"
#include <iostream>
#include <ctime>

using namespace std;


class Student: public User
{

public:
	Student(string,string,string,string,string);
	~Student();
	void addLesson(string, tm, tm);
	//void addNotification(Lesson); // � compl�ter plus tard
	//void addNotification(Ressource); // � compl�ter plus tard
	//void addNotification(Work); // � compl�ter plus tard
	//Lesson[] getLessons(); // � compl�ter plus tard
	int getUserType();
	//Work getWork(int); // � compl�ter plus tard
	//void setWork(int,Work); // � compl�ter plus tard

};

#endif