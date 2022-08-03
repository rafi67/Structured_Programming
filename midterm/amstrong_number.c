#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);

    int count = 0, n2 = n, n3 = n, result = 0;

    while(n2!=0) {
        ++count;
        n2/=10;
    }

    int index = 0;

    while(n3!=0) {
        result += (int) pow(n3%10, count);
        n3/=10;
    }

    if(result==n) printf("The number is an armstrong number\n");
    else printf("The number is not an armstrong number\n");

    return 0;

}