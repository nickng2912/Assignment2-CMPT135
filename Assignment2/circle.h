#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape
{
public:
	Circle();
	Circle(Point initialCenter, double initialRadius);

	double area(); 
	double perimeter(); 

	void reflectX();
	void reflectY();
	void translate(double moveX, double moveY);

	double getRadius() const; 
	Point getPoint() const; 

	void setRadius(double newRadius);
	
	void display();
private:
	double radius;
};

#endif CIRCLE_H