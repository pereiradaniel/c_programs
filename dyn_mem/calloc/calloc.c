// Dynamic Memory Allocation - calloc
// ----------------------------------
// This program accepts user input to create a dynamic array of ints.
// calloc zeroes the space first!

#include <stdio.h>
#include <stdlib.h> // calloc!

int main(int argc, char* argv[])
{
    // Prompt user for number of ints for dynamic memory allocation:
    int num_ints = 0;
    printf("This program will dynamically allocate memory for an array of ints.\nHow many ints would you like? ");
    scanf(" %d", &num_ints);

    // Create a dynamically allocated array of integers using user input:
    int *a = calloc(num_ints, sizeof(int));

    // Displays zeroed data first:
    printf("Using calloc zeroes all the data first:\n");
    for (int i=0; i<num_ints; ++i)
        printf("a[%d] = %d\n", i, a[i]);
    printf("\n"); // new line!

    // Use for loop to assign values to the int array a.
    for (int i=0; i<num_ints; ++i)
        a[i] = i;

    // Use for loop to print contents of array a.
    printf("After the ints have been assigned:\n");
    for (int i=0; i<num_ints; ++i)
        printf("a[%d] = %d\n", i, a[i]);
    printf("\n"); // new line!

    printf("a: %p\n", a); // Prints memory location of a.
    
    int *save = a; // Save memory location to ptr a!
    free(a); // Deallocate memory!
    
    // Display contents of memory locations that were free'd.
    // free() does not delete data, it simply frees it for use again, therefore some data will remain.
    printf("save: %p\n", save); // Prints memory location of save.
    // Display memory after using free:
    for (int i=0; i<num_ints; ++i)
        printf("save[%d] = %d\n", i, save[i]);
    printf("\n"); // new line!

    return 0;
}
