#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;
class Employee
{
	public:
		Employee();
		Employee(string first,string last,int s);
		void setValue(string first,string last,int s);
		virtual int calculate();
		virtual void print();
	protected:
		string firstname;
		string lastname;
		int salary;
};

#endif
