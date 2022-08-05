#include <stdio.h>

int main() {

    int n, q, i, j;
    scanf("%d", &n);

    int a[n], pre[n];

    for(int k=0; k<n; ++k) {
        scanf("%d", &a[k]);
        if(a[k]==0) pre[k] = a[k];
        else pre[k] = pre[k-1]+a[k];
    }

    scanf("%d", &q);

    for(int k=0; k<q; ++k) {
        scanf("%d %d", &i, &j);
        if((i-1)==0) printf("%d\n", pre[j-1]);
        else printf("%d\n", pre[j-1]-pre[i-2]);
    }    

    return 0;

}