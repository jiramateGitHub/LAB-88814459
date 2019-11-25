#include <iostream>
#include <string>
#include "SaleMan.h"
#include "Manager.h"
#include "Employee.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Employee *em;
	int s,c,a;
	string f,l,type;
	cin >> type;
	if(type == "G"){
		cin >> f >> l >> s;
		em = new Employee;
		em->setValue(f,l,s); 
	}else if(type == "M"){
		cin >> f >> l >> s >> c;
		em = new Manager(f,l,s,c);
	}else if(type == "S"){
		cin >> f >> l >> s >> a ;
		em = new SaleMan(f,l,s,a);
	}
	em->print();
	delete em;
	return 0;
}
