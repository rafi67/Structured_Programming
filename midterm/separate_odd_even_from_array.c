#include <stdio.h>

int main() {

    int n;

    printf("enter size of an array:\n");
    scanf("%d", &n);

    int a[n], even[n/2], odd[n/2];

    printf("enter %d data:\n", n);

    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    int index = 0;

    for(int i=0; i<n; ++i) {
        if(a[i]%2!=0) {
            odd[index++] = a[i];
        }
    }

    index = 0;

    for(int i=0; i<n; ++i) {
        if(a[i]%2==0) {
            even[index++] = a[i];
        }
    }

    printf("Printing odd numbers:\n");

    for(int i=0; i<n/2; ++i) printf("%d ", odd[i]);
    printf("\n");

    printf("Printing even numbers\n");

    for(int i=0; i<n/2; ++i) printf("%d ", even[i]);
    printf("\n");

    return 0;

}