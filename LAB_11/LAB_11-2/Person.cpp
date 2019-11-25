#include "Person.h"

Person::Person()
{
	firstname = "";
	lastname = "";
}

void Person::setValue(string f,string l){
	firstname = f;
	lastname = l;
}

string Person::getFristname(){
	return firstname;
}
	
string Person::getLastname(){
	return lastname;
}
		
void Person::print(){
	cout << "Name : " << firstname << " " << lastname << endl;
	cout << "Birthday : " << birthday.getDay() << " " << birthday.getMonth() << " " << birthday.getYear() << endl;
}
		
int Person::calculatePay(){
	return 0;
}
