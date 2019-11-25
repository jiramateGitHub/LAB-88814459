#ifndef HOUSE_H
#define HOUSE_H
#include "Tree.h"
#include <iostream>
#include <string>
using namespace std;
class House
{
	private:
		string houseNo;
		string province;
		Tree t;
	public:
		House();
		void setValue(string h,string p);
		void add(Tree tt);
		void print();
		int checkType(string s);
		int getPrice();
		string getHouseNo();
		string getProvince();
};

#endif
