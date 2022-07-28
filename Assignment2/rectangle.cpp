#include "rectangle.h"
#include <iostream>
using namespace std; 

Rectangle::Rectangle() 
	:Shape(), length(0), width(0)
{}
Rectangle::Rectangle(Point initialCenter, int initialLength, int initialWidth)
	:Shape(initialCenter), length(initialLength), width(initialWidth)
{}

void Rectangle::calculateArea()
{
	area = length * width; 
	cout << area << endl; 
}
void Rectangle::calculatePerimeter()
{
	perimeter = (length + width) * 2;
	cout << perimeter; 
}
void Rectangle::reflect(char axis)
{
	int reflectX(0), reflectY(0);

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

void Rectangle::translation(int moveX, int moveY)
{
	//set new point for the translation version 
	this->center.setPoint(moveX, moveY);
}

int Rectangle::getLenght() const
{
	return length; 
}
int Rectangle::getWidth() const
{
	return width; 
}
Point Rectangle::getPoint() const
{
	return this->getCenterPoint(); 
}

void Rectangle::setLength(int newLength)
{
	length = newLength;
}
void Rectangle::setWidth(int newWidth)
{
	width = newWidth;
}
