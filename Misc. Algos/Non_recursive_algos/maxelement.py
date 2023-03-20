# Finding maximum element in an array
# code by Akshat Aryan
import numpy as np # a good practice to use numpy when dealing with arrays

def findmax(arr): #this function is for any iterable in python
    maxval = arr[0]
    for i in range(0, len(arr)):
        if(arr[i] > maxval):
            maxval = arr[i]
    return maxval

if(__name__ == "__main__"):
    arr = np.array(list(map(lambda x: int(x), input("Enter the elements separated by space:").split())))
    a = int(input("Use:\n1) defined findmax function\n2) numpy's array max function\nEnter 1 or 2:"))
    if(a == 1):
        print("Maximum Element =", findmax(arr))
    else:
        print("Maximum Element =", arr.max())
    '''or with normal list:
    arr = list(map(lambda x: int(x), input("Enter the elements separated by space:").split()))
    a = int(input("Use:\n1) defined findmax function\n2) inbuilt list max function\nEnter 1 or 2:"))
    if(a == 1):
        print("Maximum Element =", findmax(arr))
    else:
        print("Maximum Element =", max(l))
    '''