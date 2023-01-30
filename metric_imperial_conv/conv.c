#include <stdio.h>

int main(int argc, char* argv)
{
    int user_input = 0;
    
    printf("\nEnter length in cm:");
    if (scanf(" %d", &user_input) != 1)
        printf("\nFailed to read integer!\n");

    return 0;
}