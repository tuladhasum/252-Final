// function sort will sort an array descendingly
template <typename ArrayType>
void sort(ArrayType array[], int n)
{
   ArrayType temp;
   for (int i=0; i<n-1; i++)  // put n-1 values in their correct spot
   {
      int big=i;
      for (int j=i+1; j<n; j++) 
         if (array[j] > array[big])
            big=j;
      temp = array[i];
      array[i] = array[big];
      array[big] = temp;
   }
}

