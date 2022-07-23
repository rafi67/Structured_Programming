#include <stdio.h>

int fibonacci(int n) {
    if(n==1 || n==0) return n;
    return ((n-1)+(n-2));
}

int main() {

    int n;

    scanf("%d", &n);

    printf("%d\n", fibonacci(n));

    return 0;

}