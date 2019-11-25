#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
	public:
		Person();
		void setName(string f,string l);
		string getFname();
		string getLname();
	protected:
		string fname;
		string lname;
};

#endif
