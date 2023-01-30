#include <stdio.h>
int main(int arg, char* argv[])
{
    int b = 42;

    // Make int *a point to b;
    int *a = &b;

    printf(" b: %d\n", b);  // value stored by b: 42
    printf("&b: %p\n", &b); // mem address for b
    printf(" p: %p\n", a);  // mem address for b

    // * allows dereferencing of pointer: Access the value at in the mem address
    // stored at the pointer. Access the data being pointed to.

    *a = 50; // Will set b to 50 because of dereferencing!

    printf(" b: %d\n", b);  // value stored by b: 50
    printf("&b: %p\n", &b); // mem address for b
    printf(" p: %p\n", a);  // mem address for b
 
    return 0;
}