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

    int a1[5], a2[5], a[10], index = 0, count = 0;

    for(int i=0; i<5; ++i) scanf("%d", &a1[i]);
    for(int i=0; i<5; ++i) scanf("%d", &a2[i]);

    for(int i=0; i<5; ++i) {
        for(int j=0; j<5; ++j) {
            if(a1[i]==a2[j] && (a1[i]!=0 && a2[j]!=0)) {
                a[index++] = a1[i];
                a1[i] = 0;
                a2[j] = 0;
                ++count;
            }
        }
    }

    sort(a, count);

    for(int i=0; i<count; ++i) printf("%d ", a[i]);
    printf("\n");

    return 0;

}