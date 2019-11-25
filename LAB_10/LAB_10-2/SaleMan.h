#ifndef SALEMAN_H
#define SALEMAN_H
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;
class SaleMan : public Employee
{
	public:
		SaleMan();
		SaleMan(string first,string last,int s,int amount);
		int calculate();
		void print();
	private:
		int saleAmount;
};

#endif
