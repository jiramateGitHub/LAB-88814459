#ifndef ORDER_H
#define ORDER_H
#include "Product.h"
class Order
{
	private:
		string customer;
		Product items[10];
		int amount[10];
		int numOfItem;
	public:
		Order();
		void setCustomer();
		void add(Product p);
		int search(Product p);
		void print(Product p);
};

#endif
