#include <iostream>
#include "House.h"
#include "Tree.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Tree T; //Object
	int valueHouse = 0;
	string house,province;
	string nameT,typeT;
	int priceT;
	cout << "Input number of house : ";
	cin >> valueHouse;
	House H[valueHouse]; //Object
	for(int i=0;i<valueHouse;i++){
		cout << "==== House [" << i+1 << "] ====" << endl;
		cout << "Input house no : ";
		cin >> house;
		cout << "Input province : ";
		cin >> province;
		cout << "input tree name : ";
		cin >> nameT;
		cout << "input tree type : ";
		cin >> typeT;
		cout << "input price : ";
		cin >> priceT;
		T.setValue(nameT,typeT,priceT);
		H[i].setValue(house,province);
		H[i].add(T);
	}
	string searchType;
	int total = 0;
	cout << "====================" << endl;
	cout << "Try to search" << endl << "input tree type : ";
	cin >> searchType;
	cout << "===== Output ======" << endl;
	for(int i=0;i<valueHouse;i++){
		if(H[i].checkType(searchType) == 1){
			H[i].print();
			total += H[i].getPrice();
		}
	}
	cout << "Total price : " << total << endl;
	return 0;
}
