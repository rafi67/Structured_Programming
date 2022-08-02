#include <stdio.h>

void sort(int a[], int size) {
    for(int i=0; i<size; i++) {
        for(int j=0; j<size-1; j++) {
            if(a[j]>a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
} 


int main() {

    int n;
    printf("enter size of an array:\n");
    scanf("%d", &n);

    int a[n];

    printf("enter value for array:\n");

    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    sort(a, n);

    printf("3rd largest number in array is %d\n", a[n-3]);

    return 0;
    
}