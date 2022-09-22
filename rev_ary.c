#include <stdio.h>
#include "length.h" // defines length of an array

void print_reverse(int array[], int length)
{
    for (int i = length; i>=0; --i)
        printf("%d\n", array[i]);
}

int main(int argc, char*argv[])
{
    int a[] = {5,6,7,8,9};
    int b[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};

    print_reverse(a, LENGTH(a));
    print_reverse(b, LENGTH(b));
    
    return 0;
}