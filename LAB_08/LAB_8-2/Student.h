#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
class Student : protected Person
{
	private:
		int id;
	public:
		Student();
		void setName(string f,string l);
		void setId(int i);
		int getId();
		void print();
		bool checkEqual(Student otherStudent);
		
};

#endif
