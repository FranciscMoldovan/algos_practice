#include <sort.h>

void swap_elems (int*a, int*b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void selection_sort(int array[], size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = i; j < size; ++j)
        {
            if ( array[j] < array[i] )
            {
                swap_elems(array+i, array+j);
            }
        }
    }
}
void insertion_sort(int array[], size_t size)
{
    for (int i = 1; i < size; ++i)
    {
      int key = array[i];
      int j = i-1;
      while (j>=0 && array[j] > array[i])
      {
          array[j+1] = array[i];
          j--;
      }
      array[j+1] = key;
    }
}
