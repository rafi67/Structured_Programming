#include <stdio.h>

void pattern_1(int n) {  // starting line of pattern_1
    int n2 = 1;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n2; ++j) {
            printf("*");
        }
        printf("\n");
        ++n2;
    }
} // ending ling of pattern_1

void pattern_2(int n) { // pattern_2
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n; ++j) printf("*");
        printf("\n");
    }
}  // pattern_2

void pattern_3(int n) { //pattern_3
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
    
} // pattern_3

void pattern_4(int n) { // pattern_4
    int n2 = n;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n2; ++j) printf("*");
        printf("\n");
        --n2;
    }
} // pattern_4

void pattern_5(int n) { // pattern_5
    int n2=1, n3=n;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n3; ++j) printf(" ");
        --n3;
        for(int j=0; j<n2; ++j) printf("*");
        printf("\n");
        n2+=2;
    }
} // pattern_5

void pattern_6(int n) { // pattern_6
    int n2 = n, n3 = 1;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n2; ++j) printf(" ");
        --n2;
        for(int j=0; j<n3; ++j) printf("*");
        printf("\n");
        ++n3;
    }
} // pattern_6

void pattern_7(int n) { // pattern_7
    int n2 = 1;
    for(int i=0; i<n; ++i) {
        for(int j=1; j<=n2; ++j) printf("%d", j);
        printf("\n");
        ++n2;
    }
} // pattern_7

void pattern_8(int n) { // pattern_8
    int n2 = 1, value = 1, n3 = n;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n3; ++j) printf(" ");
        --n3;
        for(int j=0; j<(n2/2)+1; ++j) {
            printf("%d", value);
            if(n2>1 && value!=1) --value;
        }
        for(int j=(n2/2)+1; j<n2; ++j) {
            ++value;
            printf("%d", value);
        }
        printf("\n");
        ++value;
        n2+=2;
    }
} // pattern_8

int main() {

    int n;
    scanf("%d", &n);

    pattern_1(n);
    pattern_2(n);
    pattern_3(n);
    pattern_4(n);
    pattern_5(n);
    pattern_6(n);
    pattern_7(n);
    pattern_8(n);

    return 0;

}