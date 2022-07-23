#include <stdio.h>

int main() {

    int num, num2, num3, length = 0, fre = 0;
    scanf("%d", &num);

    num2 = num;

    do {
        num/=10;
        length++;
    }
    while(num!=0);

    if(length==1) printf("%d\n", 1);

    else {
        int temp = num2;
        for(int i=0; i<length; i++) {
            int temp2 = temp%10;
            int temp3 = num2;
            temp/=10;
            for(int j=0; j<length; j++) {
                if(temp3%10==temp2) fre++;
                temp3/=10;
            }
            printf("frequency of %d is %d\n", temp2, fre);
            fre = 0; 
        }
    }

    return 0;

}