#include <stdio.h>
#include <math.h>

double cmToInch(const double n);
double inchToCm(const double n);

int main(int argc, char* argv[])
{
    double user_input = 0;

    printf("\nEnter length in cm: ");
    if (scanf(" %lf", &user_input) != 1)
        printf("\nFailed to read input!\n");

    printf("\n%.2lf cm\t=\t%.2lf inches", user_input, cmToInch(user_input));

    printf("\nEnter length in inches: ");
    if (scanf(" %lf", &user_input) != 1)
        printf("\nFailed to read input!\n");

    printf("\n%.2lf inches\t=\t%.2lf cm", user_input, inchToCm(user_input));

    printf("\n");
    return 0;
}

double cmToInch(const double n)
{
    return n*0.393700787;
}

double inchToCm(const double n)
{
    return (n*2.54)*100.0/100.0; // Round to the nearest hundredth!
}