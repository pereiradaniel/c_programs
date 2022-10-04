#include <stdio.h>
int main(int arg, char* argv[])
{
    int b = 42;

    // Make int *a point to b;
    int *a = &b;

    printf(" b: %d\n", b);  // value stored by b: 42
    printf("&b: %p\n", &b); // mem address for b
    printf(" p: %p\n", a);  // mem address for b

    return 0;
}