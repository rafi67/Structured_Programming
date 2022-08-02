#include <stdio.h>

int main() {

    int a[10];

    printf("enter any 10 numbers for array:\n");
    
    for(int i=0; i<10; ++i) scanf("%d", &a[i]);

    for(int i=0; i<5; ++i) printf("%d ", a[i]);

    printf("\n");

    return 0;

}