#include<iostream>
#include "File.h"
#include <string>

Work::Work(string name, string path) : File(string name, int visible, string path){

	this->mark = -1; //valeur par défaut
}

int Work::getMark(){

	return mark;

}

Student Work::getStudent(){

	return student;
}

int Work::getTypeResource(){

	return 4;

}

void Work::setMark(int mark){
	
	this->mark = mark;
}

