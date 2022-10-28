// Dynamic Memory Allocation
// -------------------------
// malloc - Used to request a block of data on the heap.
// malloc(num_of_bytes to allocate), returns a pointer.
// Can be used with sizeof().

// This program accepts user input to create a dynamic array of ints.

#include <stdio.h>
#include <stdlib.h> // malloc!

int main(int argc, char* argv[])
{
    // Prompt user for number of ints for dynamic memory allocation:
    int num_ints = 0;
    printf("This program will dynamically allocate memory for an array of ints.\nHow many ints would you like? ");
    scanf(" %d", &num_ints);

    // Create a dynamically allocated array of integers using user input:
    int *a = malloc(sizeof(int) * num_ints);

    // Use for loop to assign values to the int array a.
    for (int i=0; i<num_ints; ++i)
        a[i] = i;

    // Use for loop to print contents of array a.
    for (int i=0; i<num_ints; ++i)
        printf("a[%d] = %d\n", i, a[i]);
    printf("\n"); // new line!

    printf("a: %p\n", a); // Prints memory location of a.
    
    free(a); // Deallocate memory!

    return 0;
}


// ==111== Memcheck, a memory error detector
// ==111== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
// ==111== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
// ==111== Command: ./a.out
// ==111==
// This program will dynamically allocate memory for an array of ints.
// How many ints would you like? 5
// a[0] = 0
// a[1] = 1
// a[2] = 2
// a[3] = 3
// a[4] = 4

// a: 0x4a4e8c0
// ==111== 
// ==111== HEAP SUMMARY:
// ==111==     in use at exit: 0 bytes in 0 blocks
// ==111==   total heap usage: 3 allocs, 3 frees, 2,068 bytes allocated
// ==111==
// ==111== All heap blocks were freed -- no leaks are possible
// ==111==
// ==111== For lists of detected and suppressed errors, rerun with: -s
// ==111== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)