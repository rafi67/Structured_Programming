#include <stdio.h>

void sort(int a[], int size) {
    for(int i=0; i<size; i++) {
        for(int j=0; j<size-1; j++) {
            if(a[j]>a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    } 
}

int main() {

    int n;
    printf("enter size of an array:\n");
    scanf("%d\n", &n);

    int a[n], pre[n];

    for(int i=0; i<n; ++i) {
        scanf("%d", &a[i]);
        if(i==0) pre[i] = a[i];
        else pre[i] = pre[i-1]+a[i];
    }

    sort(a, sizeof(a)/sizeof(a[0]));

    int average = pre[n-1]/(sizeof(a)/sizeof(a[0]));

    printf("The largest number in array is %d\nThe smallest number in array is %d\nThe average is %d\n", a[0], a[n-1], average);

    return 0;

}