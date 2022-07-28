#ifndef POINT_H
#define POINT_H

class Point
{
public:
	Point();
	Point(int initialX, int initialY);

	int getX();
	int getY();

	void setPoint(int newX, int newY);
private:
	int x; 
	int y;
};

#endif POINT_H
