#include <stdio.h>
#include <stdlib.h> // malloc
int main()
{
    int *a; // declare a pointer to a dynamically allocated array
    int length = 0;

    printf("Enter a length: ");
    scanf("%d", &length);

    // allocate space dynamically
    a = malloc(length * sizeof(int)); // allocates space on the heap
    
    printf("a: %p\n", a);

    for (int i=0; i<length; ++i)
        a[i] = i;
    
    for (int i=0; i<length; ++i)
        printf("a[%d]=%d\n", i, a[i]);

    free(a); // deallocate memory

    return 0;
}

// ==320== Memcheck, a memory error detector
// ==320== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
// ==320== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
// ==320== Command: ./a.out
// ==320==
// Enter a length: 5
// a: 0x4a4e8c0
// a[0]=0
// a[1]=1
// a[2]=2
// a[3]=3
// a[4]=4
// ==320== 
// ==320== HEAP SUMMARY:
// ==320==     in use at exit: 0 bytes in 0 blocks
// ==320==   total heap usage: 3 allocs, 3 frees, 2,068 bytes allocated
// ==320==
// ==320== All heap blocks were freed -- no leaks are possible
// ==320==
// ==320== For lists of detected and suppressed errors, rerun with: -s
// ==320== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)