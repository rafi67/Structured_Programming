#include <stdio.h>

int main() {

    int row = 6, last = 1, l = 1, s = row;

    int a[6][6];

    int k = 0, k2 = 0;
    
    while(k<6) {
        a[k][k2] = 0;
        ++k2;
        if(k2==6) {
            ++k;
            k2 = 0;
        }
    }

    for(int i=0; i<6; ++i) {
        a[i][0] = 1;
        if(i>0) {
            a[i][last] = 1;
            ++last;
        }
        for(int j=0; j<l; ++j) {
            if(a[i][j]==0) {
                a[i][j] = a[i-1][j-1]+a[i-1][j];
            }
        }
        ++l;
    }

    for(int i=0; i<6; ++i) {
        for(int j=0; j<s; ++j) printf(" ");
        --s;
        for(int j=0; j<6; ++j) {
            if(a[i][j]!=0) printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}