// Implement merge sort algorithm.
#include <stdio.h>

void merge_sort(int a[], int length);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted_arrays(int a[], int l, int m, int r);

int main(int argc, char* argv[])
{

    int array[] = {9,4,8,1,7,0,3,2,5,6}; // test array
    int length = 10;

    // Call merge_sort with the array and its length
    merge_sort(array, length);
    // Array should be sorted.
    
    // Print array:
    for(int i=0; i < length; ++i)
        printf("%d", array[i]);
     printf("\n");

    return 0;
}

void merge_sort(int a[], int length)
{
    // Call the merge_sort_recursion function to sort array:
    // - Initially we will want to use the whole array.
    merge_sort_recursion(a, 0, length - 1);
}

// Recursive portion of the algorithm:
// - Continually divide unsorted array into smaller and smaller portions.
// - Accepts array, and args to define portion of array to look at.
// int l = left  index of array
// int r = right index of array
void merge_sort_recursion(int a[], int l, int r)
{
    if (l < r) // stop recursion when l >= r
    {
        int m = l+(r-l)/2; // Defines middle of the array!
        merge_sort_recursion(a,l,m);   // call function on left  portion
        merge_sort_recursion(a,m+1,r); // call function on right portion

        merge_sorted_arrays(a,l,m,r);
    }

}

void merge_sorted_arrays(int a[], int l, int m, int r)
{
    // Program needs the length of each portion of array:
    int left_length = m - l + 1;
    int right_length = r - m;

    // Create two temporary sub-arrays:
    // - Copy portions of a for left and right portions into sub-arrays.

    int temp_left[left_length];
    int temp_right[right_length];

    // Counter vars:
    int i, j, k;

    // Copy portions of array to work with into arrays:
    for (int i=0; i<left_length; ++i)
        temp_left[i] = a[l+i];
    
    for (int i=0; i<right_length; ++i)
        temp_right[i] = a[m+1+i];
    
    // Merge two sorted sub-arrays:
    for (i=0,j=0,k=l; k<=r; ++k) // k is keeping track of place in array a.
    {
        // i keeps track of index of left  array
        // j keeps track of index of right array
        // Find element from left or right portion to add into array.

        // Check that we have not reached end of array, check values
        if((i<left_length) && (j>=right_length) || temp_left[i] <= temp_right[j])
        {
            a[k] = temp_left[i];
            ++i;
        }
        else
        {
            a[k] = temp_right[j];
            ++j;
        }

    }
}