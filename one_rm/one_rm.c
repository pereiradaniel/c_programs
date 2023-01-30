//  Based on user input, calculate and output a scale of 50%-90% of 1RM
#include <stdio.h>
int main(int argc, int argv[])
{
    double onerm = 0; // stores user input for one rep max
    
    printf("Enter your one rep max: \n");
    scanf("%lf", &onerm);
    
    for (int i=5; i <= 9; ++i) // Loop from 50% to 90% of one rep max
        printf("%.2f%% = %.2f lbs\n", i*0.1*100, i*0.1*onerm);

    return 0;
}
