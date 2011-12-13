#include <fstream>
#include <iomanip>
using namespace std;

void writeStudents(const string names[],const int scores[],
                   int count,int maxscore)
{
   ofstream outfile;
   double pct;
   outfile.open("results");
   outfile << fixed << showpoint << setprecision(2);
   for (int i=0; i<count; i++)
   {
      outfile << left << setw(20) << names[i];
      pct = static_cast<double>(scores[i])/maxscore*100;
      outfile << right << setw(8) << pct << endl;  
   }
   outfile.close();
}
