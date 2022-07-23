#include <stdio.h>

int main() {

    double length;

    printf("enter a length in centimeter:\n");
    scanf("%lf", &length);

    printf("Centimeter to Meter %.3lf\n", length/100);
    printf("Centermeter to Kilometer %.3lf\n", length/100000);

    return 0;

}