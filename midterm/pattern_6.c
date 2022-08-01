#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int n2 = n, n3 = 1;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n2; ++j) printf(" ");
        --n2;
        for(int j=0; j<n3; ++j) printf("*");
        printf("\n");
        ++n3;
    }

    return 0;

}