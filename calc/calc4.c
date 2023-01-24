// calc3.c
//  - Add exponent calculation function.
// Calculator program

#include <stdio.h>
#include <math.h>   // sqrt(), on linux add -lm to end of compile args (cc file.c -lm)
#include <ctype.h>  // toupper()

int main(int argc, char* argv[])
{
    const int m_lo = 1; // low menu selection number
    const int m_hi = 6; // high menu selection number
    
    int choice = 0;     // Menu selection.
    double a = 0;       // First number.
    double b = 0;       // Second number.
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
        printf("\n\t6 - Exponent");
        printf("\n");

        // Loop until menu selection is within bounds:
        while (choice < m_lo || choice > m_hi)
        {
            if (scanf(" %d", &choice) != 1)
                printf("\nFailed to read integer!\n");
            if (choice < m_lo || choice > m_hi)
                printf("\nMenu options are 1-5!\n");
        }

        // Select appropriate message for first number entry:
        if (choice == 6)    // Calculating exponent.
            printf("\nEnter base: ");
        else                // Basic two operand operations.
            printf("\nEnter first number: ");

        if (scanf(" %lf", &a) != 1)
            printf("\nFailed to read double!");
        
        // Select appropriate message for second number entry:
        if (choice != 5)    // Exlude single operand operations!
        {
            if (choice == 6)    // Calculating exponent.
                printf("\nEnter exponent: ");
            else                // Basic two operand operations.
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
            case 4:
                    if (a == 0 || b == 0)
                        printf("\nError! Cannot divide by zero. %.2lf / %.2lf", a, b);
                    else
                        printf("\n%.2lf / %.2lf = %.2lf, remainder = %d", a, b, a/b, (int)a%(int)b);
                    break;
            case 5: printf("\nSqaure root of %.2lf = %lf", a, sqrt((int)a));
                    break;
            case 6: printf("\n%.lf**%.lf = %.lf", a, b, pow(a, b));
                    break;
            default:
                    break;
        }

        // Ask user to repeat program:
        printf("\nRepeat? (Y/N) ");
        if (scanf(" %c", &main_loop) != 1)
            printf("\nFailed to read char!");
        
        // Reset vars for repeat.
        if (toupper(main_loop) == 'Y')
        {
            choice = 0;
            a = 0;
            b = 0;
        }
    }
    printf("\n");
    return 0;
}