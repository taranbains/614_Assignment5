/*
 *  Shape.h
 *  ENSF 614 Lab 5 Exercise A
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */
#ifndef SHAPE_H
#define SHAPE_H

// #pragma once
#include "Point.h"

/* The following class definition Shape represents a generic shape and has a Point of origin and 
 * a name and ID and with appropriate getters and setters.
 */

class Shape
{
public:
	Shape(double x, double y, const char name[]);
	// Constructor for Shape 
	// Promises: to set the origin Point as x and y and the shape name 

	~Shape(); 
	// Deconstructor for Name 
	// Promises: deconstructor for shape name 

	Shape& operator=(const Shape& source); 
	// assignment operator 
	// Promises: Returns a shape that is identical to the shape given as an argument 

	const Point& getOrigin() const;
	// Promises: returns the Point origin as a constant reference 

	void setOrigin(const Point& arg); 
	// Promises: sets origin as Point argument 

	void setName(const char newname[]); 
	// Promises: sets the name as a given new name 

	char* getName() const; 
	// Promises: returns the name as a pointer to a constant 

	virtual void display();
	// Promises: displays the x and y coordinate and name in a nice format to the terminal 

	double distance(Shape& other);
	// Promises: distance between two points, between current object and another Shape 

	static double distance(Shape& the_shape, Shape& other);
	// Promises: static distance returns the distance between two given Shapes 
	
	void move(double dx, double dy);
	// Promises: move the Shape origin by a given change in x and y 

	virtual double area() = 0;				// pure virtual class for area 
	virtual double perimeter() = 0;			// pure virtual class for perimeter 

private:
	Point origin;			// origin of the shape 
	char* shapeName;		// name of the shape 

};

#endif 