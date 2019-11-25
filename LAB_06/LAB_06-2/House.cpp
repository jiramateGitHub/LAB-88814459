#include "House.h"

House::House()
{
	houseNo = "";
	province = "";
}

void House::setValue(string h,string p){
	houseNo = h;
	province = p;
}

void House::add(Tree tt){
	t = tt;
}

int House::checkType(string s){
	int pos = -1;
    if(s == t.getType()){
        pos = 1;
    }
    return pos;
}

void House::print(){
	cout << houseNo << " " << province << " " << t.getName() << endl;
}

int House::getPrice(){
	return t.getPrice();
}

string House::getHouseNo(){
	return houseNo;	
}

string House::getProvince(){
	return province;
}


