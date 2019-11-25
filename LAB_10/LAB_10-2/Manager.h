#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;
class Manager : public Employee
{
	public:
		Manager();
		Manager(string first,string last,int s,int c);
		int calculate();
		void print();
	private:
		int cashPosition;
};

#endif

