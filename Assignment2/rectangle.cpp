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
void Rectangle::reflectX()
{
	Point temp = this->getCenterPoint();
	double tempX(temp.getX()), tempY(temp.getY());
	tempY = 0 - tempY; 
	this->center.setPoint(tempX, tempY); 

}
void Rectangle::reflectY()
{
	Point temp = this->getCenterPoint();
	double tempX(temp.getX()), tempY(temp.getY());
	tempX = 0 - tempX;
	this->center.setPoint(tempX, tempY);

}

void Rectangle::translate(double moveX, double moveY)
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
	cout << endl;
	cout << "Rectangle: " << endl; 
	cout << "\tCentre: " << "(" << temp.getX() << ", " << temp.getY() << ")" << endl;
	cout << "\tLength: " << length << endl; 
	cout << "\tWidth: " << width << endl;
	cout << endl;
}
void Rectangle::printFourVertices()
{
	double x1, x2, y1, y2; 
	Point temp = this->getPoint();
	x1 = temp.getX() - (length / 2);
	x2 = temp.getX() + (length / 2);
	y1 = temp.getY() + (width / 2);
	y2 = temp.getY() - (width / 2);

	cout << "(" << x1 << ", " << y1 << ")" << endl;
	cout << "(" << x2 << ", " << y1 << ")" << endl;
	cout << "(" << x2 << ", " << y2 << ")" << endl;
	cout << "(" << x1 << ", " << y2 << ")" << endl;
}
