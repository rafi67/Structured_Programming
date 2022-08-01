#include <stdio.h>

int main() {

    int n, result = 0;
    scanf("%d", &n);

    for(int i=0; i<n; ++i) {
        if(i==0 || i==1) result += i;
        else result += i-1;
    }

    printf("Sum of fibonacci series until %dth position is %d\n", n, result);

    return 0;

}