#include <stdio.h>
#include <math.h>

int main() {

    int n, total = 0, total2 = 0;
    scanf("%d", &n);

    for(int i = 0; i<n; i++) {
        total += pow(10, i);
        total2 += total;
    }

    printf("%d\n", total2);

    return 0;

}