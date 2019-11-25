#ifndef COMPUTER_H
#define COMPUTER_H
#include "Harddisk.h"
class Computer
{
	public:
		Computer();
		void setValue(string b,string m,Harddisk hdd) ;
		void print();
	private:
		string brand;
		string model;
		Harddisk hdd;
};

#endif
