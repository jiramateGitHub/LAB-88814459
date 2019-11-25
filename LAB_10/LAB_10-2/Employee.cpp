#include "Employee.h"

Employee::Employee()
{
	firstname = "";
	lastname = "";
	salary = 0;
}

Employee::Employee(string first,string last,int s){
	firstname = first;
	lastname = last;
	salary = s;
}

void Employee::setValue(string first,string last,int s){
	firstname = first;
	lastname = last;
	salary = s;
}

int Employee::calculate(){
	salary + 0;
}

void Employee::print(){
	calculate();
	cout << firstname << " " << lastname << " " << salary << endl;
}
