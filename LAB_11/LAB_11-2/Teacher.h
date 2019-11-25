#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher : public Person
{
	public:
		Teacher();
		Teacher(string f,string l,int s);
		void setValue(string f,string l,int s);
		int calculatePay();
	private:
		int salary;
};

#endif
