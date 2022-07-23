#include <stdio.h>

int size(int num) {
    int result = 0;
    while(num!=0) {
        num/=10;
        result++;
    }
    return result;
}

int main() {

    int first, last, num;
    scanf("%d", &num);

    int num2 = num;

    int length = size(num);

    double num3 = num;

    for(int i=0; i<length; i++) {
        if(i==0) last = num%10;
        else if(i==length-1) first = num%10;
        num/=10;
        num3/=10;
    }

    double f1 = first, l1 = last, f2 = last, l2 = first;

    f2/=10;

    for(int i=0; i<length; i++) {
        l2/=10;
    }

    f1/=10;

    for(int i=0; i<length; i++) {
        l1/=10;
    } 

    num3 -= l1;
    num3 += l2;
    num3 -= f1; 
    num3 += f2;

    for(int i=0; i<length; i++) {
        num3*=10;
    } 

    printf("%d\n", (int) num3);
 
    return 0;

}