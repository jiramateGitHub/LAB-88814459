//******************************
// <Jiramate Phuaphan>
//******************************
#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;
double distance(double x1, double y1, double x2, double y2);
double radius(double x1, double y1, double x2, double y2);
double circumference(double radius2);
double area(double radius2);
int main(){
	double x1, y1, x2, y2;
	double distance2,radius2,circumference2,area2;
	cout << "Input x1, y1, x2, y2 : ";
	cin >> x1 >> y1 >> x2 >> y2 ;
	distance2 = distance(x1,y1,x2,y2);
	radius2 = radius(x1,y1,x2,y2);
	circumference2 = circumference(radius2);
	area2 = area(radius2);
	cout << "Distance is " << distance2 << endl;
	cout << "Radius is " << radius2 << endl;
	cout << "Circumference is " << circumference2 << endl;
	cout << "Area is " << area2 << endl;
}

double distance(double x1, double y1, double x2, double y2){
	return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

double radius(double x1, double y1, double x2, double y2){
	return distance(x1,y1,x2,y2);
}

double circumference(double radius2){
	return 2 * PI * radius2;
}

double area(double radius2){
	return PI * pow(radius2,2);
}
