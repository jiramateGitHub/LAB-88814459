#include "SaleMan.h"

SaleMan::SaleMan()
{
	firstname = "";
	lastname = "";
	saleAmount = 0;
}

SaleMan::SaleMan(string first,string last,int s,int amount){
	firstname = first;
	lastname = last;
	salary = s;
	saleAmount = amount;
}

int SaleMan::calculate(){
	return salary = salary + ((saleAmount*5)/100);
}

void SaleMan::print(){
	calculate();
	cout << firstname << " " << lastname << " " << salary << endl;
}
