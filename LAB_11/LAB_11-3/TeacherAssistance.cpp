#include "TeacherAssistance.h"

TeacherAssistance::TeacherAssistance()
{
	hourWork = 0;
	rate = 0;
}

TeacherAssistance::TeacherAssistance(string f,string l,int h,int r){
	firstname = f;
	lastname = l;
	hourWork = h;
	rate = r;
}

void TeacherAssistance::setDate(Date d){
	birthday = d;
}

void TeacherAssistance::setValue(int h,int r){
	hourWork = h;
	rate = r;
}

void TeacherAssistance::print(){
	cout << "TA Name  : " << firstname << " " << lastname << endl;
	cout << "Birthday : " << birthday.getDay() << " " << birthday.getMonth() << " " << birthday.getYear() << endl;
}

int TeacherAssistance::calculatePay(){
	return hourWork * rate;
}
