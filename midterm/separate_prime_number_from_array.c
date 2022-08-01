#include <stdio.h>

int main() {

    int a[100];

    for(int i=0, j=2; i<100; ++i, ++j) a[i] = j;

    int prime[25];

    int index = 0;

    for(int i=1; i<100; ++i) {
        for(int j=2; j<a[i]; ++j) {
            if(a[i]%j==0) a[i] = 0;
        }
    }

    for(int i=0; i<100; ++i) {
        if(a[i]!=0) prime[index++] = a[i];
    }

    for(int i=0; i<25; ++i) printf("%d ", prime[i]);
    printf("\n");

    return 0;

}