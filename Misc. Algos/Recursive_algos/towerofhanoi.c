// Tower of Hanoi
// code by Akshat Aryan
#include <stdio.h>

void tower(int n, char *src, char *aux, char *dest){
    if(n == 1){
        printf("Move Disk from %s to %s", src, dest);
    }
    else{
        tower(n - 1, src, dest, aux);
        printf("Move Disk from %s to %s", src, dest);
        tower(n - 1, aux, src, dest);
    }
}

int main(){
    int n;
    printf("Enter the number of disks:");
    scanf("%d", &n);
    printf("Follow these steps:\n");
    tower(n, "Source", "Auxiliary", "Destination");
    return 0;
}