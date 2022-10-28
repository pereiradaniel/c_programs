// Dynamic Memory Allocation
// -------------------------
// malloc - Used to request a block of data on the heap.
// malloc(num_of_bytes to allocate), returns a pointer.
// Can be used with sizeof().

#include <stdio.h>
#include <stdlib.h> // malloc!

int main(int argc, char* argv[])
{
    // Create a dynamically allocated array of integers.
    int *a = malloc(sizeof(int) * 10); // Allocates space for 10 integers on the heap.

    // Use for loop to assign values to the int array a.
    for (int i=0; i<10; ++i)
        a[i] = 10 - i;

    // Use for loop to print contents of array a.
    for (int i=0; i<10; ++i)
        printf("a[%d] = %d\n", i, a[i]);
    printf("\n"); // new line!

    printf("a: %p\n", a); // Prints memory location of a.

    return 0;
}