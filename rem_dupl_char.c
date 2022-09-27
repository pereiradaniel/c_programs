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