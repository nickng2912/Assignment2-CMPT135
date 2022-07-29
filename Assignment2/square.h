#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"

class Square : public Rectangle
{
public:
	Square();
	Square(Point initialCenter, double initialSize);

	double area(); 
	double perimeter(); 

	void reflectX();
	void reflectY();
	void translate(double moveX, double moveY);

	double getSize() const; 
	Point getPoint() const; 

	void setSize(double newSize); 

	void display(); 

	void setLength(double);
	void setWidth(double);

private:
	double size;
};

#endif SQUARE_H
