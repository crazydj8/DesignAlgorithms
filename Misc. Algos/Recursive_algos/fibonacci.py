# Finding nth term in Fibonacci sequence
# code by Akshat Aryan

def fibonacci(n):
    if(n <= 1):
        return n
    return(fibonacci(n - 1) + fibonacci(n - 2))

if(__name__ == "__main__"):
    a = int(input("Enter the value of 'n':"))
    print(str(a), "th term is:", fibonacci(a))