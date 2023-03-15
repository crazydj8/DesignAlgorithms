#include <stdio.h>

int euclid(int m, int n){
    int r;
    while(n != 0){
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main(){
    int a, b;
    printf("Enter the two numbers:");
    scanf("%d %d", &a, &b);
    printf("GCD = %d\n", euclid(a, b));
    return 0;
}