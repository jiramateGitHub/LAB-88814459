#include "Student.h"

Student::Student()
{
	id = 0;
}

void Student::setId(int i){
	id = i;
}

int Student::getId(){
	return id;
}

void Student::print(){
	cout << "ID : " << id << endl;
	cout << "Name : " << getFname() << " " << getLname() << endl;
}

bool Student::checkEqual(Student otherStudent){
	if(otherStudent.getId() == id ){
		return 1;
	}else{
		return 0;
	}
}

void Student::setName(string f,string l) {
	fname = f;
	lname = l;
}
