#ifndef SORT_H
#define SORT_H
#include <stddef.h>
void selection_sort(int array[], size_t size);
void swap_elems (int*a, int*b);
void insertion_sort(int array[], size_t size);
void bubble_sort(int array[], size_t size);

void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
#endif // SORT_H
