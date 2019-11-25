#include <iostream>
#include "Pig.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Pig  pignoiy;
	string n;
	double w;
	
	cout << "Input Name & Weight Pig : " ;
	cin >> n >> w;
	pignoiy.set_pig(n,w);
	cout << "===== print ====="<< endl;
	cout << "Name   : " << pignoiy.getName() << endl;
	cout << "Weight : " << pignoiy.getWeight() << endl;
	
	cout << endl;
	pignoiy.eat_food();
	cout << "Eat somthing" << endl;
	cout << "===== print ====="<< endl;
	pignoiy.print();
	cout << "================="<< endl;
	
	return 0;
}
