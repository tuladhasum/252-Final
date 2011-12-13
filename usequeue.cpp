#include <iostream>
#include "queueType.h"
using namespace std;
int main()
{
   queueType<int> q;
   q.addQueue(5);
   q.addQueue(4);
   q.addQueue(9);
   q.addQueue(1);
   q.addQueue(3);
   while (!q.isEmptyQueue())
   {
      cout << q.front() << endl;
      q.deleteQueue();
   }
   return 0;
}
