#include <iostream>
#include "constants.h"
using namespace std;

void readStudents(string names[],int scores[],int& count,int& maxscore);
void writeStudents(const string names[], const int scores[], 
                   int count,int maxscore);

int main()
{
   string names[ARRAYMAX];
   int scores[ARRAYMAX];
   int count;
   int maxscore;

   readStudents(names,scores,count,maxscore);
   writeStudents(names,scores,count,maxscore);

   cout << "input read from file: scores\n";
   cout << "output written to file: results\n";
   return 0;
}
