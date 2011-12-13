#include "token.h"
#include <iostream>
bool Token::unary=true;
Token::Token()
{
   isnumber=false;
   unary=true;
   valid=false;
}

Token::Token(char c)
{
   ch = c;
   isnumber=false;
   unary=true;
   valid=true;
}

Token::Token(double n)
{
   value = n;
   isnumber=true;
   unary=true;
   valid=true;
}

Token::Token(int n)
{
   value = n;
   isnumber=true;
   unary=true;
   valid=true;
}

bool Token::IsOperand() const
{
   return isnumber;
}

bool Token::IsLeftParen() const
{
   if (!isnumber)
      return ch=='(';
   else
      return false;
}

bool Token::IsRightParen() const
{
   if (!isnumber)
      return ch==')';
   else
      return false;
}

bool Token::IsOperator() const
{
   if (!isnumber)
      return ch=='+' || ch=='-' || ch=='*' ||
             ch=='/' || ch=='%' || ch=='^';
   else
      return false;
}

double Token::Operand() const
{
   if (IsOperand())
      return value;
   else
      return -999;
}

char Token::Operator() const
{
   if (IsOperator())
      return ch;
   else
      return ' ';
}

int Token::Precedence() const
{
   if (isnumber)
      return 0;
   else
      switch(ch)
      {
         case '+' : return 1;
         case '-' : return 1;
         case '*' : return 2;
         case '/' : return 2;
         case '%' : return 2;
         case '^' : return 3;
         default  : return 0;
      }
}

/*
double Token::Value() const
{
   if (isnumber)
      return value;
   else
      return 0;
}

char Token::Char() const
{
   if (!isnumber)
      return ch;
   else
      return ' ';
}
*/

Token Token::operator + (const Token& t) const
{
   Token temp(value+t.value);
   return temp;
}

Token Token::operator - (const Token& t) const
{
   Token temp(value-t.value);
   return temp;
}

Token Token::operator * (const Token& t) const
{
   Token temp(value*t.value);
   return temp;
}

Token Token::operator / (const Token& t) const
{
   Token temp(value/t.value);
   return temp;
}

Token Token::operator % (const Token& t) const
{
   Token temp(int(value)%int(t.value));
   return temp;
}

Token Token::operator ^ (const Token& t) const
{
   Token temp(pow(value,t.value));
   return temp;
}

bool Token::Valid() const
{
   return valid;
}

istream& operator >> (istream& in,Token& t)
{
   char c;
   do
      in.get(c);
   while (c==' ' || c==9);  // discard blanks and tabs
   if (c>='0' && c<='9' || c=='.' || (c=='-' && t.unary))  // it's a number
   {
      in.putback(c);
      t.isnumber=true;
      in >> t.value;
      t.unary = false;
      t.valid = true;
   }
   else // it's not a number
   {
      t.isnumber=false;
      t.ch = c;
      if (c=='+' || c=='-' || c=='*' || c=='/' || c=='%' || c=='^' ||
          c=='(' || c==')')
      {
         t.unary = c!=')';
         t.valid=true;
      }
      else
         t.valid=false;
   }
   return in;
}

ostream& operator << (ostream& out,const Token& t)
{
   if (t.valid)
      if (t.isnumber)
         out << t.value;
      else
         out << t.ch;
   return out;
}

