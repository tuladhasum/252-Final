// File:     main.cpp
// Author:   Dan Brekke
// Date: 

// Description
// This program will test the circle class

#include <iostream>
#include <iomanip>
#include "circle.h"
using namespace std;

int main()
{
   cout << showpoint << fixed << setprecision(2);
   float r;
   Circle c1;
   c1.rad = 9;
   cout << c1.rad << endl;
   cout << "enter radius for a circle: ";
   cin >> r;
   c1.setRadius(r);
   cout << left << setw(14) << "radius" 
        << right << setw(10) << c1.radius() << endl;
   cout << left << setw(14) << "diameter" 
        << right << setw(10) << c1.diameter() << endl;
   cout << left << setw(14) << "area" 
        << right << setw(10) << c1.area() << endl;
   cout << left << setw(14) << "circumference" 
        << right << setw(10) << c1.circumference() << endl;
   cout << endl;

   cout << "enter radius for another circle: ";
   cin >> r;
   Circle c2(r);
   cout << left << setw(14) << "radius" 
        << right << setw(10) << c2.radius() << endl;
   cout << left << setw(14) << "diameter" 
        << right << setw(10) << c2.diameter() << endl;
   cout << left << setw(14) << "area" 
        << right << setw(10) << c2.area() << endl;
   cout << left << setw(14) << "circumference" 
        << right << setw(10) << c2.circumference() << endl;
   cout << endl;

   return 0;
}
