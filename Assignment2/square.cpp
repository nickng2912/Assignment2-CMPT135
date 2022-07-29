#include "square.h"
#include <iostream>
using namespace std; 

Square::Square()
	: Rectangle(), size(0)
{}
Square::Square(Point initialCenter, double initialSize)
	:Rectangle(initialCenter, initialSize, initialSize), size(initialSize)
{}

void Square::calculateArea()
{
	area = size * size;
	cout << area << endl; 
}
void Square::calculatePerimeter()
{
	perimeter = size * 4;
	cout << perimeter << endl; 
}

void Square::reflect(char axis)
{
	double reflectX(0), reflectY(0);

	if (axis == 'x' || axis == 'X')
	{
		//set new center point for the square 
		reflectX = size;
		reflectY = 0 - size;
		this->center.setPoint(reflectX, reflectY);
	}
	else if (axis == 'y' || axis == 'Y')
	{
		//set new center point for the square
		reflectX = 0 - size;
		reflectY = size;
		this->center.setPoint(reflectX, reflectY);
	}
}
void Square::translation(double moveX, double moveY)
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
	cout << "Square: " << endl;
	cout << "\tCentre: " << "(" << temp.getX() << ", " << temp.getY() << ")" << endl;
	cout << "\tSide Length: " << size << endl; 
}