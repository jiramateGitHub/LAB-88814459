#include <iostream>
#include "Harddisk.h"
#include "Computer.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Harddisk hdd;
	Computer com;
	hdd.setValue("Seagate",500);
	com.setValue("Dell","optiplex 3020",hdd);
	com.print();
	return 0;
}
