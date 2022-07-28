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

	virtual void reflect() = 0; 
	virtual void translation() = 0; 

	int getArea() const; 
	int getPerimeter() const; 
	Point getCenterPoint() const; 

	void setCenterPoint(Point newCenter); 

protected:
	Point center;
	int area; 
	int perimeter;
};

#endif SHAPE_H