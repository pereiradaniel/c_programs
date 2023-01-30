// Convert decimal to binary or binary to decimal
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

void binToDec(int n); // Convert binary to decimal
void decToBin(int n); // Convert decimal to binary

int main(int argc, char* argv[])
{
    int users_number = 0;   // Number to convert
    int choice = 0;         // Selects binary or decimal conversion
    bool main_loop = true;  // Breaks main loop on choice
    char repeat = 'Y';      // User repeats program

    // Print program heading:
    printf("\nBinary to decimal converter\n");
    printf("\n---------------------------\n");

    while (main_loop)
    {
        // Ask user to convert decimal or binary number:
        while(choice < 1 || choice > 2)
        {
            printf("\nConvert a decimal or binary number?\n\t1 - Decimal\n\t2 - Binary\n");
            if (scanf(" %d", &choice) != 1)
                printf("\nFailed to read integer!");
            
            if (choice < 1 || choice > 2)
                printf("\nSelection is out of bounds! Choose 1 or 2.\n");
        }

        // Get user's number to convert, display correct prompt:
        printf("\nEnter %s: ", (choice == 1 ? "an integer": "a binary number"));
        if (scanf(" %d", &users_number) != 1)
            printf("\nFailed to read integer!");

        // Choose conversion method:
        if (choice == 1)            // Decimal to binary selected
            decToBin(users_number);
        else if (choice ==2)        // Binary to decimal selected
            binToDec(users_number);

        // Ask user to repeat program:
        printf("\nAgain? (Y/N)\n");
        if (scanf(" %c", &repeat) != 1)
            printf("\nFailed to read char!");
        
        // If user input is anything other than Y then exit loop.
        if (toupper(repeat) != 'Y')
            main_loop = false;
        else if (toupper(repeat) == 'Y')
        {
            users_number = 0;
            choice = 0;
        }
    }
    // End program:
    return 0;
}

void binToDec(int n)
{
    int result = 0;

    for (int i=0; n > 0; ++i, n /= 10)
        result += (n%10) * pow(2,i);

    printf("%d\n", result);
}
void decToBin(int n)
{
    // Declare and fill array (will be backwards):
    int binary[32] = {0};
    int i=0;
    for (; n > 0; ++i, n /= 2)
        binary[i] = n % 2;

    // Print array in reverse order:
    for (int j=i-1; j >= 0; --j)
        printf("%d", binary[j]);
    
    printf("\n");
}
