#include <stdio.h>

int main() {

    int a = 12, b = 45;

    printf("Before swapping a = %d and b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("Atfer swapping a = %d and b = %d\n", a, b);

    return 0;

}