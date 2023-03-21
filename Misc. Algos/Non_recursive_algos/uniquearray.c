// Finding whether the array has all distinct elements or not
// code by Akshat Aryan
#include <stdio.h>

int unique(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                return 0; // 0 = False
            }
        }
    }
    return 1; // 1= True
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
    if(unique(arr, n) == 1){
        printf("All Array Elements are unique.\n");
    }
    else{
        printf("All Array Elements are not unique.\n");
    }
    return 0;
}