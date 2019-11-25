#ifndef TEACHERASSISTANCE_H
#define TEACHERASSISTANCE_H

#include "Person.h"

class TeacherAssistance : public Person
{
	public:
		TeacherAssistance();
		TeacherAssistance(string f,string l,int h,int r);
		void setValue(int h,int r);
		int calculatePay();
		
	private:
		int hourWork;
		int rate;
};

#endif
