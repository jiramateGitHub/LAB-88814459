#include "Person.h"

Person::Person()
{
	fname = "";
	lname = "";
}

void Person::setName(string f,string l){
	fname = f;
	lname = l;
}

string Person::getFname(){
	return fname;
}

string Person::getLname(){
	return lname;
}
