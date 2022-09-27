// Truncate a dynamically allocated string.

#include <stdio.h>
#include <stdlib.h> // realloc, malloc, free - Used for dynamically allocated memory!
#include <string.h> // use strcpy to store a string into dynamically allocated memory!

// Create a function to truncate the string:
// Returns memory address!
char* dyn_str_trunc(char *string, int n) // ptr to str, number of bytes to alloc
{
    string[n] = '\0';
    return realloc(string, n+1);
}

int main(int argc, char* argv[])
{
    // Declare char ptr variable, use malloc to allocate enough space for the string:
    char *string = malloc(44); // stores ptr (mem addr) returned by malloc

    // Use str_cpy to store string into block of memory:
    strcpy(string, "Ave, María, grátia plena, Dóminus tecum.");
  
    printf("before: %s\n", string);    
    // string[11] = '\0';  // insert null terminator at 11
    string = dyn_str_trunc(string, 11);
    printf("after: %s\n", string);

    // Use realloc to resize dynamic memory:
    // string = realloc(string, 11+1); // Reallocates space for block of memory storing string.

    // * It is possible that realloc picks a new place in memory,
    // that is why realloc returns a ptr.
    // Store the new memory address in string!

    // Call free to free block of memory:
    free(string);

    return 0;
}

// RESULTS OF RUNNING THROUGH VALGRIND:

// $ valgrind ./a.sout

// ==156== Memcheck, a memory error detector
// ==156== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
// ==156== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
// ==156== Command: ./a.out
// ==156==
// before: Ave, María, grátia plena, Dóminus tecum.
// after: Ave, María
// ==156== 
// ==156== HEAP SUMMARY:
// ==156==     in use at exit: 0 bytes in 0 blocks
// ==156==   total heap usage: 3 allocs, 3 frees, 1,080 bytes allocated
// ==156==
// ==156== All heap blocks were freed -- no leaks are possible
// ==156==
// ==156== For lists of detected and suppressed errors, rerun with: -s
// ==156== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)