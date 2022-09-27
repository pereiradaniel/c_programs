// Truncate a dynamically allocated string.

#include <stdio.h>
#include <stdlib.h> // realloc, malloc, free - Used for dynamically allocated memory!
#include <string.h> // use strcpy to store a string into dynamically allocated memory!

int main(int argc, char* argv[])
{
    // Declare char ptr variable, use malloc to allocate enough space for the string:
    char *string = malloc(44); // stores ptr (mem addr) returned by malloc

    // Use str_cpy to store string into block of memory:
    strcpy(string, "Ave, María, grátia plena, Dóminus tecum.");
  
    printf("before: %s\n", string);    
    string[11] = '\0';  // insert null terminator at 11
    printf("after: %s\n", string);

    // Use realloc to resize dynamic memory:
    string = realloc(string, 11+1); // Reallocates space for block of memory storing string.

    // * It is possible that realloc picks a new place in memory,
    // that is why realloc returns a ptr.
    // Store the new memory address in string!

    // Call free to free block of memory:
    free(string);

    return 0;
}