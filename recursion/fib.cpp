#include <iostream>
using namespace std;

int fib_iterative(int n)
{
   int fib1=1, fib2=0, fib3=0;
   for (int i=1; i<=n; i++)
   {
      fib3 = fib1+fib2;
      fib1 = fib2;
      fib2 = fib3;
   }
   return fib3;
}

int fib_recursive(int n)
{
   if (n<=1) // base case F(0) is 0, F(1) is 1
      return n;
   else
      return fib_recursive(n-1) + fib_recursive(n-2);
}

int main()
{
   int n;
   cout << "enter n: ";
   cin >> n;
   cout << fib_iterative(n) << endl;
   cout << fib_recursive(n) << endl;
   return 0;
}   

