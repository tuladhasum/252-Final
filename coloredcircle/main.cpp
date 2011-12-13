// File:     main.cpp
// Author:   Dan Brekke

// Description
// This program will test the circle class

#include <iostream>
#include <iomanip>
#include "coloredcircle.h"
using namespace std;

int main()
{
   ColoredCircle cc1;
   ColoredCircle cc2(3,YELLOW);
   cc1.setRadius(3);
   cout << cc1.radius() << endl; 
   cout << cc2.radius() << endl;
   cout << cc1.area() << endl;
   cout << endl;
   cout << cc1 << endl;
   cout << cc2 << endl;
   if (cc1 == cc2)
      cout << "equal\n";
   else
      cout << "not equal\n";
   return 0;
}
