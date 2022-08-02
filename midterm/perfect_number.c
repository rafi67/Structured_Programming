#include <stdio.h>

int main() {

    int n, result = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);

    for(int i=1; i<n; ++i) {
        if(n%i==0) result+=i;
    }

    if(n==result) printf("%d is a perfect number\n", n);
    else printf("%d is not a perfect number\n", n);

    return 0;

}