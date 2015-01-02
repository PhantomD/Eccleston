#include "Repository.h"

Repository::Repository(string name , int visible,string path, tm datefin) : Resource(name, visible)
{
	this->name = name;
	this->visible = visible;
	this->path = path;
	this->dateEnd = datefin;
}


Repository::~Repository()
{

}

void Repository::addWork(Work w1, Student st1){ // heu on fait quoi avec st1?
	this->listWorks.push_back(w1);
}

int checkFile(string){

}

int checkResourceName(string){

}

string Repository::getPath(){
	return this->path;
}

int Repository::getTypeResource(){
	return 0; // c'est cb pour les ressources ?
}

vector<Work> Repository::getWorks(){
	return this->listWorks;
}

void Repository::removeWork(Student st){
	int i = 0;
	if (listWorks.at(0).getStudent().getLogin() == st.getLogin()){
		listWorks.erase(listWorks.begin() + 0);
	}
	else {
		for (unsigned int i = 1; i < listWorks.size(); i++){
			if (listWorks.at(i).getStudent().getLogin() == st.getLogin()){
				listWorks.erase(listWorks.begin() + i);
			}
		}
	}
}

void Repository::setPath(string path){
	this->path = path;
}