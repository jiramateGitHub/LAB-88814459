#ifndef TREE_H
#define TREE_H
#include <iostream>
#include <string>
using namespace std;
class Tree
{
	private:
		string name;
		string type;
		int price;
	public:
		Tree();
		void setValue(string n,string t,int p);
		string getName();
		string getType();
		int getPrice();
};

#endif
