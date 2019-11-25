#include "Order.h"

Order::Order()
{
	customer = "";
	numOfItem = 0;
	for(int i=0;i<10;i++){
		amount[i] = 0;
	}
}

void Order::add(Product p){
	items[numOfItem] = p;
	amount[numOfItem] = 1;
	numOfItem++;
	
}

int Order::search(Product p){
	int pos = -1;
	for(int i=0;i<numOfItem;i++){
		if(p.getName() != items[i].getName()){
			//cout << "Not Complete : " << i << endl;
		}else{
			//cout << "+ Complete : " << i << endl;
			amount[i] += 1;
			pos = i;
			break;
		}
	}
	return pos;
}

void Order::print(Product p){
	int total[numOfItem];
	int totalPrice = 0;
	cout << "==== Output ====" << endl;
	cout << "Customer : " << customer << endl;
	cout << "Product\tPrice\tAmount\tTotal" << endl;
	for(int i=0;i<numOfItem;i++){
			cout << items[i].getName() << "\t" ;
			cout << items[i].getPrice()<< "\t" ;
			cout << amount[i] << "\t" ;
			total[i] = items[i].getPrice() * amount[i];
			cout << total[i] << "\t" << endl;
	}
	for(int i=0;i<numOfItem;i++){
		totalPrice += total[i];
	}
	cout << "Total Price : " << totalPrice << endl;
	cout << "================" << endl;
}


void Order::setCustomer(){
	string names;
	cout << "Input customer name : ";
	cin >> names;
	customer = names;
}

