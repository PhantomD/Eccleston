#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"
#include "Lesson.h"
#include "ResourceFile.h"
#include "Notification.h"
#include <vector>
#include <iostream>
#include <ctime>

class Work;

using namespace std;


class Student: public User
{

public:
	Student(string,string,string,string,string, ModelEccleston*);
	Student();
	~Student();
	void addLesson(Lesson);
	void addNotification(Lesson); 
	void addNotification(ResourceFile, Lesson); 
	void addNotification(Work*);// � compl�ter plus tard
	vector<Lesson> getLessons(); // TODO � v�rifier
	int getUserType();
	Work* getWork(int); 
	void setWork(int,Work*); // � compl�ter plus tard

private:
	vector<Lesson> listLessons;
	vector<Work*> listWork;
};

#endif