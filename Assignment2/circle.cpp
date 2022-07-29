#include "circle.h"
#include <iostream> 
using namespace std; 

Circle::Circle()
	:Shape(), radius(0)
{}
Circle::Circle(Point initialCenter, double initialRadius)
	:Shape(initialCenter), radius(initialRadius)
{}

double Circle::area()
{
	double pi = 3.14;
	areaShape =  (radius * radius) * pi ;
	return areaShape;
}
double Circle::perimeter()
{
	double pi = 3.14;
	perimeterShape = 2 * pi * radius ;
	return perimeterShape;
}

void Circle::reflectX()
{
	Point temp = this->getCenterPoint();
	double tempX(temp.getX()), tempY(temp.getY());
	tempY = 0 - tempY;
	this->center.setPoint(tempX, tempY);

}
void Circle::reflectY()
{
	Point temp = this->getCenterPoint();
	double tempX(temp.getX()), tempY(temp.getY());
	tempX = 0 - tempX;
	this->center.setPoint(tempX, tempY);

}

void Circle::translate(double moveX, double moveY)
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
	cout << endl;
	cout << "Circle: " << endl;
	cout << "\tCentre: " << "(" << temp.getX() << ", " << temp.getY() << ")" << endl;
	cout << "\tRadius: " << radius << endl; 
	cout << endl;
}
