#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int n2 = 1, value = 1, n3 = n;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n3; ++j) printf(" ");
        --n3;
        for(int j=0; j<(n2/2)+1; ++j) {
            printf("%d", value);
            if(n2>1 && value!=1) --value;
        }
        for(int j=(n2/2)+1; j<n2; ++j) {
            ++value;
            printf("%d", value);
        }
        printf("\n");
        ++value;
        n2+=2;
    }

    return 0;

}