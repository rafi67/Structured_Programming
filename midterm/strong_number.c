#include <stdio.h>

int fact(int n) {
    if(n==0) return 1;
    return n*fact(n-1);
}

int main() {

    int n, result = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);

    int n2 = n, count = 0, n3 = n;

    while(n2!=0) {
        ++count;
        n2/=10;
    }

    int a[count];

    for(int i=0; i<count; ++i) {
        a[i] = n3%10;
        n3/=10;
    }

    for(int i=0; i<count; ++i) {
        a[i] = fact(a[i]);
    }

    for(int i=0; i<count; ++i) {
        result += a[i];
    }

    if(result==n) printf("Strong\n", n);
    else printf("Not Strong\n", n);

    return 0;

}