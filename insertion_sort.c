// Implement an insertion sort
#include <stdio.h>
#include "length.h"

void insertion_sort(int a[], int length);

int main(int argc, char* argv[])
{
    int a[] = {8,4,9,5,7,6,3,2};
    insertion_sort(a,LENGTH(a));
    for (int i = 0; i<LENGTH(a); ++i)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;

}

void insertion_sort(int a[], int length)
{
    for (int i = 1; i < length; ++i) // no need to sort 0 elem, so i=1
    {
        int key = a[i]; // keep track of curr elem
        int j = i - 1;

        // as long as a[j] >, keep shifting elems
        while(j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j = j-1;
        }

        // Insert value at correct locn
        a[j+1] = key;
    }
}