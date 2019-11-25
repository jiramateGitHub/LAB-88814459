#ifndef HARDDISK_H
#define HARDDISK_H
#include <iostream>
#include <string>
using namespace std;
class Harddisk
{
	public:
		Harddisk();
		void setValue(string b,int s);
		string getBrand();
		int getSize();
	private:
		string brand;
		int size;
};

#endif
