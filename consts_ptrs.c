// Illustrate the differences between constant ptr and ptr to a constant
#include <stdio.h>
int main(int argc, char* argv[])
{
    char a = 'a';
    char b = 'b';
    
    char*const const_ptr = &a;     // constant pointer
                                   // can't change what it points to
                                   // can change the value
    *const_ptr = 'x';
    printf("a: %c\n", a);

    char const *ptr_to_const = &a; // pointer to constant
    printf("*ptr_to_const: %c\n", *ptr_to_const); // dereference ptr
    ptr_to_const = &b;
    printf("*ptr_to_const: %c\n", *ptr_to_const); // dereference ptr

    const char *const const_ptr_to_const = &a;
    // can't dereference this pointer because it is a pointer to a constant!
    // can't change what the pointer points to!

    return 0;
}