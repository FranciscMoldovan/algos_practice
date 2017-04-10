#include <iostream>
#include <search.h>
#include <sort.h>
#define LEN 10;

int main()
{
    size_t size = LEN;
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int arr_s[9] = {3, 7, 6, 8, 1, 4, 2, 5, 9};

//    size_t res = binary_search (arr, 0, 10, 7);

//    size_t res = binary_s(arr, LEN, 5);

//    selection_sort(arr_s, 9);
//    insertion_sort(arr_s, 9);
//      bubble_sort(arr_s, 9);


//      merge(arr_s, 0, 4, 9);
     mergeSort(arr_s, 0, 9);
      for (int var = 0; var < 9; ++var) {
        printf("arr[%d]=%d\n", var, arr_s[var]);
      }
    return 0;
}
