#include <stdio.h>

int main() {

    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int total = a+b+c+d;
    int result = total/5;

    printf("Total of 5 subject is %d\n", total);

    printf("Average of 5 subject is %d\n", result);

    return 0;

}