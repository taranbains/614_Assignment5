/*
 *  Rectangle.h
 *  ENSF 614 Lab 5 Exercise A
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */
#ifndef RECTANGLE_H
#define RECTANGLE_H

// #pragma once

#include "Point.h"
#include "Square.h"
#include "Shape.h"

 /* The following class definition Circle represents a circle and has basic features such as
  * calculating the area and perimeter and also extends the Shape class.
  */

class Rectangle: virtual public Square 
{
public:
	Rectangle(double x, double y, double side1, double side2, const char name[]); 
	// Rectangle constructor, inherits Square and Shape  
	// Promises: to Set point with x and y, have a side a and b and a shape name

	Rectangle(const Rectangle& source); 
	// Copy constructor 
	// Promises: to create a new Rectangle object the same as the Rectangle object that is given as an argument 

	Rectangle& operator =(const Rectangle& source); 
	// Assignment operator 
	// Promises: to return a pointer to a Rectangle object that is the same as the Rectangle object that is given as an argument 

	double get_side_b() const;
	// Promises: returns the side b as a const 

	void set_side_b(double arg); 
	// Promises: set the side of b as an argument 

	double area() override;
	// Promises: calculates and returns the area for the rectangle 

	double perimeter() override; 
	// Promises: calculates and returns the perimeter for the rectangle 

	void display(); 
	// Promises: displays the details for Rectangle onto the terminal in a nice format by also using the Shape base 
	// class display function

private:
	double side_b;		// the extra side of rectangle; side a is from Square 
};

#endif 
