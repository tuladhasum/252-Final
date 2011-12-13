// File:     circle.h
// Author:   Dan Brekke
// Date: 

// Description
// This file contains the specification for a circle class

#ifndef _CIRCLE_H_
#define _CIRCLE_H_

const double PI = 3.141592654;  // used in area and circumference calculations
using namespace std;

class Circle
{
   public:
      // method - constructor
      // description - construct a new Circle object
      // preconditions - none
      // postconditions - Circle object created and initialized 
      //    to a radius of either the argument or 0 by default
      // method input - radius of the circle : double
      // method output - none
      Circle(double=0);

      // method - setRadius
      // description - sets the radius of the Circle object
      // preconditions - none
      // postconditions - Circle object radius set 
      // method input - radius of the circle : double
      // method output - none
      void setRadius(double);

      // method - radius
      // description - returns the radius of the Circle object
      // preconditions - Circle object has been initialized
      // postconditions - Circle object radius has been returned 
      // method input - none
      // method output - radius of the Circle : double
      double radius() const;

      // method - diameter
      // description - returns the diameter of the Circle object
      // preconditions - Circle object has been initialized
      // postconditions - Circle object diameter has been returned 
      // method input - none
      // method output - diameter of the Circle : double
      double diameter() const;

      // method - area
      // description - returns the area of the Circle object
      // preconditions - Circle object has been initialized
      // postconditions - Circle object area has been returned 
      // method input - none
      // method output - area of the Circle : double
      double area() const;

      // method - circumference
      // description - returns the circumference of the Circle object
      // preconditions - Circle object has been initialized
      // postconditions - Circle object circumference has been returned 
      // method input - none
      // method output - circumference of the Circle : double
      double circumference() const;

   private:
      double rad;  // radius of the circle
};

#endif
