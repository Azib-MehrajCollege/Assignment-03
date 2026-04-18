#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int evenCount =0;
    int oddCount =0;
    for (int i=0; i<size; i++) {
        if (arr[i]%2==0)  evenCount++;
        else oddCount++;
    }
    printf("Number of even numbers = %d\n",evenCount);
    printf("Number of odd numbers = %d\n",oddCount);
    return 0;
}