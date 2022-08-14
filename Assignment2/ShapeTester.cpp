#include <iostream>
#include "point.h"
#include "shape.h"
#include "rectangle.h"
#include "square.h"
#include "circle.h"
using namespace std; 
//
//int main()
//{
//	int size = 5;
//
//	Shape** shapes = new Shape * [size];
//
//	Point* centre = new Point(5, 5);
//	Rectangle* rectangle1 = new Rectangle(*centre, 4, 3);
//	shapes[0] = rectangle1;
//
//	shapes[1] = new Rectangle(*new Point(10, -10), 4, 4);
//
//	Rectangle* rectangle3 = new Square(*new Point(-8.5, -10), 2.5);
//	shapes[2] = rectangle3;
//
//	Square* square2 = new Square(*new Point(-1, -1), 1.5);
//	shapes[3] = square2;
//
//	Circle* circle = new Circle(*new Point(100, 100), 25.4);
//	shapes[4] = circle;
//
//	cout << "\n11111111111111111111111111\n";
//
//	for (int i = 0; i < size; ++i)
//		shapes[i]->display();
//
//	cout << "\n22222222222222222222222222\n";
//
//	cout << "\nthe area of the first rectangle is: ";
//	cout << rectangle1->area() << endl;
//
//	cout << "It is a square, the area is: ";
//	Square* square = dynamic_cast<Square*> (rectangle3);
//	cout << square->area() << endl;
//
//	cout << "the perimeter of the circle is: ";
//	cout << circle->perimeter() << endl;
//
//	cout << "\n33333333333333333333333333\n";
//
//	cout << "\nThe four vertices of the first rectangle are: (clockwise from top-left)\n";
//	rectangle1->printFourVertices();
//
//	cout << "\nThe four vertices of the third rectangle are:\n";
//	rectangle3->printFourVertices();
//
//	cout << "\n44444444444444444444444444\n";
//
//	rectangle1->reflectX();
//
//	shapes[2]->translate(1.5, 3);
//
//	shapes[4]->translate(-100, -100);
//
//	cout << "\nAfter reflection and translation, here are the moved shapes:\n";
//	for (int i = 0; i < size; ++i)
//		shapes[i]->display();
//
//	cout << "\n55555555555555555555555555\n";
//
//	cout << "\nNow, the four vertices of the first rectangle are:\n";
//	rectangle1->printFourVertices();
//
//	cout << "\nNow, the four vertices of the third rectangle are:\n";
//	rectangle3->printFourVertices();
//
//	cout << "\n66666666666666666666666666\n\n";
//
//	for (int i = 0; i < size; ++i)
//		cout << shapes[i]->area() << endl;
//
//	// From the following statements, understand how setLength() and setWidth()
//	// work for rectangles and squares.
//
//	cout << "\n777777777777777777777777777\n";
//
//	shapes[1]->display();
//	dynamic_cast<Rectangle*> (shapes[1])->setLength(8.2);
//	cout << "\nAfter setLength(8.2), the rectangle is: ";
//	shapes[1]->display();
//	dynamic_cast<Rectangle*> (shapes[1])->setWidth(5);
//	cout << "\nAfter setWidth(5), the rectangle is: ";
//	shapes[1]->display();
//
//	square2->display();
//	square2->setLength(8.2);
//	cout << "\nAfter setLength(8.2), the rectangle is: ";
//	square2->display();
//	square2->setWidth(5);
//	cout << "\nAfter setWidth(5), the rectangle is: ";
//	square2->display();
//
//	system("pause");
//	return 0;
//}


//testing code 2 and the output is correct 
//int main()
//{
//	Rectangle* rectangle = new Square(*new Point(0, 0), 15);
//	rectangle->display();
//	rectangle->setLength(12.3);
//	cout << "\nAfter setLength(12.3), the rectangle area is: ";
//	cout << rectangle->area() << endl;
//
//	rectangle->setWidth(111.11);
//	cout << "\nAfter setWidth(111.11), the rectangle is: ";
//	rectangle->display();
//	cout << "The area is " << rectangle->area() << endl;
//	cout << endl;
//
//	system("pause");
//	return 0;
//}