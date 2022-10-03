// Calculate the perimeter of a rectangle using user input.
#include <stdio.h>

//  Returns the perimeter of a rectangle.
double rect_perim(double l, double w)
{
    return 2*(l+w);
}

int main(int arg, char* argv[])
{
    double length, width; // perimeter;
    printf("Length: ");
    scanf("%lf", &length);
    printf("Width: ");
    scanf("%lf", &width);
    // perimeter = rect_perim(length, width);
    printf("Perimeter: %.2f\n", rect_perim(length, width));

    return 0;
}

// ==132== Memcheck, a memory error detector
// ==132== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
// ==132== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
// ==132== Command: ./a.out
// ==132==
// Length: 25
// Width: 15
// Perimeter: 80.00
// ==132==
// ==132== HEAP SUMMARY:
// ==132==     in use at exit: 0 bytes in 0 blocks
// ==132==   total heap usage: 2 allocs, 2 frees, 2,048 bytes allocated
// ==132==
// ==132== All heap blocks were freed -- no leaks are possible
// ==132==
// ==132== For lists of detected and suppressed errors, rerun with: -s
// ==132== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)