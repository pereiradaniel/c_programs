// implement selection sort in c
// classic sorting algorithm

#include <stdio.h>
#include "length.h"

int main(int argc, char* argv[]) {

    // Array is unsorted to begin with
    int a[] = {5,9,7,6,4,0,2,3,8,1};
    int length = LENGTH(a);

    for (int i = 0; i < length - 1; ++i) // -1 do not check last element
    {
        // Find index of current smallest element
        int min = i; // assume we have min number at beginning
        for (int j = i + 1; j < length; ++j)
            if (a[j] < a[min]) min = j;

        // Does swap need to occur?
        if (min !=i )
        {
            // Swap it with the element at the current index
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    for (int i = 0; i < length; ++i)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}