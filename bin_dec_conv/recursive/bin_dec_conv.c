// Convert decimal to binary using a recursive function.

#include <stdio.h>

int decToBin(const int number); // Returns binary conversion.

int main(int argc, char* argv[])
{
    int users_number = 0;   // Number to convert.

    // Get user input:
    printf("\nEnter an integer: ");
    if (scanf(" %d", &users_number) != 1)
        printf("\nFailed to read integer!");
    
    // Convert to binary:
    int binary = decToBin(users_number);

    // Output result:
    printf("\n%d = %d\n", users_number, binary);

    return 0;
}

int decToBin(const int number)
{
    int result = 0; // Default is zero. (Prevents division by 0).

    // If number is not 0, perform conversion.
    if (number != 0)
        result = (number % 2) + 10 * decToBin(number / 2);
    
    return result;
}