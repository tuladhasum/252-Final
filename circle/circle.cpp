// File:     circle.cpp
// Author:   Dan Brekke
// Date: 

// Description
// This file contains the implementation for a circle class

#include "circle.h"

Circle::Circle(double r)
{
   setRadius(r);
}

void Circle::setRadius(double r)
{
   rad = r;
}

double Circle::radius() const
{
   return rad;
}

double Circle::diameter() const
{
   return radius()*2;
}

double Circle::area() const
{
   return PI*radius()*radius();
}

double Circle::circumference() const
{
   return 2*PI*radius();
}
