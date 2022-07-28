#ifndef SHAPE_H
#define SHAPE_H
#include "point.h"

class Shape
{
public:
	virtual int calculateArea() = 0; 
	virtual int calculatePerimeter() = 0; 

	virtual void reflect() = 0; 
	virtual void translate() = 0; 

	int getLength() const; 
	int getWidth() const; 
	Point getCenterPoint() const; 

	void setLength(int newLength);
	void setWidth(int newWidth); 
	void setCenterPoint(Point newCenter); 

protected:
	Point center;
	int length; 
	int width;
};

#endif SHAPE_H