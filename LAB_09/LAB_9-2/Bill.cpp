#include "Bill.h"

Bill::Bill()
{
	day = 0;
}

void Bill::setDay(int d){
	day = d;
}

void Bill::setRoom(Room r){
	rm = r;
}

void Bill::setNurse(Nurse n){
	ns = n;
}

void Bill::print(){
	double totalNurse = ns.getDailyFree()*day;
	double totalRoom = rm.getRoomFee()*day;
	cout << "-=============== BILL ===============-" << endl;
	cout << "Detail : " <<  rm.getDetail() << endl;
	cout << "Amount Day : " << day << endl;
	cout << "Nurse : " << ns.getFname() << " " << ns.getLname() << endl;
	cout << "Wages per day : " << ns.getDailyFree() << "\t Total wages : " 
		 << ns.getDailyFree()*day << endl;
	cout << "Room NO : " << rm.getRoomNo() << "\t Room Fee : " 
		 << rm.getRoomFee() << "\t Total Room Fee : " << rm.getRoomFee()*day << endl;
	cout << "Tatal Pay : " << totalNurse + totalRoom << endl;
}
