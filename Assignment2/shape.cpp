#include "shape.h"
#include <iostream>
using namespace std; 

Shape::Shape()
	:center(), areaShape(0), perimeterShape(0)
{}
Shape::Shape(Point initialCenter)
	:center(initialCenter), areaShape(0), perimeterShape(0)
{}
double Shape::getArea() const
{
	return areaShape;
}
double Shape::getPerimeter() const
{
	return perimeterShape;
}
Point Shape::getCenterPoint() const
{
	return center; 
}

void Shape::setCenterPoint(Point newCenter)
{
	center = newCenter;
}
