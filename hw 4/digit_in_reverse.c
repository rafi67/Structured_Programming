#include <stdio.h>

int main() {

    int num, num2;

    scanf("%d", &num);
    
    num2 = num;

    int sum = 0;

    do {
        num /= 10;
        ++sum;
    }
    while(num!=0);

    if(sum!=1) {
        for(int i=0; i<sum; i++) {
            printf("%d", num2%10);
            num2 /= 10;
        }
        printf("\n");
    }

    else printf("%d\n", num2);

    return 0;

}