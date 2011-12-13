#include <iostream>
#include "stackType.h"
using namespace std;
int main()
{
   stackType<int> stack;
   stack.push(9);
   stack.push(3);
   stack.push(5);
   stack.push(7);
   while (!stack.isEmptyStack())
   {
      cout << stack.top() << endl;
      stack.pop();
   }
   return 0;
}
