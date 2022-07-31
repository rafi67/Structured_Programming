#include <stdio.h>

int main() {

    float f, c;
    printf("Enter temparature in fahrenheit:\n");
    scanf("%f", &f);

    printf("Enter temparature in Celcius:\n");
    scanf("%f", &c);

    float result = ((f-32)*5)/9;
    float result2 = ((c*9)/5)+32;

    printf("Fahrenheit to Celcius is %f\n", result);
    printf("Celcius to Fahrenheit is %f\n", result2);

    return 0;

}