// Calculate the perimeter of a rectangle using user input.
#include <stdio.h>
int main(int arg, char* argv[])
{
    double length, width, perimeter;
    printf("Length: ");
    scanf("%lf", &length);
    printf("Width: ");
    scanf("%lf", &width);
    perimeter = 2*(length+width);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}

// ==186== Memcheck, a memory error detector
// ==186== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
// ==186== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
// ==186== Command: ./a.out
// ==186==
// Length: 3
// Width: 7
// Perimeter: 20.00
// ==186==
// ==186== HEAP SUMMARY:
// ==186==     in use at exit: 0 bytes in 0 blocks
// ==186==   total heap usage: 2 allocs, 2 frees, 2,048 bytes allocated
// ==186==
// ==186== All heap blocks were freed -- no leaks are possible
// ==186==
// ==186== For lists of detected and suppressed errors, rerun with: -s
// ==186== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)