// Selection Sort
// code by Akshat Aryan
#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j + 1] < arr[j]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array:");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);
    printf("Sorted array is:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
