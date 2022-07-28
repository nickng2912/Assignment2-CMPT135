#include "shape.h"
#include <iostream>
using namespace std; 

int Shape::getLength() const
{
	return length; 
}
int Shape::getWidth() const
{
	return width; 
}
Point Shape::getCenterPoint() const
{
	return center; 
}

void Shape::setCenterPoint(Point newCenter)
{
	center = newCenter;
}
void Shape::setLength(int newLength)
{
	length = newLength;
}
void Shape::setWidth(int newWidth)
{
	width = newWidth; 
}