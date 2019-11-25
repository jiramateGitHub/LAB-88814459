#include <iostream>
#include "DateTime.h"
#include "Employee.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Employee emp;
	DateTime dt;
	string nameEmp;
	int numOfwork;
	cout << "Input employee name: ";
	cin >> nameEmp;
	emp.setName(nameEmp);
	cout << "Input number of working date :";
	cin >> numOfwork;
	int dd,mm,yy,h,m;
	for(int i;i<numOfwork;i++){
		cout << "Input Date and Time start working [" << i+1 << "] : ";
		cin >> dd >> mm >> yy >> h >> m;
		dt.setData(dd,mm,yy);
		dt.setTime(h,m);	
		emp.setWorkTimeIn(dt);
		cout << "Input Date and Time end working [" << i+1 << "]   : ";
		cin >> dd >> mm >> yy >> h >> m;
		dt.setData(dd,mm,yy);
		dt.setTime(h,m);	
		emp.setWorkTimeOut(dt);
		emp.countLate();
		emp.colculatePay();
	}
	emp.print();
	return 0;
}
