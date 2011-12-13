#include <iostream>
#include <cmath>

using namespace std;

void greeting()
{
   cout << "hello there\n";
}

int add_one(int n)
{
   return n+1;
}

int sum(float x,int y)
{
   return static_cast<int>(x)+y;
}

int main()
{
   cout << sqrt(25) << endl;
   greeting();
   cout << add_one(5) << endl;
   cout << add_one(static_cast<int>(sqrt(25))) << endl;
   cout << sqrt(add_one(40)) << endl;
   cout << sum(7,4) << endl;
   return 0;
}
