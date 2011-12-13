#include <iostream>
#include "sort.h"

using namespace std;

int main()
{
   int intArray[] = {6,4,8,5,7,2};
   int intCount = 6; 
   double doubleArray[] = {45.32, 75.4, 83.43, 12,23, 53.64};
   int doubleCount = 5;
   char charArray[] = {'h','e','l','l','o','t','h','e','r','e'};
   int charCount = 10;
   sort(intArray,intCount);
   sort(doubleArray,doubleCount);
   sort(charArray,charCount);

   for (int i=0; i<intCount; i++) 
      cout << intArray[i] << ' ';
   cout << endl;
   for (int i=0; i<doubleCount; i++) 
      cout << doubleArray[i] << ' ';
   cout << endl;
   for (int i=0; i<charCount; i++) 
      cout << charArray[i] << ' ';
   cout << endl;
   return 0;
}

