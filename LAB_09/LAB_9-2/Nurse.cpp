#include "Nurse.h"

Nurse::Nurse()
{
	dailyFee = 0;
}

void Nurse::setDailyFee(double s){
	dailyFee = s;
}

double Nurse::getDailyFree(){
	return dailyFee;
}
