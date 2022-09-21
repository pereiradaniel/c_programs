#include <stdio.h>
void cDown(int input);
void cUp(int input);

int main()
{
    // Counts down from a user-input number.
    int num=0;
    // short int big_int = 2147483649;
    
    do {
        printf("Enter a positive whole number: ");
        scanf("%d", &num);
    } while (num > 2147483647 || num <= (-2147483647));

    if (num >0)
    {
        cDown(num);
    }
    else if (num <0)
    {
        cUp(num);
    }
    
    return 0;
}

void cDown(int input){
    for (int i=input; i>=0; --i)
        printf("%d\n",i);
        return;
};

void cUp(int input){
    for (int i=input; i<=0; ++i)
        printf("%d\n",i);
        return;
};