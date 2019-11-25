#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
	protected:
		string fname;
		string lname;
	public:
		Person();
		void setName(string f,string l);
		string getFname();
		string getLname();
		void print();
};

#endif
