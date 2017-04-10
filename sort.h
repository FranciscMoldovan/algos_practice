#ifndef SORT_H
#define SORT_H
#include <stddef.h>
void selection_sort(int array[], size_t size);
void swap_elems (int*a, int*b);
void insertion_sort(int array[], size_t size);
void bubble_sort(int array[], size_t size);

void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);

//void heapify(int arr[], int dim, int i);
//void heapSort(int arr[], int dim);

struct MaxHeap
{
    int size;
    int *array;
};

void maxHeapify(struct MaxHeap* maxHeap, int idx);
struct MaxHeap* createAndBuildHeap(int *array, int size);
void heapSort(int* array, int size);

#endif // SORT_H
