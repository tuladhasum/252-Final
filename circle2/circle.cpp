// File:     circle.cpp
// Author:   Dan Brekke
// Date: 

// Description
// This file contains the implementation for a circle class

#include "circle.h"

ostream& operator << (ostream& out, const Circle& c1)
{
//   out << "the radius is " << c1.radius() << endl;
// out << c1.rad;  // would work if this was a friend function
   out << c1.radius();
   return out;
}

Circle::Circle(double r)
{
//  cout << "this is the double one" << endl;
   setRadius(r);
}

/*
// experiment with multiple constructors, each with different signature

Circle::Circle(int r)
{
cout << "this is the int one" << endl;
   setRadius(r);
}

Circle::Circle()
{
cout << "this is the none one" << endl;
   setRadius(0);
}

*/

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

bool Circle::operator < (const Circle& c) const
{
   return radius() < c.radius();
}

bool Circle::operator == (const Circle& c) const
{
   return radius() == c.radius();
}

bool Circle::operator != (const Circle& c) const
{
   return radius() != c.radius();
}

bool Circle::operator >= (const Circle& c) const
{
   return radius() >= c.radius();
}

bool Circle::operator <= (const Circle& c) const
{
   return radius() <= c.radius();
}

bool Circle::operator > (const Circle& c) const
{
   return radius() > c.radius();
}

