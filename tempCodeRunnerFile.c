#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp1=num;
    int temp2=temp1;
    if (num<0) {
        printf("Enter a positive integer.");
        return -1;
    }
    //count digits in number
    int count=0;
    while (temp1>0) {
        count++;
        temp1/=10;
    }
    // armstrong logic
    int newNum=0;
    while (temp2>0) {
        int ldigit= temp2%10;
        newNum += (int)pow(ldigit,count);
        temp2/=10;
    }
    //check equality
    newNum==num ? printf("%d is an Armstrong number", num) : printf("%d is not an Armstrong number", num);
    return 0;
}