#include <stdio.h>

int main() {

    int n;
    printf("Enter a array size:\n");
    scanf("%d", &n);

    printf("Enter value of array:\n");

    int a1[n], a2[n];

    for(int i=0; i<n; ++i) {
        scanf("%d", &a1[i]);
    }

    for(int i=0; i<n; ++i) a2[i] = a1[i];

    printf("Printing First array value:\n");

    for(int i=0; i<n; ++i) printf("%d ", a1[i]);
    printf("\n");

    printf("Printing Second array value:\n");

    for(int i=0; i<n; ++i) printf("%d ", a2[i]);
    printf("\n");

    return 0;

}