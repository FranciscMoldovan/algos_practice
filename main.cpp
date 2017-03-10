#include <iostream>
#include <search.h>

#define LEN 10;

typedef struct
{
    unsigned char a;
    unsigned int b;
    unsigned int c;
    unsigned char d;
} myStruct;


size_t get_offset(myStruct my_struct, )
{

}

int main(int argc, char *argv[])
{

    size_t size = LEN;
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

//    size_t res = binary_search (arr, 0, 10, 7);

//    size_t res = binary_s(arr, LEN, 5);



    size_t offset = (size_t)(&(((myStruct *)0)->c));
    printf ("offset of c is: %d\n", offset);

    return 0;
}
