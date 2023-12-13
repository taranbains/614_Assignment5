/*
 *  Point.h
 *  ENSF 614 Lab 5 Exercise A
 *  Author: Taran Bains
 *  Submission Date: October 23 2023
 */
#ifndef POINT_H
#define POINT_H

// #pragma once

 /* The following class definition Circle represents a circle and has basic features such as
  * calculating the area and perimeter and also extends the Shape class.
  */

class Point
{
public:
	Point(double x, double y);
	// Promises: sets x and y coorindates 

	double getx() const;
	// Promises: getter for x coordinate 

	double gety() const;
	// Promises: getter for y coordinate

	int getid() const;
	// Promises: returns the ID as a constant id 

	void setx(double arg);
	// Promises: sets x coordinate with given argument 
	
	void sety(double arg);
	// Promises: sets y coordinate with given argument 

	int counter() const; 
	// Promises: returns the number of Point objects that have been initialized 

	double distance(Point other);
	// Promises: returns the distance between current Point and a given Point 

	static double distance(Point point1, Point point2); 
	// Promises: returns the distance betwen 2 given Points 

	void display();
	// Promises: to display x and y coordinate nicely to terminal

private:
	double x;					// x coordinate
	double y;					// y coordinate
	int id;						// id number for point
	static int nextID;			// static id to declare id from 
	static int count;			// static count for how many objects of Point we make 
};

#endif 