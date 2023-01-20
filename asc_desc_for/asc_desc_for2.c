// A for loop that can go forward or backward.
// Improved undreadable for loop.

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
    bool forward = true;    // Default is forward
    char choice = 'F';      // Default is forward

    char letters[] = {'A','B','C','D'};
    int length = sizeof(letters) / sizeof(letters[0]) - 1; // Used for looping

    printf("\nForward (default) or backward? (f/b) ");
    if (scanf(" %c", &choice) != 1)
        printf("\nFailed to read char!");
    
    if (toupper(choice) == 'B')
        forward = false;
    
    forward == true ? printf("\nForward") : printf("\nBackward");
    printf(" selected.\n");

    // for (int i = (forward == true ? 0 : 10);
    //     (forward == true ? i <= 10 : i >= 0);
    //     (forward == true ? ++i : --i))
    //     printf(" %d", i);

    for (int i = 0; i <= 10; ++i)
        printf(" %d", (forward ? i : 10-i));
    
    printf("\n");

    for (int i = 0; i <= length; ++i)
        printf(" %c", letters[forward ? i : length - i]);
    
    printf("\nComplete.\n");

    return 0;
}