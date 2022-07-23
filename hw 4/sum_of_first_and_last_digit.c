#include <stdio.h>

int size(int n) {
    int sum = 0;
    while(n!=0) {
        n/=10;
        sum++;
    }
    return sum;
}

void sum(int n, int size) {
    int result = 0, temp = n;
    for(int i=0; i<size; i++) {
        int temp2 = temp%10;
        if(i==0 || i==size-1) result+=temp2;
        temp/=10;
    }
    printf("%d\n", result);
}

int main() {

    int n;
    scanf("%d", &n);

    int s = size(n);

    sum(n, s);

    return 0;

}