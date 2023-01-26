// Convert decimal to binary using a recursive function.
#include <stdio.h>
int decToBin(const int number);
int main(int argc, char* argv[])
{
    int users_number = 0;
    // Get user input:
    printf("\nEnter an integer: ");
    if (scanf(" %d", &users_number) != 1)
        printf("\nFailed to read integer!");
    
    int binary = decToBin(users_number);

    printf("\n%d = %d\n", users_number, binary);

    return 0;
}

int decToBin(const int number)
{
    int result = 0;
    if (number != 0)
        result = (number % 2) + 10 * decToBin(number / 2);
    return result;

}