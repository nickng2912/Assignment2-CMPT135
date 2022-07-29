#ifndef SHAPE_H
#define SHAPE_H
#include "point.h"

class Shape
{
public:
	Shape();
	Shape(Point initalCenter);

	virtual void calculateArea() = 0; 
	virtual void calculatePerimeter() = 0; 

	virtual void reflect(char axis) = 0; 
	virtual void translation(double moveX, double moveY) = 0; 

	double getArea() const; 
	double getPerimeter() const; 
	Point getCenterPoint() const; 

	void setCenterPoint(Point newCenter); 

	virtual void display() = 0; 

protected:
	Point center;
	double area;
	double perimeter;
};

#endif SHAPE_H