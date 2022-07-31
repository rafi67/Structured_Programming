#include <stdio.h>

int main() {

    int l, w, h;
    
    printf("Enter length, width and height:\n");
    scanf("%d %d %d", &l, &w, &h);

    printf("Volume of box is %d\n", l*w*h);

    return 0;

}