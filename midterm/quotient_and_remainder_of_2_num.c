#include <stdio.h>

int main() {

    int a, b;

    printf("Enter 2 number:\n");
    scanf("%d %d", &a, &b);

    printf("Quotient of two number is %f\n", (float) a/b);
    printf("Remainder of two divided number is %d\n", a%b);

    return 0;

}