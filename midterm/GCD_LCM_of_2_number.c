#include <stdio.h>

int gcd(int a, int b) {
    if(b==0) return a;
    int gc = gcd(b, a%b);
    return gc;   
}

int lcm(int a, int b) {
    return ((a*b)/gcd(a,b));
}

int main() {
    
    int a, b;

    printf("Enter two number to get lcm and gcd:\n");
    scanf("%d %d", &a, &b);

    printf("GCD of a and b is %d\n", gcd(a, b));
    printf("LCM of a and b is %d\n", lcm(a, b));

    return 0;

}