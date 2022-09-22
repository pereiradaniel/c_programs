#include <stdio.h>

int main()
{
    int array[] = {5,6,7,8,9};

    for (int i = sizeof(array) / sizeof(array[0])-1; i>=0; --i)
        printf("%d\n", array[i]);
    
    return 0;
}