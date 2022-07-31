#include <stdio.h>
#include <math.h>

int main() {

    int number, power;
    printf("Enter number & it's power:\n");
    scanf("%d %d", &number, &power);

    printf("Square of number is %d\n", number*number);
    printf("Power of number is %d\n", (int) pow(number, power));

    return 0;

}