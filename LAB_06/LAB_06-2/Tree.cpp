#include "Tree.h"

Tree::Tree()
{
	name = "";
	type = "";
	price = 0;
}

void Tree::setValue(string nt,string tt,int pt){
	name = nt;
	type = tt;
	price = pt;
}

string Tree::getName(){
	return name;
}

string Tree::getType(){
	return type;
}

int Tree::getPrice(){
	return price;
}
