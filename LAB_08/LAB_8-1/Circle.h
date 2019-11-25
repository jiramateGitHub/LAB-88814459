#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;
class Circle 
{
	public:
		Circle();
		double area();
		double circumference();
		void setRadian(double r);
	protected:
		double radian;
};

#endif
