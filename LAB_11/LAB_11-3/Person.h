#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class Person
{
	public:
		Person();
		void setValue(string f,string l);
		string getFristname();
		string getLastname();
		void print();
		void setBirthday(Date d);
		virtual int calculatePay();
		int getDay();
		int getMonth();
		int getYear();
	protected:
		string firstname;
		string lastname;
		Date birthday;
};

#endif
