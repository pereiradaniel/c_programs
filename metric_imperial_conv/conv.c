#include <stdio.h>

double cmToInch(const double *n);

int main(int argc, char* argv[])
{
    double user_input = 0;

    printf("\nEnter length in cm: ");
    if (scanf(" %lf", &user_input) != 1)
        printf("\nFailed to read input!\n");

    printf("\n%.2lf cm = %.2lf inches", user_input, cmToInch(&user_input));

    printf("\n");
    return 0;
}

double cmToInch(const double *n)
{
    return (*n)*0.393700787;
}