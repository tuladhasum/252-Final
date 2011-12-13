// This file contains the functions necessary to implement Short Bubble.

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
void ShortBubble(ItemType values[], int numValues)
// Post: The elements in the array values are sorted by key.
// The process stops as soon as values is sorted.
{
    int current = 0;
    bool sorted = false;
    while (current < numValues - 1 && !sorted)
    {
        sorted = true;
        for (int index = numValues-1; index > current; index--)
            if (values[index] < values[index-1])
            {
                Swap(values[index], values[index-1]);
                sorted = false;
            }
	current++;
    }
}
