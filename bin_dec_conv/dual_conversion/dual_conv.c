// Convert decimal to binary or binary to decimal

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

void binToDec(int n);
void decToBin(int n);

int main(int argc, char* argv[])
{
    int users_number = 0;
    int choice = 0;
    bool main_loop = true;
    char repeat = 'Y';

    while (main_loop)
    {
        // Print program heading:
        printf("\nBinary to decimal converter\n");
        printf("\n---------------------------\n");

        // Ask user to convert decimal or binary number:
        while(choice < 1 || choice > 2)
        {
            printf("\nConvert a decimal or binary number?\n\t1 - Decimal\n\t2 - Binary\n");
            if (scanf(" %d", &choice) != 1)
                printf("\nFailed to read integer!");
        }

        printf("\nEnter %s: ", (choice == 1 ? "an integer": "a binary number"));
        if (scanf(" %d", &users_number) != 1)
            printf("\nFailed to read integer!");


        if (choice == 1) // Decimal to binary selected
        {
            // printf("\nEnter an integer: ");
            // if (scanf(" %d", &users_number) != 1)
            //     printf("\nFailed to read integer!");
            
            decToBin(users_number);
        }
        else if (choice ==2) // Binary to decimal selected
        {
            // printf("\nEnter a binary number: ");
            // if (scanf(" %d", &users_number) != 1)
            //     printf("\nFailed to read integer!");

            binToDec(users_number);
        }

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

    

    return 0;
}

void binToDec(int n)
{
    int result = 0;

    for (int i=0; n > 0; ++i)
    {
        result += (n%10) * pow(2,i);
        n /= 10;
    }
    printf("%d\n", result);
}
void decToBin(int n)
{
    // Declare and fill array (will be backwards):
    int binary[32] = {0};
    int i=0;
    for (; n > 0; ++i)
    {
        binary[i] = n % 2;
        n /= 2;
    }

    // Print array in reverse order:
    for (int j=i-1; j >= 0; --j)
        printf("%d", binary[j]);
    
    printf("\n");
}


