#include <fstream>  
#include <iostream>  
#include <string>
#include "constants.h"
using namespace std;

void readStudents(string names[],int scores[],int& count,int& maxscore)  
{
   ifstream infile; 
   string name;
   infile.open("scores"); 
   count = 0;
   infile >> maxscore;
   infile.ignore(80,'\n');
   getline(infile,name);
   while (!infile.eof() && count < ARRAYMAX)
   { 
      names[count] = name;
      infile >> scores[count];
      infile.ignore(80,'\n');
      count++;
      getline(infile,name);
   }
   if (!infile.eof())
      cout << "Warning: entire file not read\n";
   infile.close();
}
