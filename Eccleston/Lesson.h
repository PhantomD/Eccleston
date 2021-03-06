#ifndef LESSON_H
#define LESSON_H

#include <iostream>
#include <vector>
class Student;
class Teacher;
#include "ResourceFile.h"
using namespace std;

class Lesson
{

public:
	Lesson(string, Teacher*, tm, tm, int);
	Lesson(string, Teacher*, int);
	Lesson();

	void addResourceFile(ResourceFile*);
	void addStudent(Student*);
	void addStudentMainList(Student*);
	void addStudentSecondaryList(Student*);
	int checkDate(tm);
	int checkFile(string);
	int checkRepository(string);
	int checkResourceFileName(string);
	int checkUrl(string);
	tm getDateBegin() const { return this->dateBegin; }
	tm getDateEnd() const { return this->dateEnd; }
	int getMaxStudents() const{ return this->maxStudents; }
	string getName() const { return this->name; }
	int getNumbreStudent();
	ResourceFile* getResourceFile(int);
	vector<ResourceFile*> getResourceFiles();
	Student* getStudentSecondaryList(int);
	vector<Student*> getStudents();
	Teacher* getTeacher() { return teacher; }
	int isMainListFull();
	int isStudentMainList(Student*);
	int isValidated() const { return validate; }
	void removeResourceFile(ResourceFile*);
	void removeStudent(Student*);
	void removeStudentMainList(Student*);
	void removeStudentSecondaryList(Student*);
	void setDateBegin(tm dateBegin) { this->dateBegin = dateBegin; }
	void setDateEnd(tm dateEnd) { this->dateEnd = dateEnd; }
	void setMaxStudent(int maxStudent) { this->maxStudents = maxStudent; }
	void setName(string name) { this->name = name; }
	void setTeacher(Teacher* teacher) { this->teacher = teacher; }
	void setValidate(int validate);

	~Lesson();

protected:
	string name;
	tm dateBegin;
	tm dateEnd;
	int validate;
	int maxStudents;
	std::vector<Student*> mainListStudent;
	std::vector<Student*> secondaryListStudent;
	std::vector<ResourceFile*> listResourceFiles;
	Teacher* teacher;
};

#endif