/*
 *  graphicsWorld.cpp
 *  ENSF 614 Lab 5 Exercise A & B
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */

#include <iostream>
using namespace std;

#include "graphicsWorld.h"
#include "Point.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "CurveCut.h"

void GraphicsWorld::run() {
#if 1 // Change 0 to 1 to test Point
	Point m(6, 8);
	Point n(6, 8);
	n.setx(9);
	cout << "\nExpected to display the distance between m and n is: 3";
	cout << "\nThe distance between m and n is: " << m.distance(n);
	cout << "\nExpected second version of the distance function also print: 3";
	cout << "\nThe distance between m and n is again: "
		<< Point::distance(m, n);
#endif // end of block to test Point

#if 1 // Change 0 to 1 to test Square
	cout << "\n\nTesting Functions in class Square:" << endl;
	Square s(5.0, 7.0, 12.0, "SQUARE - S");
	s.display();
#endif // end of block to test Square

#if 1 // Change 0 to 1 to test Rectangle
	cout << "\nTesting Functions in class Rectangle:" << endl;
	Rectangle a(5, 7, 12, 15, "RECTANGLE A");
	a.display();
	Rectangle b(16, 7, 8, 9, "RECTANGLE B");
	b.display();
	double d = a.distance(b);
	cout << "\nDistance between square a, and b is: " << d << endl;
	Rectangle rec1 = a;
	rec1.display();
	cout << "\nTesting assignment operator in class Rectangle:" << endl;
	Rectangle rec2(3, 4, 11, 7, "RECTANGLE rec2");
	rec2.display();
	rec2 = a;
	a.set_side_b(200);
	a.set_side_a(100);
	cout << "\nExpected to display the following values for objec rec2: " << endl;
	cout << "Rectangle Name: RECTANGLE A\n" << "X-coordinate: 5\n" << "Y-coordinate: 7\n"
		<< "Side a: 12\n" << "Side b: 15\n" << "Area: 180\n" << "Perimeter: 54\n";
	cout << "\nIf it doesn't there is a problem with your assignment operator.\n" << endl;
	rec2.display();
	
	cout << "\nTesting copy constructor in class Rectangle:" << endl;
	Rectangle rec3(a);
	rec3.display();
	a.set_side_b(300);
	a.set_side_a(400);
	cout << "\nExpected to display the following values for objec rec2: " << endl;
	cout << "Rectangle Name: RECTANGLE A\n" << "X-coordinate: 5\n" << "Y-coordinate: 7\n"
		<< "Side a: 100\n" << "Side b: 200\n" << "Area: 20000\n" << "Perimeter: 600\n";
	cout << "\nIf it doesn't there is a problem with your assignment operator.\n" << endl;
	rec3.display(); 

#endif // end of block to test Rectangle

#if 1 // Change 0 to 1 to test using array of pointer and polymorphism
	cout << "\nTesting array of pointers and polymorphism:" << endl;
	Shape* sh_new[4];
	sh_new[0] = &s;
	sh_new[1] = &b;
	sh_new[2] = &rec1;
	sh_new[3] = &rec3;
	sh_new[0]->display();
	sh_new[1]->display();
	sh_new[2]->display();
	sh_new[3]->display();
#endif // end of block to test array of pointer and polymorphism

	// ------------------ END OF EXERCISE A ----------------------

#if 1 // Change 0 to 1 to test Circle 
	cout << "\n----------- Start of Exercise B --------------" << endl; 
	cout << "\nTesting Functions in class Circle:" << endl;
	Circle c(3, 5, 9, "CIRCLE C");
	c.display();
	cout << "the area of " << c.getName() << " is: " << c.area() << endl;
	cout << "the perimeter of " << c.getName() << " is: " << c.perimeter() << endl;
	d = a.distance(c);
	cout << "\nThe distance between rectangle a and circle c is: " << d;
#endif

#if 1 // Change 0 to 1 to test circle cut or whatever 
	CurveCut rc(6, 5, 10, 12, 9, "CurveCut rc");
	rc.display();
	cout << "the area of " << rc.getName() << " is: " << rc.area() << endl;
	cout << "the perimeter of " << rc.getName() << " is: " << rc.perimeter() << endl;
	d = rc.distance(c);
	cout << "\nThe distance between rc and c is: " << d << endl;
	// Using array of Shape pointers:
	Shape* sh[4];
	sh[0] = &s;
	sh[1] = &a;
	sh[2] = &c;
	sh[3] = &rc;
	sh[0]->display();
	cout << "\nthe area of " << sh[0]->getName() << "is: " << sh[0]->area() << endl;
	cout << "\nthe perimeter of " << sh[0]->getName() << " is: " << sh[0]->perimeter() << endl;
	sh[1]->display();
	cout << "\nthe area of " << sh[1]->getName() << "is: " << sh[1]->area() << endl;
	cout << "\nthe perimeter of " << sh[0]->getName() << " is: " << sh[1]->perimeter() << endl;
	sh[2]->display();
	cout << "\nthe area of " << sh[2]->getName() << "is: " << sh[2]->area() << endl;
	cout << "\nthe circumference of " << sh[2]->getName() << " is: " << sh[2]->perimeter() << endl; 
	sh[3]->display();
	cout << "\nthe area of " << sh[3]->getName() << "is: " << sh[3]->area() << endl;
	cout << "\nthe perimeter of " << sh[3]->getName() << " is: " << sh[3]->perimeter() << endl;
	cout << "\nTesting copy constructor in class CurveCut:" << endl;
	CurveCut cc = rc;
	cc.display();
	cout << "\nTesting assignment operator in class CurveCut:" << endl;
	CurveCut cc2(2, 5, 100, 12, 9, "CurveCut cc2");
	cc2.display();
	cc2 = cc;
	cc2.display();
#endif

}

int main() {
	GraphicsWorld runProgram; // GraphicsWorld::run();
	runProgram.run();
	return 0; 
}