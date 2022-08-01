#include <stdio.h>

int main() {

    int a[100], even[50], odd[50];

    for(int i=0, j=1; i<100; ++i, ++j) a[i] = j;

    int index = 0;

    for(int i=0; i<100; ++i) {
        if(a[i]%2!=0) {
            odd[index++] = a[i];
        }
    }

    index = 0;

    for(int i=0; i<100; ++i) {
        if(a[i]%2==0) {
            even[index++] = a[i];
        }
    }

    for(int i=0; i<50; ++i) printf("%d ", odd[i]);
    printf("\n");
    for(int i=0; i<50; ++i) printf("%d ", even[i]);
    printf("\n");

    return 0;

}