#include <stdio.h>

int main() {

    int n, r = 0;
    printf("Enter 3 digit number:\n");
    scanf("%d", &n);

    r*=10;
    r+=n%10;
    n/=10;

    r*=10;
    r+=n%10;
    n/=10;

    r*=10;
    r+=n%10;
    
    printf("Reverse of three digit is %d\n", r);

    return 0;

}