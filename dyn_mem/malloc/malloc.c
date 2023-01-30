// Dynamic Memory Allocation - malloc
// ----------------------------------
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
