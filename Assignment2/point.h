#ifndef POINT_H
#define POINT_H

class Point
{
public:
	Point();
	Point(double initialX, double initialY);

	double getX() const;
	double getY() const;

	void setPoint(double newX, double newY);
private:
	double x; 
	double y;
};

#endif POINT_H
