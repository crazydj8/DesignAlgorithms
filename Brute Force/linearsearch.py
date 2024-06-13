# selection sort
# code by Akshat Aryan

import numpy as np

def linsearch(arr, k):
    np.append(arr, k)
    i = 0
    while i < len(arr) and arr[i] != k:
        i += 1
    if i < len(arr):
        return i
    return -1

if __name__ == "__main__":
    arr = np.array(list(map(int, input("Enter the elements of the array:").split())))
    k = int(input("Enter the element to be searched for:"))
    x = linsearch(arr, k)
    if x == -1:
        print("Element not found.")
    else:
        print(f"Element found at {x}") 