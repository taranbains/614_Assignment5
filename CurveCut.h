/*
 *  CurveCut.h
 *  ENSF 614 Lab 5 Exercise B
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */

#ifndef CURVECUT_H
#define CURVECUT_H

// #pragma once
#include "Circle.h"
#include "Rectangle.h"

 /* The following class definition CurveCut represents a Rectangle object with a quarter of a Circle
  * cut out of it. It extends the Circle and Rectangle class with the base ancestor of Shape. 
  */

class CurveCut: virtual public Circle, virtual public Rectangle 
{
public:
	using Rectangle::distance; 
	using Rectangle::getName; 

	CurveCut(double x, double y, double side1, double side2, double radius, const char name[]);
	// Constructor extends Circle, Rectangle, and their base ancestor of Shape 
	// Promises: sets Point with x and y, rectangle with its sides and a circle with a specific radius and a shape name	
	// Requires: the radius is smaller or equal to the 2 sides of the rectangle 
	
	CurveCut(const CurveCut& source); 
	// Copy constructor 
	// Promises: copy constructor copies a CurveCut object into current CurveCut object 

	CurveCut& operator=(const CurveCut& source);
	// Assignment operator 
	// Promises: sets the current CurveCut object as the given argument CurveCut object and returns a reference to the current one

	double area() override;
	// Promises: returns the calculated area for the CurveCut object 

	double perimeter() override; 
	// Promises: returns the calculated perimeter for the CurveCut object

	void display(); 
	// Promises: displays details for the CurveCut object onto the terminal in a nice format and also calls the ancestor 
	// Shape displays
};

#endif