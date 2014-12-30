#ifndef WORK_H
#define WORK_H
#include <iostream>
#include "Student.h"

using namespace std;

class Work : public File
{
public:
	Work(string,tm,int, string);
	int getMark();
	Student getStudent();
	int getTypeResource();
	void setMark(int);

protected:
	int corrected;
	int mark;
	Student student;
};

#endif