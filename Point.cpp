/*
 *  Point.cpp
 *  ENSF 614 Lab 5 Exercise B
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */

#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(double arg1, double arg2) : x(arg1), y(arg2) {
	id = nextID;
	nextID++; 
	count++; 
}

int Point::nextID = 1001; 
int Point::count = 0; 

double Point::getx() const{
	return x; 
}

double Point::gety() const {
	return y; 
}

int Point::getid() const {
	return id;
}

void Point::setx(double arg) {
	x = arg; 
}

void Point::sety(double arg) {
	y = arg; 
}

int Point::counter() const {
	return count;
}

double Point::distance(Point other) {
	double x;
	double y;
	x = other.x - this->x;
	y = other.y - this->y; 

	double d;
	d = sqrt(pow(x, 2) + pow(y, 2));
	return d; 
}

double Point::distance(Point point1, Point point2) {
	double x;
	double y;
	x = point1.x - point2.x;
	y = point1.y - point2.y;

	double d;
	d = sqrt(pow(x, 2) + pow(y, 2));
	return d;
}

void Point::display() {
	cout << "X - coordinate: " << x << endl;
	cout << "Y - coordinate : " << y << endl;
}


