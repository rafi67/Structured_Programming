#include <stdio.h>

int main() {

    int a[39], n;
    scanf("%d", &n);
    
    a[0] = 0;
    a[1] = 1;
    
    for(int i=2; i<n; ++i) {
        a[i] = a[i-1]+a[i-2];
    }
    
    for(int i=0; i<n; ++i) {
        if(i!=0) a[i] = a[i-1]+a[i];
    }
    
    printf("%d\n", a[n-1]);

    return 0;

}