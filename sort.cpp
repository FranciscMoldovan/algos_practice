#include <sort.h>
#include <string.h>
#include <stdlib.h>
void swap_elems (int*a, int*b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}
void selection_sort(int array[], size_t size)
{
    for (int i = 0; i < size-1; ++i)
    {
        for (int j = i+1; j < size; ++j)
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
      while (j>=0 && array[j] > key)
      {
          array[j+1] = array[j];
          j--;
      }
      array[j+1] = key;
    }
}
void bubble_sort(int array[], size_t size)
{
    for (int i = 0; i < size-1; ++i)
    {
        for (int j = 0; j < size-i-1; ++j )
        {
            if(array[j] > array[j+1])
            {
                swap_elems(array+j, array+j+1);
            }
        }
    }
}
// Merges two subarrays of arr[]
// First subarray is arr[l, m]
// Second subarray is arr[m+1, r]
void merge(int arr[], int l, int m, int r)
{
    int len_l = m-l+1;
    int len_r = r-m;

    // Create the temporary arrays
    int arr_l[len_l];
    int arr_r[len_r];

    // Copy the data into the arrays arr_l and arr_r
    memcpy(arr_l, arr+l, len_l*sizeof(int));
    memcpy(arr_r, arr+m+1, len_r*sizeof(int));

    // Merge the temp arrays back into arr[l..r]
    int i = 0; // Init idx of left subarray
    int j = 0; // Init idx of right subarray
    int k = l; // Initial index of merged subarray
    while (i < len_l && j < len_r)
    {
        if (arr_l[i] < arr_r[j])
        {
            arr[k] = arr_l[i];
            i++;
        }
        else
        {
            arr[k] = arr_r[j];
            j++;
        }
        k++;
    }
    // Copy remains from longer array
    while (i<len_l)
    {
        arr[k] = arr_l[i];
        i++;
        k++;
    }
    while (j<len_r)
    {
        arr[k] = arr_r[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l) / 2;
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}
void maxHeapify(struct MaxHeap* maxHeap, int idx)
{
    int largest = idx;
    int left  = (idx << 1) + 1;// 2*i+1
    int right = (idx +  1) << 1; // 2*i+2
    // Check if left child exists and is greater
    if (left < maxHeap->size && *(maxHeap->array+left) > *(maxHeap->array+largest))
        largest = left;
    if (right < maxHeap->size && *(maxHeap->array+right) > *(maxHeap->array+largest))
        largest = right;
    // Change root if needed
    if (largest != idx)
    {
        swap_elems(maxHeap->array+largest, maxHeap->array+idx);
        maxHeapify(maxHeap, largest);
    }
}
struct MaxHeap* createAndBuildHeap(int *array, int size)
{
    int i;
    struct MaxHeap* maxHeap = (struct MaxHeap*)malloc(sizeof(struct MaxHeap));
    maxHeap->array = array;
    maxHeap->size = size;

    // Start from bottommost and rightmost internal node and heapify all
    // internal nodes in bottom up way
    for(i=(maxHeap->size-2)/2; i>=0; i--)
        maxHeapify(maxHeap, i);
    return maxHeap;
}
void heapSort(int* array, int size)
{
    // Build a max heap from the input data
    struct MaxHeap* maxHeap = createAndBuildHeap(array, size);

    while(maxHeap->size > 1)
    {
        swap_elems(maxHeap->array, maxHeap->array+maxHeap->size-1);
        maxHeap->size--;

        maxHeapify(maxHeap, 0);
    }
}










