#include "Circle.h"

Circle::Circle()
{
	radian = 0;
}

double Circle::area(){
	return 3.14 * radian * radian;
}

double Circle::circumference(){
	return 2 * 3.14 * radian;
}

void Circle::setRadian(double r){
	radian = r;
}
