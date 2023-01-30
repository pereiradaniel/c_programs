#include <stdio.h>
int main(int argc, char* argv[])
{
    int n = -1;     // Set to -1 for do while loop.
    
    printf("\nEnter number from 0-100: \n");    // prompt user for input.

    // Loops until user enters valid input:
    do {
        scanf(" %d", &n);
        n < 0 || n > 100 ? printf("Invalid number! Try again.\n") : printf("Valid!\n");
    } while(n < 0 || n > 100);

    // Detect whether number is less than or greater than 50:
    n > 50 ? printf("Number is greater than 50.\n") : printf("Number is less than 50.\n");

    return 0;
}