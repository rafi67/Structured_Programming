#include <stdio.h>

long long ncr[1005][1005];

void store_ncr() {
    for(int i=0; i<1000; ++i) {
        ncr[i][0] = 1;
        ncr[i][i] = 1;
    }
    
    for(int i=2; i<1000; ++i) {
        for(int j=1; j<i; ++j) ncr[i][j] = ncr[i-1][j]+ncr[i-1][j-1];
    }
}

int main() {
    
    store_ncr();
    
    int n;
    scanf("%d", &n);
    
    int index = 1, index2 = n;
    
    for(int i=0; i<n; ++i) {
        for(int j=0; j<index2; ++j) printf(" ");
        for(int j=0; j<index; ++j) {
            printf("%lld ", ncr[i][j]);
        }
        printf("\n");
        ++index;
        --index2;
    } 
     
    return 0;
    
}