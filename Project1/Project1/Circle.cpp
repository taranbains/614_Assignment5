/*
 *  Circle.cpp
 *  ENSF 614 Lab 5 Exercise B
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */

#include "Circle.h"
#include "Shape.h"
#include "Point.h"

#define _USE_MATH_DEFINES
#include <math.h>

#include <iostream>
using namespace std;

// constructor 
Circle::Circle(double x, double y, double rad, const char name[]) : Shape(x, y, name), radius(rad) {}; 

// copy constructor 
Circle::Circle(const Circle& source) : Shape(source.getOrigin().getx(), source.getOrigin().gety(), source.getName()), radius(source.get_radius()) {}; // copy constructor 


// assignment operator 
Circle& Circle::operator=(const Circle& source) {
	if (this == &source) return *this;
	Shape::operator = (source);
	radius = source.get_radius();
	return *this;
}


double Circle::area() {
	return M_PI * pow(radius, 2); 
}

double Circle::perimeter() {
	return 2 * M_PI * radius; 
}

double Circle::get_radius() const{
	return radius; 
}

void Circle::set_radius(double arg) {
	radius = arg; 
}

void Circle::display() {
	Shape::display(); 

	cout << "Radius: " << radius << endl; 
	cout << "Area: " << area() << endl; 
	cout << "Perimeter: " << perimeter() << endl; 

}