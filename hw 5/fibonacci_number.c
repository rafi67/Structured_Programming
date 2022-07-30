#include <stdio.h>

int fibonacci(int n) {
    int a[39];
    
    a[0] = 0;
    a[1] = 1;

    for(int i=2; i<39; ++i) {
        a[i] = a[i-1]+a[i-2];
    }

    for(int i=0; i<39; ++i) {
        if(a[i]>n) break;
        printf("%lld ", a[i]);
    }
}

int main() {

    int n;

    scanf("%d", &n);

    fibonacci(n);

    return 0;

}