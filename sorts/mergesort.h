#include "constants.h"
template<class ItemType>
void MergeSort(ItemType values[], int count)
{
   MSort(values,0,count-1);
}

// This file contains the function to implement Merge Sortt.

#ifndef _SWAP_
#define _SWAP_

template<class ItemType>
inline void Swap(ItemType& item1, ItemType& item2)
// Post: Contents of item1 and item2 have been swapped.
{
    ItemType tempItem;
    tempItem = item1;
    item1 = item2;
    item2 = tempItem;
}
#endif

template<class ItemType>
void Merge(ItemType values[], int leftFirst, int leftLast,
     int rightFirst, int rightLast)
// Post: values[leftFirst]..values[leftLast] and
// values[rightFirst]..values[rightLast] have been merged.
// values[leftFirst]..values[rightLast] are now sorted.
{
    ItemType tempArray[MAX_ITEMS];
    int index = leftFirst;
    int saveFirst = leftFirst;
    while ((leftFirst <= leftLast) && (rightFirst <= rightLast))
    {
	if (values[leftFirst] < values[rightFirst])
	{
	    tempArray[index] = values[leftFirst];
	    leftFirst++;
	}
	else
	{
	    tempArray[index] = values[rightFirst];
	    rightFirst++;
	}
	index++;
    }
    while (leftFirst <= leftLast)
    // Copy remaining items from left half.
    {
	tempArray[index] = values[leftFirst];
	leftFirst++;
	index++;
    }
    while (rightFirst <= rightLast)
    // Copy remaining items from right half.
    {
	tempArray[index] = values[rightFirst];
	rightFirst++;
	index++;
    }
    for (index = saveFirst; index <= rightLast; index++)
	values[index] = tempArray[index];
}

template<class ItemType>
void MSort(ItemType values[], int first, int last)
// Post: The elements in values are sorted by key.
{
    if ( first < last)
    {
	int middle = (first + last) / 2;
	MSort(values, first, middle);
	MSort(values, middle + 1, last);
	Merge(values, first, middle, middle + 1, last);
    }
}
