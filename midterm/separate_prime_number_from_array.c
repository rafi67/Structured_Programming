#include <stdio.h>

int main() {

    int n;
    printf("Enter size of an array:\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter data:\n");
    
    for(int i=0; i<n; ++i) scanf("%d", &a[i]);

    for(int i=0; i<n; ++i) {
        if(a[i]==1) {
            a[i] = 0;
            continue;
        }
        for(int j=2; j<a[i]; ++j) {
            if(a[i]%j==0) a[i] = 0;
        }
    }

    int count = 0;

    for(int i=0; i<n; ++i) {
        if(a[i]!=0) ++count;
    }

    int prime[count], index = 0;

    for(int i=0; i<n; ++i) {
        if(a[i]!=0) prime[index++] = a[i];
    }

    for(int i=0; i<count; ++i) printf("%d ", prime[i]);

    printf("\n");

    return 0;

}