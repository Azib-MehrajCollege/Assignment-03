#include <stdio.h>
int main() {
    long long n=2;
    int m=5;
    long long square = 1;
    while (m>0) {
        n*=n;
        square = n;
        printf("%lld\t", square);
        m--;
    }
    return 0;
}