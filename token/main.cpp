#include "token.h"
#include <iostream>
using namespace std;
int main()
{
   Token t;
/*
   cout << "enter 1 token: ";
   cin >> t;
   if (t.Valid())
   {
      if (t.IsOperand())
         cout << "operand: " << t.Operand() << endl;
      else if (t.IsOperator())
         cout << "operator: " << t.Operator() << ", precedence: "
               << t.Precedence() << endl;
      else if (t.IsLeftParen())
         cout << "left parenthesis\n";
      else if (t.IsRightParen())
         cout << "right parenthesis\n";
   }
   else
      cout << "not a valid token\n";
   cin.ignore(80,'\n');
*/
   cout << "enter a bunch of tokens on one line: ";
   cin >> t;
   while (t.Valid())
   {
      cout << "token: " << t << endl;
      cin >> t;
   }
/*
   Token t1,op,t2,t3;
   cout << "enter a two operand expression: ";
   cin >> t1 >> op >> t2;
   switch (op.Operator())
   {
      case '+' :  t3 = t1 + t2; break;
      case '-' :  t3 = t1 - t2; break;
      case '*' :  t3 = t1 * t2; break;
      case '/' :  t3 = t1 / t2; break;
      case '%' :  t3 = t1 % t2; break;
      case '^' :  t3 = t1 ^ t2; break;
   }
   cout << t3 << endl;
*/
   return 0;
}
