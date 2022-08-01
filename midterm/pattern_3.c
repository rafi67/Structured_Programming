#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int n2 = n, n3 = (n/2)+2, n4 = 1, n5 = n-2;
    for(int i=0; i<n; ++i) {
        if(n2>=(n/2)+1){
            for(int j=0; j<n2; ++j) {
                printf(" ");
            }
            --n2;
        }
        else if(n2<=(n/2)+1) {
            for(int j=0; j<n3; ++j) {
                printf(" ");
            }
            ++n3;
        }
        if(n4<=n){
            for(int j=0; j<n4; ++j) {
                if(j==0 || j==n4-1) printf("*");
                else printf(" "); 
            }
            n4+=2;
        }
        else {
            for(int j=0; j<n5; ++j) {
                if(j==0 || j==n5-1) printf("*");
                else printf(" ");
            }
            n5-=2;
        }
        printf("\n");
    }

    return 0;

}