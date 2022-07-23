#include <stdio.h>

int main() {

    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if(num%5==0 && num%11==0) printf("The number is divisible by 5 and 11\n");
    else if(num%5==0) printf("The number is divisible by 5\n");
    else if(num%11==0) printf("The number is divisible by 11\n");
    else printf("The number isn't divisible by 5 or 11\n");

    return 0;

}