#include <iostream>
#include "Date.h"
#include "Person.h"
#include "TeacherAssistance.h"
#include "Teacher.h"
#include "Student.h"
#include "Course.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// (2)
	Person *ps1;
	Person *ps2;
	Date dt;
	
	dt.setDate(15,2,1992);
	ps1 = new TeacherAssistance("Mary","Jane",20,35);
	ps1->setBirthday(dt);
	ps1->print();
	cout << "Pay      : " << ps1->calculatePay();
	cout << "\n________________________________________\n" << endl;
	
	dt.setDate(20,8,1982);
	ps2 = new Teacher("Ryan","Gig",18000);
	ps2->setBirthday(dt);
	ps2->print();
	cout << "Pay      : " << ps2->calculatePay();
	cout << "\n________________________________________\n" << endl;
	
	int pay = ps1->calculatePay() + ps2->calculatePay();
	cout << "[a] Pay (Teacher + TA) : " << pay << endl << endl ;
	
	cout << "[b] Old (Teacher & TA) : " ;
	int d,m,y;
	int day=0;
	for(int i=0;i<99999;i++){
		if(ps2->getYear() <= ps1->getYear()){
			if(i==0){
				d = ps2->getDay();
				m = ps2->getMonth();
				y = ps2->getYear();
			}
			
			d++;
			day++;                       
			if(d > 30){
				m++;
				d = 1;
				if(m > 12){
					m =1 ;
					y++;
				}
			}
			
			if(y == ps1->getYear()){
				if(m == ps1->getMonth()){
					if(d == ps1->getDay()){
						break;
					}
				}
			}			
		}else{
			if(i==0){
				d = ps1->getDay();
				m = ps1->getMonth();
				y = ps1->getYear();
			}
			d++;
			day++;                       
			if(d > 30){
				m++;
				d = 1;
				if(m > 12){
					m =1 ;
					y++;
				}
			}
			
			if(y == ps2->getYear()){
				if(m == ps2->getMonth()){
					if(d == ps2->getDay()){
						break;
					}
				}
			}
		}	
	} //for
		
	cout << "Year: " << (day/360) << " | " << "Month: " << (day/30)%12<< " | " << "Day: "<< day%30 << endl;
	
	delete ps1;
	delete ps2;
	return 0;
}
