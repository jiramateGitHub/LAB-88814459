#include <iostream>
#include "Product.h"
#include "Order.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Product Pd;\
	Order Od;
	Od.setCustomer();
	int numOfItem;
	cout << "Input number of product : ";
	cin >> numOfItem;
	/////////////////////////////////////////////////////////////////////////////
	string addid;
	string addn;
	double addp;
	for(int i=0;i<numOfItem;i++){
		cout << "==== Product [" << i+1 << "] ====" << endl;
		cout <<"Input product Id : ";
		cin >> addid;
		cout <<"Input product name : ";
		cin >> addn;
		if(i>0){
			Pd.setValue2(addid,addn);
			//cout << "setValue2 : Complete." << endl;
		}
		if(i==0){
			cout <<"Input product price : ";
			cin >> addp;
			Pd.setValue(addid,addn,addp);
			Od.add(Pd);
			//cout << "setValue1 : Complete." << endl;
		}
		if(i>0){
			int pos = Od.search(Pd);
			if(pos == -1){
			cout <<"Input product price :";
			cin >> addp;
			Pd.setValue(addid,addn,addp);
			Od.add(Pd);
			//cout << "setValue3 : Complete." << endl;
			}
		}
	}
	Od.print(Pd);
	return 0;
}
