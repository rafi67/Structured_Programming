#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    if(a>b) printf("The maximum number is %d\n", a);
    else printf("The maximum number is %d\n", b);

    return 0;

}