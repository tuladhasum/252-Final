#include <iomanip>
#include <iostream>
#include <string>
#include "constants.h"
#include "selsort.h"    // SelectionSort
#include "insort.h"     // InsertionSort
#include "bubble.h"     // BubbleSort
#include "shbubble.h"   // ShortBubble
#include "heapsort.h"   // HeapSort
#include "quicksort.h"  // QuickSort
#include "quicksort2.h" // QuickSort2
#include "mergesort.h"  // MergeSort
#include "radixsort.h"  // RadixSort
#include "random.h"

using namespace std;

int main(int argc, char* argv[])
{
   if (argc<2)
   {
      cout << "you must specify a sort\n";
      cout << "   prog SelectionSort\n";
      cout << "   prog InsertionSort\n";
      cout << "   prog BubbleSort\n";
      cout << "   prog ShortBubble\n";
      cout << "   prog HeapSort\n";
      cout << "   prog QuickSort\n";
      cout << "   prog QuickSort2\n";
      cout << "   prog MergeSort\n";
      cout << "   prog RadixSort\n";
      exit(1);
   }
   int numbers[MAX_ITEMS];  // MAX_ITEMS defined in constants.h
   RandomNumber rnd(1); // seeding produces same random list
   for (int i=0; i< MAX_ITEMS; i++)
      numbers[i]=rnd.Random(1000000)+1;    // array contains random values
//      numbers[i]=i;                   // array already sorted
   if (strcmp(argv[1],"SelectionSort") == 0)
      SelectionSort(numbers,MAX_ITEMS);
   else if (strcmp(argv[1],"InsertionSort") == 0)
      InsertionSort(numbers,MAX_ITEMS);
   else if (strcmp(argv[1],"BubbleSort") == 0)
      BubbleSort(numbers,MAX_ITEMS);
   else if (strcmp(argv[1],"ShortBubble") == 0)
      ShortBubble(numbers,MAX_ITEMS);
   else if (strcmp(argv[1],"HeapSort") == 0)
      HeapSort(numbers,MAX_ITEMS);
   else if (strcmp(argv[1],"QuickSort") == 0)
      QuickSort(numbers,MAX_ITEMS);
   else if (strcmp(argv[1],"QuickSort2") == 0)
      QuickSort2(numbers,MAX_ITEMS);
   else if (strcmp(argv[1],"MergeSort") == 0)
      MergeSort(numbers,MAX_ITEMS);
   else if (strcmp(argv[1],"RadixSort") == 0)
      RadixSort(numbers,MAX_ITEMS);
   else
   {
      cout << "not a valid sort\n";
      exit(1);
   }
   cout << "sorted " << MAX_ITEMS 
      << " ints (can be changed in constants.h)\n";
//   for (int i=0; i<MAX_ITEMS; i++)
//      cout << '[' << setw(2) << i << "] = " << setw(6) << numbers[i] << endl;
   return 0;
}
