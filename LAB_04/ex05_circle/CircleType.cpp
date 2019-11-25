#include <iostream>
#include "CircleType.h"
using namespace std;
void CircleType::setRadius(double r){
	if(r >= 0){
		radius = r;
	}
	else{
		radius = 0;
	} 
};

double CircleType::getRadius(){
	return radius;
};
double CircleType::area(){
	return 3.14 * radius * radius;
};
double CircleType::circumference(){
	return 2 * 3.14 * radius;
};
