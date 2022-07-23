#include <stdio.h>

int main() {

    int n, c;

    scanf("%d", &n);

    c = 0;

    for(int i=2; i<n; i++) {
        if(n%2==0) {
            c = 1;
            break;
        }
    }

    if(c==1) printf("%d is not a prime number\n", n);
    else printf("%d is a prime number\n", n);

    return 0;

}