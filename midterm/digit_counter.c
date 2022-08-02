#include <stdio.h>

int main() {

    int n, count = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);

    while(n!=0) {
        ++count;
        n/=10;
    }

    printf("%d\n", count);

    return 0;

}