#include <iostream>
#include <cctype>
using namespace std;

int main()
{
   int num;
   cout << "enter an int in the range 1 to 10: ";
   cin >> num;
   cout << "num = " << num << endl;
   switch (num)
   {
      case 1  : cout << "one\n"; break;
      case 2  : cout << "two\n"; break;
      case 3  : cout << "three\n"; break;
      case 4  : cout << "four\n"; break;
      case 5  : cout << "five\n"; break;
      case 6  : cout << "six\n"; break;
      case 7  : cout << "seven\n"; break;
      case 8  : cout << "eight\n"; break;
      case 9  : cout << "nine\n"; break;
      case 10 : cout << "ten\n"; break;
      default : cout << "not in range of 1 to 10\n";
   }
   
   char ch;
   cout << "enter a letter: ";
   cin >> ch;
   ch = toupper(ch);
   switch (ch)
   {
      case 'A' : 
      case 'E' : 
      case 'I' : 
      case 'O' : 
      case 'U' : cout << "vowel\n"; break;
      case 'B' : 
      case 'C' : 
      case 'D' : 
      case 'F' : 
      case 'G' : 
      case 'H' : 
      case 'J' : 
      case 'K' : 
      case 'L' : 
      case 'M' : 
      case 'N' : 
      case 'P' : 
      case 'Q' : 
      case 'R' : 
      case 'S' : 
      case 'T' : 
      case 'V' : 
      case 'W' : 
      case 'X' : 
      case 'Y' : 
      case 'Z' : cout << "consonant\n"; break;
      default  : cout << "not a letter\n";
   }

   return 0;
}
