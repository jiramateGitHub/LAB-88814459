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

int Teacher::calculatePay(){
	
}
