// Basic demonstration of nested for loops.
#include <stdio.h>
int main(int argc, char* argv[])
{
    // Outer loop will run until i equals 3
    // (three times if starting at 0)
    for (int i=0; i<3; ++i)
    {
        printf("\ti = %d\n", i);
        
        // Nested loop will until j equals 6
        // (three times if starting at 9)
        for (int j=9; j>6; --j)
            printf("\t\tj = %d\n", j);
    }

    return 0;
}