#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(Point initialCenter, double initialLength, double initialWidth);

	void calculateArea();
	void calculatePerimeter();

	void reflect(char axis); 
	void translation(double moveX, double moveY);

	double getLenght() const; 
	double getWidth() const;
	Point getPoint() const;

	void setLength(double newLength); 
	void setWidth(double newWidth); 
	
	void display();

private:
	double length; 
	double width; 
};


#endif RECTANGLE_H