#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y)
{
    bool swapped = false;
    // compares and swaps if necessary
    while (*x > *y)
    {
        printf("Comparing %d and %d\n", *x, *y);
        int temp = *y;
        *y = *x;
        *x = temp;
    }
    return;
}

void bubble_sort(int a[], int length)
{
    bool swapped = false;
    int i = 0;
    do {
        swapped = false;
        for (int j = 0; j < length - 1 - i; ++j)
        {
            swap(&a[j], &a[j+1]);
            swapped = true;
        }
        ++i;
    } while (swapped);
}

void display(int x[], int length)
{
    for (int i=0; i < length; ++i)
        printf("%d\n", x[i]);
}

int main()
{
    int a[] = {7,1,3,9,0,2,4,5,8};
    int b[] = {12,345,12,456,23,34,546,2,34,5,92,74,2829,4729,273,84721,372};
    int length = sizeof(a) / sizeof(int);

    bubble_sort(a, length);
    bubble_sort(b, sizeof(b) / sizeof(int));

    display(a, length);
    display(b, sizeof(b) / sizeof(int));

    return 0;
}