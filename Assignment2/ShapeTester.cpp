#include <iostream>
#include "point.h"
#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "circle.h"
using namespace std; 

int main()
{
	int size = 5;

	Shape** shapes = new Shape * [size];

	Point* centre = new Point(5, 5);
	Rectangle* rectangle1 = new Rectangle(*centre, 4, 3);
	shapes[0] = rectangle1;

	shapes[1] = new Rectangle(*new Point(10, -10), 4, 4);

	Rectangle* rectangle3 = new Square(*new Point(-8.5, -10), 2.5);
	shapes[2] = rectangle3;

	Square* square2 = new Square(*new Point(-1, -1), 1.5);
	shapes[3] = square2;

	Circle* circle = new Circle(*new Point(100, 100), 25.4);
	shapes[4] = circle;

	cout << "\n11111111111111111111111111\n";

	for (int i = 0; i < size; ++i)
		shapes[i]->display();

	system("pause");
	return 0; 
}