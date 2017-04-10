#include <search.h>
size_t linear_search (int array[], int len, int key)
{
    for (size_t i = 0; i < len; ++i)
    {
        if (array[i] == key)
            return i;
            break;
    }
    return -1;
}

size_t binary_search (int array[], int begin, int end, int key)
{
    int mid = (end + begin) / 2;
    if (key == mid) return key;
    else
        if (mid < key)
        {
            binary_search(array, mid, end, key);
        }
        else
        if (mid > key)
        {
            binary_search(array, begin, mid, key);
        }
}
