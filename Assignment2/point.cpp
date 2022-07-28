#include "point.h";
#include <iostream>
using namespace std; 

Point::Point()
	:x(0), y(0)
{}
Point::Point(int initialX, int initialY)
	:x(initialX), y(initialY)
{}
int Point::getX()
{
	return x; 
}
int Point::getY()
{
	return y;
}
void Point::setPoint(int newX, int newY)
{
	x = newX;
	y = newY; 
}
