#include <stdio.h>

int main() {

    int number;
    printf("Please enter your marks:\n");
    scanf("%d", &number);

    switch(number) {
        case 80 ... 100:
            printf("Your grade is A+\n");
            break;
        case 70 ... 79:
            printf("Your grade is A\n");
            break;
        case 60 ... 69:
            printf("Your grade is A-\n");
            break;
        case 50 ... 59:
            printf("Your grade is B\n");
            break;
        case 40 ... 49:
            printf("Your grade is C\n");
            break;
        case 33 ... 39:
            printf("Your grade is D\n");
            break;
        default:
            printf("Your grade is f\n");
    }

    return 0;

}