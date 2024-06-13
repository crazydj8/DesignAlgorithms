#include <stdio.h>

int linsearch(int arr[], int n, int k){
    int newarr[n+1];
    for(int i = 0; i < n; i++){
        newarr[i] = arr[i];
    }
    newarr[n] = k;
    int i = 0;
    while(i < n && newarr[i] != k){
        i++;
    }
    if(i < n){
        return i;
    }
    return -1;
}

int main(){
    printf("Enter the size of the array: ");
    int n, k;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be found: ");
    scanf("%d", &k);
    int x = linsearch(arr, n, k);
    if(x == -1){
        printf("Element not found");
    }
    else{
        printf("Element found at: %d", x);
    }
    return 0;
}