#include "Cylinder.h"

Cylinder::Cylinder()
{
	high = 0;
}

double Cylinder::area(){
	return 2 * (3.14 * radian * radian);
}

double Cylinder::volume(){
	return (3.14 * radian * radian) * high;
}

void Cylinder::setHigh(double h){
	high = h;
}
