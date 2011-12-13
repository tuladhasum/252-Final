#include <iostream>
#include "linkedStack.h"
using namespace std;
int main()
{
   linkedStackType<int> stack;
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
