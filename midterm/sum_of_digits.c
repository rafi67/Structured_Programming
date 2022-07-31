#include <stdio.h>

void sum_of_2_digits() {
    int n, r=0;
    printf("Enter 2 digit number:\n");
    scanf("%d", &n);

    r+=n%10;
    n/=10;

    r+=n%10;
    printf("Sum of two digit is %d\n", r);
}

void sum_of_3_digits() {
    int n, r=0;
    printf("Enter 3 digit number:\n");
    scanf("%d", &n);

    r+=n%10;
    n/=10;

    r+=n%10;
    n/=10;
    
    r+=n%10;
    printf("Sum of three digit is %d\n", r);
}

int main() {

    sum_of_2_digits();

    sum_of_3_digits();

    return 0;

}