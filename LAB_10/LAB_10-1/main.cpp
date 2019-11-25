#include <iostream>
#include <iomanip>
#include "Shape.h"
#include "Action.h"
#include "Circle.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double r;
	int percent;
 	cout << "Input radius :";
	cin >> r;
 	cout << "Input percent :";
	cin >> percent;
	Shape *s = new Circle(r);
	cout << "==== Output ====" << endl;
 	cout << "Area : ";
	cout << fixed << setprecision(2) << s->area() << endl;
 	cout << "Perimeter : ";
 	cout << s->perimeter() << endl;
	((Circle*)s)->resize(percent);
	cout << "==== After Resize " << percent << " % ====" << endl;
	cout << "Area : ";
	cout << s->area() << endl;
	cout << "Perimeter : ";
 	cout << s->perimeter() << endl;
	return 0;
}
