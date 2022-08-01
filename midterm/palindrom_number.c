#include <stdio.h>

int main() {

    int n, n2, n3 = 0;
    printf("enter a number:\n");
    scanf("%d", &n);
    
    n2 = n;

    while(n2!=0) {
        n3*=10;
        n3+=n2%10;
        n2/=10;
    }

    if(n3==n) printf("The number is a Palindrom\n");
    else printf("The number is not a Palindrom\n");

    return 0;

}