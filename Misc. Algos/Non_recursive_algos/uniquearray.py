# Finding whether the array has all distinct elements or not
#code by Akshat Aryan

#mentioned algorithm:
def unique(arr):
    for i in range(0, len(arr) - 1):
        for j in range(i + 1, len(arr)):
            if(arr[i] == arr[j]):
                return False
    return True

#another algorithm possible in python
def unique_set(arr):
    #set only contains distinct elements
    #if number of elements in the set and array are same, means array has unique elements
    if(len(arr) == len(set(arr))):
        return True
    else:
        return False

if(__name__ == "__main__"):
    arr = list(map(int, input("Enter the elements separated by space:").split()))
    print("Using Levitin's Algo, uniqueness =", unique(arr))
    print("Using the other Algo, uniqueness =", unique_set(arr))