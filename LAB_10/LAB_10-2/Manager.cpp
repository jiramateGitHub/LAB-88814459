#include "Manager.h"

Manager::Manager()
{
	firstname = "";
	lastname = "";
	salary = 0;
	cashPosition = 0;
}

Manager::Manager(string first,string last,int s,int c){
	firstname = first;
	lastname = last;
	salary = s;
	cashPosition = c;
}

int Manager::calculate(){
	return salary += cashPosition;
}

void Manager::print(){
	calculate();
	cout << firstname << " " << lastname << " " << salary << endl;
}
