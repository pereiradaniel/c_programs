// Concatenate two arrays into a new 3rd array
#include <stdio.h>
#include <stdlib.h> // use malloc and free
#include <string.h> // memcopy
#include "length.h"
// Function returtns pointer to an int:
//   - Because space will by dynamically alloc to the heap
//     for the new array!
//   - Function will return a pointer to that array
//     on the heap!

// In C, when an array is passed to a function, what is
// really passed is a pointer to that array. What is
// being passed is the first elem of the array.
int* concat(int* a1, size_t len1, int *a2, size_t len2);

int main (int argc, char* argv[])
{

    // Initialize two arrays:
    int array1[] = {0,1,2,3,4};
    int array2[] = {5,6,7,8,9};

    // Store the pointer returned by concat.
    int* array3 = concat(array1, LENGTH(array1), array2, LENGTH(array2));

    for (int i = 0; i < 10; ++i)
    {
        printf("array3[%d] = %d\n", i, array3[i]);
    }
    printf("\n");

    // Free memory!
    free(array3);

    return 0;
}

int* concat(int* a1, size_t len1, int *a2, size_t len2)
{
    // Dynamically allocate memory for new array, use malloc to dyn allocate space:
    int* new_array = malloc(sizeof(int) * (len1+len2));

    // Malloc will return a pointer (mem address) for a block of memory allocated
    // for the new array. That pointer is stored in 'new_array'.

    // Copy values from 1st array and then 2nd array.
    // Use memcopy.
    memcpy(new_array, a1, sizeof(int) * len1); // copy from a1 to new_array
    // Store at end of a1 data inside of new_array!
    // Use pointer arithmetic!
    memcpy(new_array + len1, a2, sizeof(int) * len2); // copy from a2 to new_array

    return new_array; // return new_array pointer
}