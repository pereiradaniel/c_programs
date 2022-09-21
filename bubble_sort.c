#include <stdio.h>


void swap(int *x, int *y)
{
    // compares and swaps if necessary
    if (*x > *y)
    {
        printf("Comparing %d and %d\n", *x, *y);
        int temp = *y;
        *y = *x;
        *x = temp;
    }
    return;
}

int main()
{
    int a[] = {7,1,3,9,0,2,4,5,8};

    int length = sizeof(a) / sizeof(int);

    for (int i = 0; i < length; ++i)
        for (int j = 0; j < length - 1; ++j)
            swap(&a[j], &a[j+1]);

    for (int i=0; i<length; ++i)
        printf("%d\n", a[i]);

    return 0;
}