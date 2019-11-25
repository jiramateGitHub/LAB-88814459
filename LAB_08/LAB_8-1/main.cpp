#include <iostream>
#include <iomanip>
#include "Circle.h"
#include "Cylinder.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Circle cir;
	Cylinder cyl;
	
	cir.setRadian(5);
	cout << "Circle Area : " << cir.area() << endl;
	cout << "Circle Circumference : " << cir.circumference() << endl;
	
	cyl.setHigh(5);
	cyl.setRadian(5);
	cout << "Cylinder Area : " << cyl.area() << endl;
	cout << "Cylinder Volume : " << cyl.volume();
	return 0;
}
