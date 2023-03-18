# Euclid's algorithm to compute gcd of two numbers
# Code by Akshat Aryan
def euclid(m, n):
    while(n != 0):
        r = m % n
        m = n
        n = r
    return m

if(__name__ == "__main__"):
    (a, b) = tuple(map(lambda x: int(x), input("Enter the two numbers:").split()))
    print("GCD =", euclid(a, b))
    