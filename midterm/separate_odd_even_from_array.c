#include <stdio.h>

int main() {

    int n, even = 0, odd = 0;

    printf("enter size of an array:\n");
    scanf("%d", &n);

    int a[n];

    printf("enter data for array:\n");

    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    for(int i=0; i<n; ++i) {
        if(a[i]%2!=0) ++odd;
        else ++even;
    }

    int eve[even], od[odd];

    int index = 0;

    for(int i=0; i<n; ++i) {
        if(a[i]%2!=0) {
            od[index++] = a[i];
        }
    }

    index = 0;

    for(int i=0; i<n; ++i) {
        if(a[i]%2==0) {
            eve[index++] = a[i];
        }
    }

    printf("Printing odd numbers:\n");

    for(int i=0; i<odd; ++i) printf("%d ", od[i]);
    printf("\n");

    printf("Printing even numbers\n");

    for(int i=0; i<even; ++i) printf("%d ", eve[i]);
    printf("\n");

    return 0;

}