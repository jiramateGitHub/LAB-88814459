#ifndef _SHAPE_H
#define _SHAPE_H
class Shape {
	public:
		Shape();
		virtual double area() = 0;
		virtual double perimeter() = 0;
		~Shape();
};
#endif //_SHAPE_H
