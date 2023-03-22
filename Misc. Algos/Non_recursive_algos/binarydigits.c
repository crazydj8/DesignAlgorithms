// To find the number of digits in the binary representation of a positive integer
// code by Akshat Aryan
#include <stdio.h>

int bindigits(int n){
    int count = 1;
    while(n > 1){
        count++;
        n = n / 2; //or we can do: n = n >> 1
    }
    return count;
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("The number of digits in the binary representation of %d is %d\n", n, bindigits(n));
    return 0;
}