#include "Teacher.h"

Teacher::Teacher()
{
	salary = 0;
}

Teacher::Teacher(string f,string l,int s){
	firstname = f;
	lastname = l;
	salary = s;
}

void Teacher::setValue(string f,string l,int s){
	firstname = f;
	lastname = l;
	salary = s;
}

void Teacher::setDate(Date d){
	birthday = d;
}

int Teacher::calculatePay(){
	return salary;
}

void Teacher::print(){
	cout << "Teacher Name : " << firstname << " " << lastname << endl;
	cout << "Birthday : " << birthday.getDay() << " " << birthday.getMonth() << " " << birthday.getYear() << endl;
}

