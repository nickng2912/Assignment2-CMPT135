#include "circle.h"
#include <iostream> 
using namespace std; 

Circle::Circle()
	:Shape(), radius(0)
{}
Circle::Circle(Point initialCenter, double initialRadius)
	:Shape(initialCenter), radius(initialRadius)
{}

void Circle::calculateArea()
{
	double pi = 3.14159265359;
	area =  (radius * radius) * pi ;
}
void Circle::calculatePerimeter()
{
	double pi = 3.14159265359;
	perimeter = 2 * pi * radius ; 
}

void Circle::reflect(char axis)
{
	Point centerCircle = this->getCenterPoint();
	double reflectX(0), reflectY(0);

	if (axis == 'x' || axis == 'X')
	{
		//set new center point for the circle 
		reflectX = centerCircle.getX();
		reflectY = 0 - centerCircle.getY();
		this->center.setPoint(reflectX, reflectY);
	}
	else if (axis == 'y' || axis == 'Y')
	{
		//set new center point for the circle
		reflectX = 0 - centerCircle.getX();
		reflectY = centerCircle.getY();
		this->center.setPoint(reflectX, reflectY);
	}
}
void Circle::translation(double moveX, double moveY)
{
	Point temp = this->getCenterPoint();
	double tempX = temp.getX();
	double tempY = temp.getY();
	//set new point for the translation version 
	this->center.setPoint(moveX + tempX, moveY + tempY);
}

double Circle::getRadius() const
{
	return radius;
}
Point Circle::getPoint() const
{
	return this->getCenterPoint(); 
}

void Circle::setRadius(double newRadius)
{
	radius = newRadius;
}

void Circle::display()
{
	Point temp = this->getPoint();
	cout << "Circle: " << endl;
	cout << "\tCentre: " << "(" << temp.getX() << ", " << temp.getY() << ")" << endl;
	cout << "\tRadius: " << radius << endl; 
}
