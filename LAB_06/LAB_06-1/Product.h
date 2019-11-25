#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include<string>
using namespace std;
class Product
{
	private:
		string productId;
		string name;
		double price;
	public:
		Product();
		void setValue(string id,string n,double p);
		void setValue2(string id,string n);
		double getPrice();
		string getName();
};

#endif
