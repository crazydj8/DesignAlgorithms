// Step decrementation algorithm
// Code by Akshat Aryan
#include <stdio.h>

int gcd(int m, int n){
    while(m != n){
        if(m > n){
            m = m - n;
        }
        else{
            n = n - m;
        }
    }
    return m;
}

int main(){
    int a, b;
    printf("Enter the two numbers:");
    scanf("%d %d", &a, &b);
    printf("GCD = %d", gcd(a, b));
    return 0;
}
    