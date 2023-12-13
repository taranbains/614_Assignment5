/*
 *  Shape.cpp
 *  ENSF 614 Lab 5 Exercise A
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */

#include "Point.h"
#include "Shape.h"
#include <iostream>
#include <cstring>
using namespace std;

Shape::Shape(double x, double y, const char name[]) : origin(x, y){
	shapeName = new char[strlen(name) + 1];
	strcpy_s(shapeName, strlen(name) + 1, name);
} 

Shape& Shape::operator=(const Shape& source) {
	if (this == &source) return *this;
	setName(source.getName());
	origin = source.getOrigin();
	return *this;
}

Shape::~Shape() {
	delete[] shapeName; 
}

void Shape::setOrigin(const Point& arg) {
	origin.setx(arg.getx());
	origin.sety(arg.gety()); 
}

void Shape::setName(const char newname[]) {
	delete[] shapeName;
	shapeName = new char[strlen(newname) + 1];
	strcpy_s(shapeName, strlen(newname) + 1, newname);
}

const Point& Shape::getOrigin() const {
	return origin; 
}

char* Shape::getName() const {
	return shapeName;
}

void Shape::display() {
	cout << "Shape Name: " << this->shapeName << endl;
	cout << "X-coordinate: " << this->origin.getx() << endl;
	cout << "Y-coordinate: " << this->origin.gety() << endl; 
}

double Shape::distance(Shape& other) {
	double x;
	double y;
	x = other.getOrigin().getx() - this->origin.getx();
	y = other.getOrigin().gety() - this->origin.gety();

	double d;
	d = sqrt(pow(x, 2) + pow(y, 2));
	return d;
}

double Shape::distance(Shape& the_shape, Shape& other) {
	double x;
	double y;
	x = other.getOrigin().getx() - the_shape.getOrigin().getx();
	y = other.getOrigin().gety() - the_shape.getOrigin().gety();

	double d;
	d = sqrt(pow(x, 2) + pow(y, 2));

	return d;
}

void Shape::move(double dx, double dy) {
	origin.setx(origin.getx() + dx);
	origin.sety(origin.gety() + dy);

}
