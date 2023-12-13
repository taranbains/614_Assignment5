## Assignment 5

Basic object oriented design concepts in C++ including aggregation, composition, polymorphism and inheritance. 

**Single Inheritance in C++**

Class Point - represents a point in a cartesian plane with x and y coordinates and an ID number that gets assignment automatically. 

Class Shape - base class of Rectangle, Square, Circle and supports basic operations and common structures. 

Class Square - derived from Shape and has a name, point, side, area and perimeter. 

Class Rectangle - derived from Square and has a name, point, two sides, area and perimeter. 

Class GraphicsWorld - run function to declare instances of the shape classes. 

**Multitple Inheritance in C++**

Class Circle - derived from shape and has radius, area and perimeter. 

Class CurveCut - represnts a rectangle thats left top corner has an arch form cut, essentially a quarter circle. 