#include "Product.h"

Product::Product()
{
	productId = "";
	name = "";
	price = 0;
}

void Product::setValue(string id,string n,double p){
	productId = id;
	name = n;
	price = p;
}

void Product::setValue2(string id,string n){
	productId = id;
	name = n;
}

double Product::getPrice(){
	return price;
}

string Product::getName(){
	return name;
}
