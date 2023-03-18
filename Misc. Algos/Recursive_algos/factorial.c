// Finding factorial of a given number
// code by Akshat Aryan
#include <stdio.h>

int factorial(int n){
    if(n == 1){
        return 1;
    }
    return (n * factorial(n - 1));
}

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d", &a);
    printf("Factorial = %d\n", factorial(a));
    return 0;
}