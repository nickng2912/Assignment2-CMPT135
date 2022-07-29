#include "square.h"
#include <iostream>
using namespace std; 

Square::Square()
	: Rectangle(), size(0)
{}
Square::Square(Point initialCenter, double initialSize)
	:Rectangle(initialCenter, initialSize, initialSize), size(initialSize)
{}

double Square::area()
{
	areaShape = size * size;
	return areaShape;
}
double Square::perimeter()
{
	perimeterShape = size * 4;
	return perimeterShape;
}

void Square::reflectX()
{
	Point temp = this->getCenterPoint();
	double tempX(temp.getX()), tempY(temp.getY());
	tempY = 0 - tempY;
	this->center.setPoint(tempX, tempY);

}
void Square::reflectY()
{
	Point temp = this->getCenterPoint();
	double tempX(temp.getX()), tempY(temp.getY());
	tempX = 0 - tempX;
	this->center.setPoint(tempX, tempY);

}
void Square::translate(double moveX, double moveY)
{
	Point temp = this->getCenterPoint();
	double tempX = temp.getX();
	double tempY = temp.getY();
	//set new point for the translation version 
	this->center.setPoint(moveX + tempX, moveY + tempY);
}

double Square::getSize() const
{
	return size; 
}
Point Square::getPoint() const
{
	return this->getCenterPoint();
}

void Square::setSize(double newSize)
{
	size = newSize;
}

void Square::display()
{
	Point temp = this->getPoint();
	cout << endl;
	cout << "Square: " << endl;
	cout << "\tCentre: " << "(" << temp.getX() << ", " << temp.getY() << ")" << endl;
	cout << "\tSide Length: " << size << endl; 
	cout << endl;
}

void Square::setLength(double newLength)
{
	size = newLength;
}
void Square::setWidth(double newWidth)
{
	size = newWidth;
}