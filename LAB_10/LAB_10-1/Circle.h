#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "Action.h"
class Circle : public Shape, public Action
{
	public:
		Circle();
		Circle(double r);
		double area();
		double perimeter();
		void resize(int percent);
		double getRadius();
		void setRadius(double r);
	private:
		double radius;
};

#endif
