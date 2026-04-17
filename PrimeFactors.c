#include <stdio.h>
int main() {
    int n;
    int i=2;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n>1) {
        if (n%i == 0) {
            printf("%d\t", i);
            n/=i;
        } else {
            i++;
        }
    }
    return 0;
}