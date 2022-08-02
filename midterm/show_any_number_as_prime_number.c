#include <stdio.h>
#define mx 1000000

int cross[mx+5];
int prime[mx+5];
int idx = 1;

void sieve() {
    for(int i=2; i<=mx; ++i) {
        if(cross[i]) continue;
        prime[idx++] = i;
        for(long long j = (long long)i*i; j<=mx; j+=i) cross[j] = 1;
    }
}

int main() {

    sieve();

    int n, count = 0;
    scanf("%d", &n);

    for(int i=1; i<n; ++i) {
        count = 0;
        if(prime[i]*prime[i]>n) break;
        if(n%prime[i]==0) {
            while(n%prime[i]==0) {
                ++count;
                n/=prime[i];
            }
            printf("%d^%d ", prime[i], count);
        }
    }

    if(n!=0) printf("%d^1 ", n);
    printf("\n");

    return 0;

}