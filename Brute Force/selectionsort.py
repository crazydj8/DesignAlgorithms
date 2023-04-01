# Selection Sort
# code by Akshat Aryan
import numpy as np

def selectionsort(arr):
    for i in range(0, len(arr) - 1):
        min = i
        for j in range(i + 1, len(arr)):
            if(arr[j] < arr[min]):
                min = j
        (arr[i], arr[min]) = (arr[min], arr[i])

if(__name__ == "__main__"):
    arr = np.array(list(map(int, input("Enter the array:").split())))
    selectionsort(arr)
    print("Sorted array:\n", arr)
