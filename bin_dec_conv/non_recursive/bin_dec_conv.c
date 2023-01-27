// Non-recursive decimal to binary converter

#include <stdio.h>

void decToBin(int n); // Function that prints binary conversion.

int main(int argc, char* argv[])
{
    int users_number = 0;
    
    printf("\nEnter an integer: ");
    if (scanf(" %d", &users_number) != 1)
        printf("\nFailed to read integer!");
    
    decToBin(users_number);
    printf("\n");
    
    return 0;
}

void decToBin(int n)
{
    // Declare and fill array (will be backwards):
    int binary[32] = {0};
    int i=0; // Re-use this counter when printing
    for (; n > 0; ++i, n /= 2)
        binary[i] = n % 2;

    // Print array in reverse order:
    for (int j=i-1; j >= 0; --j)
        printf("%d", binary[j]);    
}


