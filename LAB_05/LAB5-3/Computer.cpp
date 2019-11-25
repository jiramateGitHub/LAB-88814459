#include "Computer.h"
		Computer::Computer(){
			brand = "";
			model = "";
		};
		void Computer::setValue(string b,string m,Harddisk h) {
			brand = b;
			model = m;
			hdd = h;
		};
		
		void Computer::print(){
			cout << "==== Computer ====" << endl;
			cout << "Brand : " << brand << endl;
			cout << "Model : " << model << endl;
			cout << "Harddisk : " << hdd.getBrand() << " size " << hdd.getSize() << "GB"<< endl;
			cout << "==================" << endl;
		}; 
