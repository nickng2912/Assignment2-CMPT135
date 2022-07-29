#include "point.h"
#include <iostream>
using namespace std; 

Point::Point()
	:x(0), y(0)
{}
Point::Point(double initialX, double initialY)
	:x(initialX), y(initialY)
{}
double Point::getX() const
{
	return x; 
}
double Point::getY() const
{
	return y;
}
void Point::setPoint(double newX, double newY)
{
	x = newX;
	y = newY; 
}
