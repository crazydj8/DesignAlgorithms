# Finding maximum element in an array
# code by Akshat Aryan
import numpy as np # a good practice to use numpy when dealing with arrays

def matmul(a, b, n):
    c = np.zeros(n ** 2, int).reshape(n, n)
    for i in range(0, n): # len(array) = number of rows in numpy, which in this case, len(a) = len(b) = order
        for j in range(0, n):
            for k in range(0, n):
                c[i][j] = c[i][j] + a[i][k] * b[k][j]
    return c

if(__name__ == "__main__"):
    n = int(input("Enter the order of the matrices:"))
    a = np.empty(n ** 2, int).reshape(n, n)
    b = np.empty(n ** 2, int).reshape(n, n)
    num = 1
    for x in (a, b):
        print("Enter Matrix", str(num) + ":")
        for i in range(0, n):
            row = list(map(int, input().split()))
            x[i] = row
        num = 2
    print("Using Levitin's Algo:")
    c = matmul(a, b, n)
    print("Resultant Matrix:\n", c)
    print("Or we can use numpy's matrix multiplication function for same result:\n", np.dot(a, b))
    