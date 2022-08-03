#include <stdio.h>

int main() {

    int n, n2;
    printf("enter a size of a 2d array:\n");
    scanf("%d %d", &n, &n2);

    int a[n][n2];

    printf("enter numbers for 2d array:\n");

    for(int r=0; r<n; r++) {
        for(int c=0; c<n2; c++) {
            scanf("%d", &a[r][c]);
        }
    }

    printf("Matrix is:\n");

    for(int r=0; r<n; ++r) {
        for(int c=0; c<n2; ++c) printf("%d ", a[r][c]);
        printf("\n");
    }

    printf("Transpos of Matrix is:\n");

    for(int c=0; c<n2; ++c) {
        for(int r=0; r<n; ++r) printf("%d ", a[r][c]);
        printf("\n");
    }

    return 0;

}