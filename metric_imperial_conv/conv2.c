#include <stdio.h>

double cmToInch(const double *n); // Converts cm to inches
double inchToCm(const double *n); // Converts inches to cm

int main(int argc, char* argv[])
{
    double user_input = 0;  // User's number to convert
    int choice = 0;         // User's menu selection
    int main_loop = 1;      // Main program loop

    // Main loop
    while (main_loop == 1)
    {
        // Main menu:
        while (choice < 1 || choice > 2)
        {
            printf("\nMetric to Imperial Conversion");
            printf("\n=============================");
            printf("\n\t1\tConvert cm to inches:");
            printf("\n\t2\tConvert inches to cm:");
            printf("\n\n");
            
            if (scanf(" %d", &choice) != 1)
            {
                printf("\nFailed to read input!\n");
                goto end; // EXIT!
            }
            
            if (choice < 1 || choice > 2)
                printf("\nChoose an option between 1 and 2!\n");
        }

        // Select conversion method chosen by user:
        if (choice == 1) // Convert cm to inches
        {
            printf("\nEnter length in cm: ");
            if (scanf(" %lf", &user_input) != 1)
                printf("\nFailed to read input!\n");

            printf("\n%.2lf cm    \t=\t%.2lf inches", user_input, cmToInch(&user_input));
        }

        if (choice == 2) // Convert inches to cm
        {
            printf("\nEnter length in inches: ");
            if (scanf(" %lf", &user_input) != 1)
                printf("\nFailed to read input!\n");

            printf("\n%.2lf inches\t=\t%.2lf cm", user_input, inchToCm(&user_input));
        }

        if (choice < 1 || choice > 2)
        {
            printf("\nError!");
        }

        // Ask user to repeat
        printf("\nRepeat program? 1 yes 2 no: ");
        if (scanf(" %d", &main_loop) != 1)
            printf("\nFailed to read input!\n");
        
        // Reset vars before repeating program:
        if (main_loop == 1)
         choice = 0, user_input = 0;
    }

    end:
    printf("\n");
    return 0;
}

double cmToInch(const double *n)
{
    return (*n)*0.393700787;
}

double inchToCm(const double *n)
{
    return (*n)*2.54;
}