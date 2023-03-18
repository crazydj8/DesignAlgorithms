# Finding factorial of a given number
# code by Akshat Aryan

def factorial(n):
    if(n == 1):
        return 1
    return n * factorial(n - 1)

if(__name__ == "__main__"):
    a = int(input("Enter your number:"))
    print("Factorial =", factorial(a))