#include <stdio.h>
int main()
{
    int array[5];
    array[2] = 5;
    
    printf("     array: %zu\n", array);     // prints address of first element
    // +1 increases memory addres by size of whatever array points to (1*int value, 4 bytes)
    printf(" array + 1: %zu\n", array + 1); // use ptr arithmetic
    
    printf("    &array: %zu\n", &array);    // prints address of first element
    // +1 will increase mem address by the size of whatever &array points to (5*int values, 20 bytes)
    printf("&array + 1: %zu\n", &array + 1);

    // &array -> ptr to entire array
    // array -> ptr to first element

    // make a 2d array
    int matrix[3][5] =
    {
        {0,1,2,3,4},
        {5,6,7,8,9},
        {10,11,12,13}
    };


    printf("        matrix[1]: %zu\n", matrix[1]);           // ptr to first element of 2nd row of 2d array
    printf("    matrix[1] + 1: %zu\n", matrix[1] + 1);       // address will be 4 bytes more
    printf(" *(matrix[1] + 1): %zu\n", *(matrix[1] + 1));    // dereference (returns value of 6)
    
    printf("       &matrix[1]: %zu\n", &matrix[1]);          // ptr to the second row in 2d array
    printf("   &matrix[1] + 1: %zu\n", &matrix[1] + 1);      // + 5 * 4 bytes(int) = 20 bytes
    printf("*(&matrix[1] + 1): %zu\n", *(&matrix[1] + 1));   // cannot dereference &matrix[1]

    // Compiler recognizes type mismatch and generates warning. Use typecast to get rid.
    // array_ptrs.c:36:20: warning: initialization of ‘int *’ from incompatible pointer type ‘int (*)[5]’ [-Wincompatible-pointer-types]
    //    36 |     int *pointer = &matrix[1] + 1;
    // int *pointer = &matrix[1] + 1;
    int *pointer = (int*)(&matrix[1] + 1);
    
    printf("pointer: %zu\n", pointer);
    printf("*pointer: %zu\n", *pointer);

    return 0;
}