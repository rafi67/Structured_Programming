#include <stdio.h>

int main() {

    int n, even = 0, odd = 0;
    printf("Enter size of an array:\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter value for array:\n");

    for(int i=0; i<n; ++i) {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; ++i) {
        if(a[i]%2!=0) ++odd;
        else ++even;
    }

    printf("Odd number in array is %d\n", odd);
    printf("Even number in array is %d\n", even);

    return 0;

}