#include <iostream>
#include <string>
#include "Person.h"
#include "Nurse.h"
#include "Room.h"
#include "Bill.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Nurse ns;
	Room rm;
	Bill *b;
	b = new Bill;
	ns.setName("Jiramate","Phuaphan");
	ns.setDailyFee(500);
	rm.setDetail("single bedroom");
	rm.setRoom(001,1000);
	b->setDay(7);
	b->setNurse(ns);
	b->setRoom(rm);
	b->print();
	delete b;
	return 0;
}
