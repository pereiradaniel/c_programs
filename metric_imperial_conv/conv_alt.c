#include <stdio.h>

int main(int argc, char* argv[])
{
    double user_input = 0;

    printf("\nEnter length in cm: ");
    if (scanf(" %lf", &user_input) != 1)
        printf("\nFailed to read input!\n");

    printf("\n%.2lf cm = %.2lf inches", user_input, user_input*0.393700787);

    printf("\n");
    return 0;
}