#include "Employee.h"

Employee::Employee()
{
	name = "";
	index = 0;
	late = 0;
	total = 0;
}

void Employee::setName(string n){
	name = n;
}

void Employee::setWorkTimeIn(DateTime d){
	timeIn[index] = d;
}

void Employee::setWorkTimeOut(DateTime d){
	timeOut[index] = d;
}

int Employee::countLate(){
	if(timeIn[index].getHour() >= 8){
		if(timeIn[index].getMinute() > 30){
			late++;
			timeIn[index].setLate(1);
		}
	}
}

int Employee::colculatePay(){
	int timeInHour = 0;
	int timeOutHour = 0;
	minuteOfWork[index] = timeOut[index].getMinute() - timeIn[index].getMinute();
	timeInHour = timeIn[index].getHour() * 60;
	timeOutHour = timeOut[index].getHour() * 60;
	hourOfWork[index] = (timeOutHour - timeInHour) + minuteOfWork[index];
	hourOfWork[index] = hourOfWork[index] / 60;
	pay[index] = hourOfWork[index]*45;
	index++;
}

void Employee::print(){
	cout << "==== Output ====" << endl;
	cout << "Employee : " << name << endl;
	for(int i=0;i<index;i++){
		cout << "[" << i+1 << "]" << " ";
		cout << timeIn[i].getDay() << "/";
		cout << timeIn[i].getMonth() << "/";
		cout << timeIn[i].getyear() << " ";
		cout << timeIn[i].getHour() << ":";
		cout << timeIn[i].getMinute() << " - ";
		cout << timeOut[i].getDay() << "/";
		cout << timeOut[i].getMonth() << "/";
		cout << timeOut[i].getyear() << " ";
		cout << timeOut[i].getHour() << ":";
		if(timeIn[i].getPosLate() == 1){
			cout << timeOut[i].getMinute() << "(L)" << "  ";
			pay[i] = pay[i] - 30;
			cout << "=> " << hourOfWork[i] << "H * " << "45 - 30 = " << pay[i] << endl;
		}else{
			cout << timeOut[i].getMinute() << "  ";
			cout << "=> " << hourOfWork[i] << "H * " << "45 = " << pay[i] << endl;
		}
	}
	cout << "late :" << late << endl;
	for(int i=0;i<index;i++){
		total += pay[i];
	}
	cout << "Pay Amount : " << total << endl;
	cout << "==============" << endl;
}
