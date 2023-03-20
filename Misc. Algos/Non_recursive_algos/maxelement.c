// Finding maximum element in an array
// code by Akshat Aryan

#include <stdio.h>

int maxval(int arr[], int n){
    int large = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }
    return large;
}

int main(){
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d elements separated by spaces:", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Max element = %d\n", maxval(arr, n));
    return 0;
}