#include <stdio.h>
// calculate the area of a triangle
int main(int argc, char *argv[]) {
    double base, height, area;

    printf("Base: ");
    scanf("%lf", &base);

    printf("Height: ");
    scanf("%lf", &height);

    area = 0.5 * base * height;

    printf("Area: %.2f\n", area);

    return 0;
}