#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);

    if(num>0) printf("The number is positive\n");
    else if(num==0) printf("The number is Zero\n");
    else printf("The number is negative\n");

    return 0;

}