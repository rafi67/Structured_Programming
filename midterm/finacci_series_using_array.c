#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    int a[39];

    a[0] = 0;
    a[1] = 1;

    for(int i=2; i<39; ++i) a[i] = a[i-2]+a[i-1];

    for(int i=0; i<39; ++i) if(a[i]<=n) printf("%d ", a[i]);

    return 0;

}