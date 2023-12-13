/*
 *  Square.h
 *  ENSF 614 Lab 5 Exercise A
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */

#ifndef SQUARE_H
#define SQUARE_H

// #pragma once
#include "Shape.h"

/* The following class definition Square represents a square with a side and extends the Shape object 
 * with a Point origin and name. Also calculates the area and perimeter of a square. 
 */

class Square: virtual public Shape{
public:
	Square(double x, double y, double side, const char name[]); 
	// Square Constructor, inherits Shape 
	// Promises: sets the origin (x, y) for Square, the length of a side of the square and the name for square 

	Square& operator=(const Square& source); 
	// Square copy constructor 
	// Promises: sets and returns a Square object that is identical to the Square object that is given as argument 

	double area() override;
	// Promises: returns area of a square 

	double perimeter() override;
	// Promises: returns the perimeter of a square 

	void set_side_a(double arg);
	// Promises: sets the side for the square 

	double get_side_a() const; 
	// Promises: returns the side for square as a constant 

	virtual void display(); 
	// Promises: displays some of the Squares features in a nice format 

private:
	double side_a;	// length of side 
};

#endif
