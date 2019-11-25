#include <iostream>
#include "StudentType.h"
using namespace std;
StudentType::StudentType(){
	studentid = "0";
	firstname = "";
	lastname = "";
};
StudentType::StudentType(string id,string first,string last){
	studentid = id;
	firstname = first;
	lastname = last;
};
void StudentType::SetStudentValueFromString(string id,string first,string last){
	studentid = id;
	firstname = first;
	lastname = last;
};
string StudentType::printLongFormat(){
	return studentid+" - "+firstname+" "+lastname;
};
string StudentType::printShortFormat(){
	return lastname.substr(0,1)+". "+firstname+" - "+studentid;
};		
