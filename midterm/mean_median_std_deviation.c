#include <stdio.h>
#include <math.h>

int main() {

    int n, m, result = 0;
    printf("enter size of an array:\n");
    scanf("%d", &n);

    int a[n], mean[n], deviation[n];

    for(int i=0; i<n; ++i) {
        scanf("%d", &a[i]);
        if(i==0) mean[i] = a[i];
        else mean[i] = mean[i-1]+a[i];
    }

    m = mean[n-1]/n;

    for(int i=0; i<n; ++i) deviation[i] = (int) pow(a[i]-m, 2);

    for(int i=0; i<n; ++i) result += deviation[i];

    double result2 = sqrt(result/(n-1));

    int result3;

    if(n%2!=0) result3 = a[(n/2)];
    else result3 = (a[(n/2)-1]+a[(n/2)])/2;

    printf("Mean = %d\n", m);
    printf("Median = %d\n", result3);
    printf("Standard Deviation = %lf\n", result2);

    return 0;

}