#include <stdio.h>
#include <stdlib.h>

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

    int a1[5], a2[5], element_number = 0;

    int a[10];
    
    for(int i=0; i<5; ++i) scanf("%d", &a1[i]);
    for(int i=0; i<5; ++i) scanf("%d", &a2[i]);

    int count = 0, index;

    for(int i=0; i<5; ++i) {
        a[i] = a1[i];
        ++count;
    }

    index = count;

    for(int i=0; i<5; ++i) {
        for(int j=0; j<5; ++j) {
            if(a[i]==a2[j]) a2[j] = 0;
        }
    }

    for(int i=0; i<5; ++i) {
        if(a2[i]!=0) {
            a[index++] = a2[i];
            ++count; 
        }
    }

    sort(a, count);

    for(int i=0; i<count; ++i) printf("%d ", a[i]); 


    return 0;

}