#include <stdio.h>

int main() {

    int a, b;

    printf("enter two number:\n");

    scanf("%d %d", &a, &b);

    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a/b);
    printf("%d\n", a*b);
    printf("%d\n", a%b);

    return 0;

}