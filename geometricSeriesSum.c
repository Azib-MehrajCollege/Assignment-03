#include <stdio.h>
#include <math.h>
int main() {
    double a,r,sum;
    int n;
    printf("Enter first term: ");
    scanf("%lf", &a);
    printf("Enter common ratio: ");
    scanf("%lf", &r);
    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (r == 1) { // denominator can't be zero
        sum = a*n;
    } else {
        sum = a*(1-pow(r,n))/(1-r);
    }
    printf("Sum of the series: %.2f\n", sum);
    return 0;
}