// calc2.c
//  - Add main loop repeat.
// Calculator program

#include <stdio.h>
#include <math.h>   // sqrt(), on linux add -lm to end of compile args (cc file.c -lm)
#include <ctype.h>  // toupper()

int main(int argc, char* argv[])
{
    int choice = 0; // Menu selection.
    double a = 0;   // First number.
    double b = 0;   // Second number.
    char main_loop = 'Y';   // Loop program until != Y

    while (toupper(main_loop) == 'Y')
    {
        // Present user with selection options:
        printf("\nSelect operation: ");
        printf("\n\t1 - Addition");
        printf("\n\t2 - Subtraction");
        printf("\n\t3 - Multiplication");
        printf("\n\t4 - Division (quotient and remainder)");
        printf("\n\t5 - Square root");
        printf("\n");

        while (choice < 1 || choice > 5)
        {
            if (scanf(" %d", &choice) != 1)
                printf("\nFailed to read integer!\n");
            if (choice < 1 || choice > 5)
                printf("\nMenu options are 1-5!\n");
        }

        printf("\nEnter first number: ");
        if (scanf(" %lf", &a) != 1)
            printf("\nFailed to read double!");
        
        if (choice != 5)
        {
            printf("\nEnter second number: ");
            if (scanf(" %lf", &b) != 1)
                printf("\nFailed to read double!");
        }


        // Run user's selection:
        switch(choice) {
            case 1: printf("\n%.2lf + %.2lf = %.2lf", a, b, a+b);
                    break;
            case 2: printf("\n%.2lf - %.2lf = %.2lf", a, b, a-b);
                    break;
            case 3: printf("\n%.2lf * %.2lf = %.2lf", a, b, a*b);
                    break;
            case 4: printf("\n%.2lf / %.2lf = %.2lf, remainder = %d", a, b, a/b, (int)a%(int)b);
                    break;
            case 5: printf("\nSqaure root of %.2lf = %lf", a, sqrt((int)a));
                    break;
            default:
                    break;
        }

        printf("\nRepeat? (Y/N) ");
        if (scanf(" %c", &main_loop) != 1)
            printf("\nFailed to read char!");
        
        if (toupper(main_loop) == 'Y')
        {
            // Reset vars for repeat.
            choice = 0;
            a = 0;
            b = 0;
        }

    }

    printf("\n");
    return 0;
}