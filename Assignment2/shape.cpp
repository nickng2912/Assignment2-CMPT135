#include "shape.h"
#include <iostream>
using namespace std; 

Shape::Shape()
	:center(), area(0), perimeter(0)
{}
Shape::Shape(Point initialCenter)
	:center(initialCenter), area(0), perimeter(0)
{}
int Shape::getArea() const
{
	return area; 
}
int Shape::getPerimeter() const
{
	return perimeter; 
}
Point Shape::getCenterPoint() const
{
	return center; 
}

void Shape::setCenterPoint(Point newCenter)
{
	center = newCenter;
}
