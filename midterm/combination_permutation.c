#include <stdio.h>

int fact(int n) {
    if(n==0) return 1;
    return n*fact(n-1);
}

int main() {

    int n, r;
    printf("Enter value of n and r:\n");
    scanf("%d %d", &n, &r);

    int permutation = fact(n)/fact(n-r);
    int combination = fact(n)/(fact(r)*fact(n-r));

    printf("Permutaion is %d\n", permutation);
    printf("Combination is %d\n", combination);

    return 0;

}