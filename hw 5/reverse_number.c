#include <stdio.h>

int main() {

    int n, rev = 0, rem;

    printf("Enter a number:\n");
    scanf("%d", &n);

    do {
        rem = n%10;
        rev = (rev*10) +rem;
        n/=10;
    } while(n!=0);

    printf("%d\n", rev);

    return 0;

}