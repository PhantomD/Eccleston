#include "Lesson.h"
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include "Resource.h"
#include "Teacher.h"
#include "Student.h"

Lesson::Lesson(){
	this->name = "";
	this->dateBegin = tm();
	this->dateEnd = tm();
	this->validate = 0;
	this->maxStudents = 0;
	teacher = NULL;
}

Lesson::~Lesson(){
}

Lesson::Lesson(string name, tm dateBegin, tm dateEnd, int maxStudents){
	this->name = name;
	this->dateBegin = dateBegin;
	this->dateEnd = dateEnd;
	this->validate = 0;
	this->maxStudents = maxStudents;
	teacher = NULL;
}

Lesson::Lesson(string name, int maxStudents){
	this->name = name;
	this->dateBegin = tm();
	this->dateEnd = tm();
	this->validate = 0;
	this->maxStudents = maxStudents;
	teacher = NULL;
}

void Lesson::addResource(Resource* res) {
	this->listResources.push_back(res);
}

void Lesson::addStudent(Student* stud) {
	if (this->getNumbreStudent() >= this->getMaxStudents()) {
		this->addStudentSecondaryList(stud);
	}
	else {
		this->addStudentMainList(stud);
	}
}

void Lesson::addStudentMainList(Student* stud) {
	this->mainListUsers.push_back(stud);
}

void Lesson::addStudentSecondaryList(Student* stud) {
	this->secondaryListUsers.push_back(stud);
}

int Lesson::getNumbreStudent() {
	int num = 0;
	num += mainListUsers.size();
	num += secondaryListUsers.size();
	return num;
}

Resource* Lesson::getResource(int index) {
	return listResources.at(index);
}

vector<Resource*> Lesson::getResources() {
	return listResources;
}