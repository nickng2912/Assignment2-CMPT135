#include "rectangle.h"
#include <iostream>
using namespace std; 

Rectangle::Rectangle() 
	:Shape(), length(0), width(0)
{}
Rectangle::Rectangle(Point initialCenter, double initialLength, double initialWidth)
	:Shape(initialCenter), length(initialLength), width(initialWidth)
{}

double Rectangle::area()
{
	areaShape = length * width; 
	return areaShape;
}
double Rectangle::perimeter()
{
	perimeterShape = (length + width) * 2;
	return perimeterShape;
}
void Rectangle::reflect(char axis)
{
	double reflectX(0), reflectY(0);

	if (axis == 'x' || axis == 'X')
	{
		//set new center point for the rectangle 
		reflectX = length;
		reflectY = 0 - width;
		this->center.setPoint(reflectX, reflectY);
	}
	else if (axis == 'y' || axis == 'Y')
	{
		//set new center point for the rectangle 
		reflectX = 0 - length;
		reflectY = width;
		this->center.setPoint(reflectX, reflectY);
	}
}

void Rectangle::translation(double moveX, double moveY)
{
	Point temp = this->getCenterPoint();
	double tempX = temp.getX();
	double tempY = temp.getY();
	//set new point for the translation version 
	this->center.setPoint(moveX + tempX, moveY + tempY);
}

double Rectangle::getLenght() const
{
	return length; 
}
double Rectangle::getWidth() const
{
	return width; 
}
Point Rectangle::getPoint() const
{
	return this->getCenterPoint(); 
}

void Rectangle::setLength(double newLength)
{
	length = newLength;
}
void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
}

void Rectangle::display()
{
	Point temp = this->getPoint();
	cout << "Rectangle: " << endl; 
	cout << "\tCentre: " << "(" << temp.getX() << ", " << temp.getY() << ")" << endl;
	cout << "\tLength: " << length << endl; 
	cout << "\tWidth: " << width << endl;
}
