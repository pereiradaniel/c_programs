// Counting from zero or counting from one

// This program is intended to demosntrate how to get the correct number of loops
// and avoid the off by one error that can occur.

// More information on off by one:
// http://www.cs.iit.edu/~cs561/cs115/looping/off-by-one.html

#include <stdio.h>
int main(int argc, char* argv[])
{
    printf("\nObjective: Loop three times, printing the counter.\n\n");

    // Starting with i=0 until i<=3 will loop 4 times:
    printf("\nCounting from 0 to 3, zero inclusive counting:\n");
    for(int i=0; i <= 3; ++i)
        printf("i = %d\t", i);

    // Starting with i=1 until i<=3 will loop 3 times:
    printf("\nCounting from 1 to 3, starting at 1:\n");
    for(int i=1; i <= 3; ++i)
        printf("i = %d\t", i);

    // Substituting <= for < will result in 2 loop repeats:
    printf("\nCounting from 1 to 3 incorrectly:\n");
    for(int i=1; i < 3; ++i)
        printf("i = %d\t", i);

    // Counting from zero and looping 3 times requires a comparison to i<3:
    // Note that the counter will be euqal to 2 even though the loop
    // runs 3 times.
    printf("\nLooping 3 times zero inclusive counting:\n");
    for(int i=0; i < 3; ++i)
        printf("i = %d\t", i);

    printf("\nLooping 3 times zero inclusive counting, counting from 1 to 3:\n");
    for(int i=0; i < 3; ++i)
        printf("i = %d\t", i+1);
        
    printf("\n");

    return 0;
}