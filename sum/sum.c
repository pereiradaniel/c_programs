// Summing an int array.

#include <stdio.h>
#include "../length.h"

int main(int argc, char* argv)
{
    int sum = 0;
    int nums[] = {1,1,1};

    for (int i = 0; i < LENGTH(nums); ++i)
        sum = sum + nums[i];

    printf("\nSum total = %d\n", sum);
    
    return 0;
}