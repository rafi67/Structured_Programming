#include <stdio.h>
#define pi 3.1416

int main() {

    int r;

    printf("Enter value of radius:\n");

    scanf("%d", &r);

    float area_of_circle = pi*r*r;

    float circumference = 2*pi*r;

    printf("Area of cirle = %.2f\n", area_of_circle);
    printf("Circumference of circle = %.2f\n", circumference);

    return 0;

}