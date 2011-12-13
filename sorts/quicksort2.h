template<class ItemType>
void QuickSort2(ItemType values[], int count)
{
   QS2(values,0,count-1);
}

template<class ItemType>
void QS2(ItemType values[], int first, int last)
{
    if (first < last)
    {
	int splitPt1;
	int splitPt2;
	Split2(values, first, last, splitPt1, splitPt2);
	// values[first]..values[splitPt2] <= splitVal
	// values[splitPt1 + 1]..values[last] > splitVal
	if (splitPt1 < last)
	    QS2(values, splitPt1, last);
	if (first < splitPt2)
	    QS2(values, first, splitPt2);
    }
}

template<class ItemType>
void Split2(ItemType values[], int first, int last,
int& splitPt1, int& splitPt2)
{
    ItemType splitVal = values[(first + last)/2];
    bool onCorrectSide;
    do
    {
        onCorrectSide = true;
        while (onCorrectSide) // Move first toward last.
            if (values[first] >= splitVal)
                onCorrectSide = false;
            else
                first++;
        onCorrectSide = true;
        while (onCorrectSide) // Move last toward first.
            if (values[last] <= splitVal)
                onCorrectSide = false;
            else
                last--;
        if (first <= last)
        {
            Swap(values[first], values[last]);
            first++;
            last--;
        }
    } while (first <= last);
    splitPt1 = first;
    splitPt2 = last;
}

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

