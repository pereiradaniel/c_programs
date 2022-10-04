#include <stdio.h>
int main()
{
    int array[5];
    array[2] = 5;
    
    printf(" array: %zu\n", array);  // prints address of first element
    // +1 increases memory addres by size of whatever array points to (1*int value, 4 bytes)
    printf(" array: %zu\n", array + 1); // use ptr arithmetic
    
    printf("&array: %zu\n", &array); // prints address of first element
    // +1 will increase mem address by the size of whatever &array points to (5*int values, 20 bytes)
    printf("&array: %zu\n", &array + 1);

    // &array -> ptr to entire array
    // array -> ptr to first element
    
    return 0;
}