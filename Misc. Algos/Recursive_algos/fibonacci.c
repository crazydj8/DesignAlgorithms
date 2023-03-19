// Finding nth term in Fibonacci sequence
// code by Akshat Aryan

int fibonacci(int n){
    if(n <= 1){
        return n;
    }
    return(fibonacci(n - 1) + fibonacci(n - 2));
}

int main(){
    int a;
    printf("Enter the value of 'n':");
    scanf("%d", &a);
    printf("%dth term is: %d\n", a, fibonacci(a));
    return 0;
}