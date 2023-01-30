// String in char array vs ptr to string literal.
#include <stdio.h>
int main()
{
    // "abc" string literal with a null terminator
    // can be used to initialized char arrays to store a string
    
    char s1[] = "abc"; // this exists on the stack!
    s1[0] = 'A';
    printf("s1: %s\n", s1); // What is passed to printf is a ptr to first elem of array
    
    char *s2 = "abc"; // *s2 is a pointer to a character! the first letter
    // Make this a const so that you don't accidentally modify while executing!
    // const char *s2 = "abc"; // *s2 is a pointer to a character! the first letter

    // String can be printed with printf, passed a ptr to first char.
    printf("s2: %s\n", s2);
    // But s2 can not be modified!
    // s2[0] = 'A'; // code 2
    // Trying to modify a place in memory that is not modified.
    // Where string literals are stored is not specified as C standard,
    // or what will happen if you try to modify a string literal.

    // s1 is a char array stored on stack
    // s2 is a ptr to a string literal, stored where we are not sure,
    // and we are not allowed to modify it.
    
    // s2 can use ptr arithmetic
    s2++; // s2 will point to index 1 now
    printf("s2: %s\n", s2); // bc
    // Whole string still exists in memory, but s2 now points to s[1]!
    // s1 will act more like a constant ptr
    // Because it is a character array, you can not just
    // assign a new string to it. Unless you use a function
    // like strcpy() from the string library.
    s2 = "New string"; // Another string literal in memory, s2 now points to.
    printf("s2: %s\n", s2);

    printf("sizeof(s1): %d\n", sizeof(s1));
    printf("sizeof(s2): %d\n", sizeof(s2)); // size of ptr on the stack

    return 0;
}