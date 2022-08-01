#include <stdio.h>

int main() {

    int n;
    printf("Enter size of an array:\n");
    scanf("%d", &n);

    int a[n];

    printf("enter valur for array:\n");

    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    for(int i=n-1; i>=0; --i) printf("%d ", a[i]);
    printf("\n");

    return 0;

}