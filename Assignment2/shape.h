#ifndef SHAPE_H
#define SHAPE_H
#include "point.h"

class Shape
{
public:
	Shape();
	Shape(Point initalCenter);

	virtual double area() = 0;
	virtual double perimeter() = 0;

	virtual void reflectX() = 0;
	virtual void reflectY() = 0;
	virtual void translate(double moveX, double moveY) = 0; 

	double getArea() const; 
	double getPerimeter() const; 
	Point getCenterPoint() const; 

	void setCenterPoint(Point newCenter); 

	virtual void display() = 0; 


protected:
	Point center;
	double areaShape;
	double perimeterShape;
};

#endif SHAPE_H