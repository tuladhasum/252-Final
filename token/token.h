// File:      token.h
// Author:    Dan Brekke
// This file contains the specification for the token class.  
#ifndef TOKEN_CLASS
#define TOKEN_CLASS
#include <cmath>
#include <iostream>
using namespace std;
class Token
{
   public:
      Token();                         // no argument constructor
      Token(double);                   // double constructor
      Token(int);                      // int constructor
      Token(char);                     // char constructor
      bool Valid() const;              // true if token is valid
      bool IsOperand() const;          // true if token is an operand
      bool IsOperator() const;         // true if token is an operator
      bool IsLeftParen() const;        // true if token is a (
      bool IsRightParen() const;       // true if token is a )
      double Operand() const;          // returns the value of the operand
      char Operator() const;           // returns '+' '-' '*' '/' '%' '^' 
      int Precedence() const;          // returns precedence of operator
      Token operator + (const Token&) const; // add Token to object
      Token operator - (const Token&) const; // subtract Token from object
      Token operator * (const Token&) const; // multiply object by Token
      Token operator / (const Token&) const; // divide object by Token
      Token operator % (const Token&) const; // modulus object by Token
      Token operator ^ (const Token&) const; // raise object to power of Token

      friend istream& operator >> (istream&,Token&); // overload input
         // The >> operator will skip blanks and tabs, not '\n'.
         // '\n' will be read and the token is not valid.
         // This provides a way to have a loop read one line of tokens 
         // then exit when '\n is read.
      friend ostream& operator << (ostream&,const Token&); //overload output

   private:
      static bool unary; // to identify unary minus
      bool isnumber;     // identify whether it's a number or not
      double value;      // an operand
      char ch;           // an operator or parenthesis
      bool valid;        // true if Token is valid
};
#endif

