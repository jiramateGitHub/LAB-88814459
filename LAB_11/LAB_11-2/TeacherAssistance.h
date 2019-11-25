#ifndef TEACHERASSISTANCE_H
#define TEACHERASSISTANCE_H

#include "Person.h"

class TeacherAssistance : public Person
{
	public:
		TeacherAssistance();
		TeacherAssistance(string f,string l,int h,int r);
		void setDate(Date d);
		void setValue(int h,int r);
		void print();
		int calculatePay();
		
	private:
		int hourWork;
		int rate;
};

#endif
