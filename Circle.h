/*
 *  Circle.h
 *  ENSF 614 Lab 5 Exercise A
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */

#ifndef CIRCLE_H
#define CIRCLE_H

// #pragma once
#include "Point.h"
#include "Shape.h"

 /* The following class definition Circle represents a circle and has basic features such as 
  * calculating the area and perimeter and also extends the Shape class. 
  */

class Circle : virtual public Shape
{
public:
	Circle(double x, double y, double rad, const char name[]);
	// Circle Constructor, extends Shape 
	// Promises: sets Point with x and y coordiante, sets the radius and the shape name 

	Circle(const Circle& source); 
	// Copy constructor 
	// Promises: sets the current Circle object as a copy of the Circle object given as the argument  

	Circle& operator=(const Circle& source);
	// Assignment operator 
	// Promises: sets the current Circle object as a copy of the Circle object given as the argument and returns 
	// a pointer to the current object 

	double area() override;
	// Promises: calculates and returns the area of a circle

	double perimeter() override; 
	// Promises: calculates and returns the perimeter of a circle

	double get_radius() const;
	// Promises: returns the radius of a circle as a const 

	void set_radius(double arg);
	// Promises: sets the radius of the circle with the given argument 

	void display();
	// Promises: displays the Circle properties to the terminal in a nice format and also calls the Shape display() 

private:
	double radius;			// radius of the circle 
}; 

#endif 
