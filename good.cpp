#include <iostream>
using namespace std;
int main()
{
   double celsius,fahrenheit; 
   cout << "enter a celsius temperature: ";
   cin >> celsius; 
   fahrenheit = (9.0/5) * celsius + 32;
   cout << celsius << " degrees celsius is "
        << fahrenheit << " degrees fahrenheit\n";
   return 0;
}

