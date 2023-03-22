# To find the number of digits in the binary representation of a positive integer
# code by Akshat Aryan

def bindigits(n):
    count = 1
    while(n > 1):
        count += 1
        n = n // 2 #or we can do: n = n >> 1
    return count

if(__name__ == "__main__"):
    n = int(input("Enter the number:"))
    print("The number of digits in the binary representation of", n, "is", bindigits(n))
