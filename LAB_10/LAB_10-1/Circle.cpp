#include "Circle.h"

Circle::Circle(){
	radius = 0;
}

Circle::Circle(double r){
	radius = r;
}

double Circle::area(){
	return 3.14 * radius * radius;;
}

double Circle::perimeter(){
	return 2.00 * 3.14 * radius;
}

void Circle::resize(int percent){
	radius = (radius * percent) / 100.00 ;
}

double Circle::getRadius(){
	return radius;
}

void Circle::setRadius(double r){
	radius = r;
}
		 
