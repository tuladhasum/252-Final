// File:     main.cpp
// Author:   Dan Brekke
// Date: 

// Description
// This program will test the circle class

#include <iostream>
#include <iomanip>
#include "circle.h"
using namespace std;

/* moved because there's a better place for it
ostream& operator << (ostream& out, const Circle& c1)
{
   out << c1.radius();
   return out;
}
*/

/*  removed because there's a better way
bool operator < (const Circle& c1,const Circle& c2)
{
   return c1.radius() < c2.radius();
}
*/

int main()
{
   cout << showpoint << fixed << setprecision(2);
//    Circle c1(4);
//    cout << c1.area() << endl;
/*
   Circle circles[5];
   circles[0].setRadius(5);
   circles[1].setRadius(3);
   circles[2].setRadius(7);
   circles[3].setRadius(6);
   circles[4].setRadius(2);
   for (int i=0; i<5; i++)
      cout << setw(6) << circles[i].radius()
           << setw(9) << circles[i].area() << endl;
*/
   Circle c1(3);
   Circle c2(5);
   if (c1 < c2)
      cout << "yes\n";
   else
      cout << "no\n";
   cout << "the radius is " << c1 << endl;

   return 0;
}
