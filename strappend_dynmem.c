// Implement string concatentation with dynamic memory
#include <stdio.h>
#include <string.h> // use strings
#include <stdlib.h> // use calloc

// returns ptr to new string on heap
char *string_append(char* s1, char* s2)
{
    // make space for new string on the heap that can store s1 and s2
    // get lengths of s1 and s2 using strlen
    int s1l = strlen(s1); // Returns string length - null terminator
    int s2l = strlen(s2);
    int size = s1l + s2l + 1; // +1 for null terminator!
    // allocate space
    char *s = calloc(size, sizeof(char));
    
    // copy chars from s1 into s
    for (int i =0; i < s1l; ++i)
        s[i] = s1[i];
    
    // copy chars from s2 into s
    for (int i=0; i < s2l; ++i)
        s[s1l + i] = s2[i]; // s1l + i to shift over index!
    
    // insert null terminator
    s[size - 1] = '\0';

    return s;
}

int main(int argc, char* argv[])
{
    char a[] = "abcde";
    char b[] = "fghij";

    char *s = string_append(a, b);
    printf("s: %s\n", s);

    // deallocate memory for s
    free(s);

    return 0;
}

// ==160== Memcheck, a memory error detector
// ==160== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
// ==160== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
// ==160== Command: ./a.out
// ==160== 
// s: abcdefghij
// ==160== 
// ==160== HEAP SUMMARY:
// ==160==     in use at exit: 0 bytes in 0 blocks
// ==160==   total heap usage: 2 allocs, 2 frees, 1,035 bytes allocated
// ==160==
// ==160== All heap blocks were freed -- no leaks are possible
// ==160==
// ==160== For lists of detected and suppressed errors, rerun with: -s
// ==160== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)