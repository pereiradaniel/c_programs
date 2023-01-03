// Using scanf to assign more than one variable:
#include <stdio.h>

int main(int argc, char* argv[])
{
    int num = 0;
    double dec = 0;

    printf("\nEnter an integer and then a decimal number (assigned to a double):\n");
    printf("Example input: 4 5.6\n");

    scanf(" %d%lf", &num, &dec);
    
    // If a decimal number is entered for the integer, there will be narrowing.
    printf("\nInteger was: %d, and Double was: %lf.\n", num, dec);

    return 0;
}