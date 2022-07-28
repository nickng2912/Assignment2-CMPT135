#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(Point initialCenter, int initialLength, int initialWidth);

	void calculateArea();
	void calculatePerimeter();

	void reflect(char axis); 
	void translation(int moveX, int moveY);

	int getLenght() const; 
	int getWidth() const;
	Point getPoint() const;

	void setLength(int newLength); 
	void setWidth(int newWidth); 

private:
	int length; 
	int width; 
};


#endif RECTANGLE_H