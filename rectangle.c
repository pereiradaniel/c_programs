#include <stdio.h>
int getArea(int length, int width);

int main(int arg, char *argv[]) {
    // Calculate area with user input
    double length, width, area;

    printf("Length: ");
    scanf("%lf", &length);
    printf("Width: ");
    scanf("%lf", &width);

    printf("Area: %.2f\n", area = getArea(length, width));

    return 0;
}

int getArea(int length, int width) {
    return length * width;
};