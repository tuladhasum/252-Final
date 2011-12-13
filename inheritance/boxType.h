#ifndef _BOXTYPE_H_
#define _BOXTYPE_H_

#include "rectangleType.h"
class boxType: public rectangleType
{
public:
    void setDimension(double l, double w, double h);
      //Function to set the length, width, and height 
	  //of the box.
      //Postcondition: length = l; width = w; height = h;

    double getHeight() const;
      //Function to return the height of the box.
      //Postcondition: The value of height is returned. 

    double area() const;
      //Function to return the surface area of the box.
      //Postcondition: The surface area of the box is 
      //                calculated and returned.

    double volume() const;
      //Function to return the volume of the box. 
      //Postcondition: The volume of the box is 
      //               calculated and returned.

    void print() const;
      //Function to output the length and width of a rectangle.

    boxType();
      //default constructor
      //Postcondition: length = 0; width = 0; height = 0;

    boxType(double l, double w, double h);
      //constructor with parameters
      //Postcondition: length = l; width = w; height = h;

private:
    double height;
};

#endif
