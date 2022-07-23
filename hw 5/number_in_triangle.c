#include <stdio.h>

int main() {

    int n = 5, n2 = 1, n3 = 5;

    for(int i=0; i<n; ++i) {
        for(int j=0; j<n2; ++j) printf("%d ", n3);
        printf("\n");
        ++n2;
        --n3;
    }

    return 0;

}