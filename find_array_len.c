// Use the size of operator to get the array length.
#include <stdio.h>
#include <stdlib.h>
#include "length.h" // defines length of an array

#define SIZE 9 // use a pre-processor directive to store the size of the array

void print_size(int array[])
{
    int length = sizeof(array) / sizeof(array[0]);
    printf("LENGTH: %d\n", length);
}

int main(int argc, char *argv[])
{

    // const int size = 9; // use a const to store the size of the array
    int array[SIZE] = {1,2,3,4,5,6,7,8,9};

    // sizeof queries size of the object type: https://devdocs.io/c/language/sizeof

    // Different ways to calculate the length of the array:
        // int length = sizeof(array) / sizeof(int);
        // int length = sizeof(array) / sizeof(array[0]);
    int length = LENGTH(array);

    printf("length of array: %d\n", length);
    printf("sizeof(array), number of bytes used to store the array: %d\n", sizeof(array));
    printf("sizeof(array[0]), the number of bytes to store element[0] of the array: %d\n", sizeof(array[0]));
    printf("sizeof(int): %d\n", sizeof(int));

    // loop through the array, printing the elements to the screen:
    for (int i = 0; i < LENGTH(array); ++i)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // dynamically allocate space for an array of 100 values. this is a pointer to the array on the heap
    // sizeof(dynamic_array) will output the size of the POINTER

    int *dynamic_array = malloc(sizeof(int) * 100);

    printf("sizeof(dynamic_array): %d\n", sizeof(dynamic_array)); // 8 bytes, size of pointer to an int
    
    int dynamic_length = LENGTH(dynamic_array); // pointer to array is passed!

    printf("dynamic_length: %d\n", dynamic_length);
    free(dynamic_array); // free the memory so no memory leak

    print_size(array);

    return 0;
}