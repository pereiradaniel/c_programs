#include <stdio.h>
// Pass by reference swap function
void swap(int *a, int*b)
{
    printf("a: %p\nb: %p\n", a, b);
    printf("*a: %d\n*b: %d\n", *a, *b);
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char* argv[])
{
    // int a,b,c;
    // a=b=c=0;

    // printf("Enter 3 numbers: ");
    // scanf("%d %d %d", &a, &b, &c); // pass by reference
    // printf("Result: %d\n", a+b+c);

    int x, y;
    x = 5;
    y = 10;
    
    printf("x: %d, y: %d.\n", x, y);
    printf("&x: %p\n&y: %p\n", &x, &y);
    swap(&x,&y);
    printf("swap! x: %d, y: %d.\n", x, y);

    return 0;
}