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

	void reflect(char axis);
	void translation(double moveX, double moveY);

	double getSize() const; 
	Point getPoint() const; 

	void setSize(double newSize); 

	void display(); 

private:
	double size;
};

#endif SQUARE_H
