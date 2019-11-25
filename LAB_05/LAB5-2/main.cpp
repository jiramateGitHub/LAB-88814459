#include <iostream>
#include "Pig.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Pig  pignoiy[5];
	int i;
	string n;
	double w;
	for(i=0;i<5;i++){
		cout << "Input Pig Name   [" << i+1 << "] :";
		cin >> n;
		cout << "Input Pig Wegiht [" << i+1 << "] :";
		cin >> w;
		pignoiy[i].set_pig(n,w);
		
	}
	cout << endl;
	for(i=0;i<5;i++){
		cout << "===== print [" << i+1 << "] ====="<< endl;
		cout << "Name   : " << pignoiy[i].getName() << endl;
		cout << "Weight : " << pignoiy[i].getWeight() << endl;
	}
	cout << endl;
	//---------------------------------------------------------------
	double sum=0,avg,max,min;
	string nameMax,nameMin;
	for(i=0;i<5;i++){
		sum = sum + pignoiy[i].getWeight();	
	}
	avg = sum/5;
	max = pignoiy[0].getWeight();
	for(i=0;i<5;i++){
		if(max >= pignoiy[i].getWeight()){
			min = pignoiy[i].getWeight();
			nameMin = pignoiy[i].getName();
		}else{
			max = pignoiy[i].getWeight();
			nameMax = pignoiy[i].getName();
		}
	}
	cout << endl;
	cout << "Thin pig : " << nameMin << "  weight " << min << " kg" << endl;
	cout << "Big pig : " << nameMax << "  weight " << max << " kg" << endl;
	cout << "Average wegiht : " << avg;
	return 0;
}
