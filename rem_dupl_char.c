// Remove duplicate chars from a string.
#include <stdio.h>
#include <string.h> // Use string length function to find length of a string.
// Create a function that removes duplicate chars after their first appearance in a string.
void rem_dup(char* string)
{
    // Find length of string:
    int length = strlen(string); // Returns length of str NOT including NULL term!!!

    // Use nested loops:
    // Outermost loop - Examines string one char at a time until length is reached.
    for (int i=0; i < length; ++i)
    {
        // Next loop checks to see if any other chars match the one at i:
        for (int j=i+1; j < length; ) // j is not incremented here! in case char at j needs removal
        {
            if (string[i] == string[j]) // Checks for dupl char
            {
                // Remove duplicate char from string:
                // Pull forward all remaining chars by 1 index.
                for (int k=j; k < length; ++k)
                    string[k] = string[k+1];
                --length; // decrement length by 1 to reflect size minus 1 char
            }
            else ++j; // Only increment j if char at index j was not a duplicate!
        }
    }

};

int main(int argc, char* argv[])
{
    // Create a test string:
    char s[] = "DDDDIIIIOOOODDDDDDD"; // A string with duplicate characters.

    printf("%s\n", s);
    rem_dup(s);
    printf("%s\n", s);


    return 0; // Exit
}

// VALGRIND RESULTS:

// ==194== Memcheck, a memory error detector
// ==194== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
// ==194== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
// ==194== Command: ./a.out
// ==194==
// DDDDIIIIOOOODDDDDDD
// DIO
// ==194== 
// ==194== HEAP SUMMARY:
// ==194==     in use at exit: 0 bytes in 0 blocks
// ==194==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
// ==194==
// ==194== All heap blocks were freed -- no leaks are possible
// ==194==
// ==194== For lists of detected and suppressed errors, rerun with: -s
// ==194== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
