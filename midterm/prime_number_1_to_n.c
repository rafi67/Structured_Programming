#include <stdio.h>
#define mx 1000000

int cross[mx];
int prime[mx];
int idx = 1;

void sieve() {
    for(int i=2; i<=mx; ++i) {
        if(cross[i]) continue;
        prime[idx++] = i;
        for(long long j=(long long)i*i; j<=mx; j+=i) cross[j] = 1; 
    }
}

int main() {

    sieve();

    int n;
    printf("enter a value:\n");
    scanf("%d", &n);

    for(int i=1; i<=mx; ++i) {
        if(prime[i]<=n) printf("%d ", prime[i]);
        else break;
    }

    printf("\n");

    return 0;

}