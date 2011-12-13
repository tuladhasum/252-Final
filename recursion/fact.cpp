#include <iostream>
using namespace std;

int fact_iterative(int n)
{
   int result=1;
   for (int i=2; i<=n; i++)
      result *= i;
   return result;
}

int fact_recursive(int n)
{
   if (n<=1)
      return 1;
   else
      return n*fact_recursive(n-1);
}

int main()
{
   int n;
   cout << "enter n: ";
   cin >> n;
   cout << fact_iterative(n) << endl;
   cout << fact_recursive(n) << endl;
   return 0;
}   

