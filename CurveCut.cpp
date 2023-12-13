/*
 *  CurveCut.cpp
 *  ENSF 614 Lab 5 Exercise B
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */


#include "CurveCut.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Square.h"

#define _USE_MATH_DEFINES
#include <math.h>

#include <iostream>
using namespace std;

CurveCut::CurveCut(double x, double y, double side1, double side2, double radius, const char name[]) :
	Circle(x, y, radius, name), Rectangle(x, y, side1, side2, name), Rectangle::Shape(x, y, name), Square(x, y, side1, name) {
	
	if (radius > side1 || radius > side2) {
		cout << "Error with creating CurveCut. Please check values." << endl; 
		exit(0); 
	}
}; 

// copy constructor 
CurveCut::CurveCut(const CurveCut& source) :
	Circle(source.Rectangle::getOrigin().getx(), source.Rectangle::getOrigin().gety(), source.get_radius(), source.Rectangle::getName()),
	Rectangle(source.Rectangle::getOrigin().getx(), source.Rectangle::getOrigin().gety(), source.get_side_a(), source.get_side_b(), source.Rectangle::getName()),
	Rectangle::Shape(source.Rectangle::getOrigin().getx(), source.Rectangle::getOrigin().gety(), source.Rectangle::getName()),
	Square(source.Rectangle::getOrigin().getx(), source.Rectangle::getOrigin().gety(), source.get_side_a(), source.Rectangle::getName()){};

// assignment operator 
CurveCut& CurveCut::operator=(const CurveCut& source) {
	if (this == &source) return *this;
	Rectangle::operator = (source);
	Circle::operator = (source); 
	return *this;
}

double CurveCut::area() {
	double area_rect = get_side_a() * get_side_b(); 
	double area_circle = M_PI * pow(get_radius(), 2); 

	return area_rect - (0.25 * area_circle); 
}

double CurveCut::perimeter() {
	double per_rect = (2 * get_side_a()) + (2 * get_side_b());
	double per_circle = 2 * M_PI * get_radius();

	return per_rect - (2 * get_radius()) + (0.25 * per_circle);
}

void CurveCut::display() {
	Shape::display(); 

	cout << "Width: " << get_side_a() << endl; 
	cout << "Length: " << get_side_b() << endl; 
	cout << "Radius: " << get_radius() << endl; 
	cout << "Area: " << area() << endl; 
	cout << "Perimeter: " << perimeter() << endl; 
}
