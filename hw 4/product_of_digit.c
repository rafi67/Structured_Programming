#include <stdio.h>

int main() {

    int n, result = 1;

    scanf("%d", &n);


    while(n!=0) {
        result *= n%10;
        n /= 10;
    }

    printf("%d\n", result);

    return 0;

}