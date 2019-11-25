#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "DateTime.h"
class Employee
{
	private:
		string name;
		DateTime timeIn[100];
		DateTime timeOut[100];
		int index;
		int late;
		int hourOfWork[100];
		int minuteOfWork[100];
		double pay[100];
		double total;
		
	public:
		Employee();
		void setWorkTimeIn(DateTime d);
		void setWorkTimeOut(DateTime d);
		void setName(string n);
		int countLate();
		int colculatePay();
		void print();
};

#endif
