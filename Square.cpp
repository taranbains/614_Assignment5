/*
 *  Square.cpp
 *  ENSF 614 Lab 5 Exercise A
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */

#include "Square.h"
#include "Point.h"
#include "Shape.h"
#include <iostream>
using namespace std;

Square::Square(double x, double y, double side, const char name[]) : Shape(x, y, name), side_a(side) {};

Square& Square::operator=(const Square& source) {
	if (this == &source) return *this;
	Shape::operator = (source);
	side_a = source.get_side_a();
	return *this;
}

double Square::area() {
	return side_a * side_a; 
}

double Square::perimeter() {
	return 4 * side_a; 
}

void Square::set_side_a(double arg) {
	this->side_a = arg; 
}

double Square::get_side_a() const {
	return side_a; 
}

void Square::display() {
	Shape::display();	// call the base class display() to display name and origin points 

	cout << "Side a: " << side_a << endl;
	cout << "Area: " << area() << endl; 
	cout << "Perimeter: " << perimeter() << endl; 
}
