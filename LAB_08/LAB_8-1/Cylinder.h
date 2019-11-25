#include "Circle.h"
#ifndef CYLINDER_H
#define CYLINDER_H
#include <iostream>
using namespace std;
class Cylinder : public Circle
{
	public:
		Cylinder();
		double area();
		double volume();
		void setHigh(double h);
	protected:
		double high;
};

#endif
