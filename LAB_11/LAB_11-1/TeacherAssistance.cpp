#include "TeacherAssistance.h"

TeacherAssistance::TeacherAssistance()
{
	hourWork = 0;
	rate = 0;
}

TeacherAssistance::TeacherAssistance(string f,string l,int h,int r){
	firstname = f;
	lastname = l;
}

void TeacherAssistance::setValue(int h,int r){
	hourWork = h;
	rate = r;
}

int TeacherAssistance::calculatePay(){
	return hourWork * rate;
}
