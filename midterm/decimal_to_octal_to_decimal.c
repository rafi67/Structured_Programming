#include <stdio.h>
#include <math.h>

int main() {

    int octal, decimal, d = 0, d2 = 0;

    printf("Enter value of decimal and octal:\n");
    scanf("%d %d", &decimal, &octal);

    while(decimal!=0) {
        d*=10;
        d+=decimal%8;
        decimal/=8;
    }

    while(d!=0) {
        d2*=10;
        d2+=d%10;
        d/=10;
    }

    int octal2 = 0, count = 0, oct = octal, p = 0;

    while(octal!=0) {
        octal2 += ((int) pow(8, p++)) * (octal%10);
        octal/=10;
    }

    printf("Decimal to octal value is %d\n", d2);
    printf("Octal to Decimal value is %d\n", octal2);


    return 0;

}