// Multiplication of two square matrices of order n
// code by Akshat Aryan
#include <stdio.h>

void matmul(int n, int a[][n], int b[][n], int c[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = 0;
            for(int k = 0; k < n; k++){
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}

int main(){
    int n;
    printf("Enter the order of the two matrices:");
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    printf("Enter Matrix 1:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Matrix 2:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &b[i][j]);
        }
    }
    matmul(n, a, b, c);
    printf("Resultant Matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}