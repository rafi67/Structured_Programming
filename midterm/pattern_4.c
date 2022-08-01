#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int n2 = n;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n2; ++j) printf("*");
        printf("\n");
        --n2;
    }

    return 0;

}