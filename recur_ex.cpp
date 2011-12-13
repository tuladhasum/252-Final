#include <iostream>
using namespace std;

void func(int num)
{
   if (num <= 4)
   {
      func(num+1);
      cout << num << endl;
   }
}

int main()
{
   func(1);
   return 0;
}
