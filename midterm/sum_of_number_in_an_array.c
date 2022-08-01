#include <stdio.h>

int main() {

    int n, l, r;
    printf("Enter size of an array:\n");
    scanf("%d", &n);

    printf("Enter value of  l and r:\n");
    scanf("%d %d", &l, &r);

    int a[n], pre[n];

    printf("Enter data for array:\n");

    for(int i=0; i<n; ++i) {
        scanf("%d", &a[i]);
        if(i==0) pre[i] = a[i];
        else pre[i] = pre[i-1]+a[i];
    }

    for(int i=0; i<n; ++i) printf("%d ", pre[i]);
    printf("\n");

    if(l-1==0) printf("Sum of %dth position is %d\n", r, pre[r-1]);
    else printf("Sum of %dth position is %d\n", r, pre[r-1]-pre[l-2]);

    return 0;

}