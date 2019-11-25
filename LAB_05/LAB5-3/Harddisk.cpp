#include "Harddisk.h"
		Harddisk::Harddisk(){
			brand = "";
			size = 0;
		};
		
		void Harddisk::setValue(string b,int s){
			brand = b;
			size = s;
		};
		
		string Harddisk::getBrand(){
			return brand;
		};
		
		int Harddisk::getSize(){
			return size;
		};
		
		
