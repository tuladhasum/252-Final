#include <iostream>
using namespace std;

int main()
{
   int x,y;
   int larger;
   cout << "enter two ints: ";
   cin >> x >> y;
   larger = x>y? x:y; // conditional operator
   cout << "the larger is " << larger << endl;
   cout << "the larger is " << (x>y? x:y) << endl;
   return 0;
}
