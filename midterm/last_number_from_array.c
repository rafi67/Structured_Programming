#include <stdio.h>

int main() {

    int n;
    printf("Enter size of an array:\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter value for array:\n");

    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    printf("Th last number in array is %d\n", a[n-1]);

    return 0;

}