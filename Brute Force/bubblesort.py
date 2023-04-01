# Selection Sort
# code by Akshat Aryan
import numpy as np

def bubblesort(arr):
    for i in range(0, len(arr) - 1):
        for j in range(0, len(arr) - i - 1):
            if(arr[j + 1] < arr[j]):
                (arr[j], arr[j + 1]) = (arr[j + 1], arr[j])

if(__name__ == "__main__"):
    arr = np.array(list(map(int, input("Enter the array:").split())))
    bubblesort(arr)
    print("Sorted array:\n", arr)
