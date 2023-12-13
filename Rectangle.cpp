/*
 *  Rectangle.cpp
 *  ENSF 614 Lab 5 Exercise A
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */

#include "Rectangle.h"
#include "Square.h"
#include "Point.h"
#include "Shape.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double x, double y, double side1, double side2, const char name[]) : Square(x, y, side1, name), side_b(side2), Shape(x, y, name) {};

Rectangle::Rectangle(const Rectangle& source) : 
	Square(source.getOrigin().getx(), source.getOrigin().gety(), source.get_side_a(), source.getName()), side_b(source.get_side_b()),
	Shape(source.getOrigin().getx(), source.getOrigin().gety(), source.getName()) {};

Rectangle& Rectangle::operator=(const Rectangle& source) {
	if (this == &source) return *this;
	Square::operator = (source);
	side_b = source.get_side_b(); 
	return *this;
}

double Rectangle::get_side_b() const {
	return side_b; 
}

void Rectangle::set_side_b(double arg) {
	side_b = arg; 
}

double Rectangle::area() {
	return get_side_a() * side_b; 
}

double Rectangle::perimeter() {
	return (2 * get_side_a() + (2 * side_b)); 
}

void Rectangle::display() {
	Shape::display();
	cout << "Side a: " << get_side_a() << endl; 
	cout << "Side b: " << side_b << endl;
	cout << "Area: " << area() << endl;
	cout << "Perimeter: " << perimeter() << endl; 
}