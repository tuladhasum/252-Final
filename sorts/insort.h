// This file contains the function definitions for the Insertion Sort.

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
void InsertionSort(ItemType values[], int numValues)
// Post: The elements in the array values are sorted by key.
{
    bool finished;
    int current;
    bool moreToSearch;
    for (int count = 0; count < numValues; count++)
    {
        finished = false;
        current = count;
        moreToSearch = (current != 0);
        while (moreToSearch && !finished)
        {
            if (values[current] < values[current-1])
            {
                Swap(values[current], values[current-1]);
                current--;
                moreToSearch = (current != 0);
            }
            else
                finished = true;
        }
    }
}
