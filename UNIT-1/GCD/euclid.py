# Euclid's algorithm to compute gcd of two numbers

def euclid(m, n):
    while(n != 0):
        r = m % n
        m = n
        n = r
    return m

if(__name__ == "__main__"):
    (a, b) = tuple(map(lambda x: int(x), input("Enter the two numbers:").split()))
    print("GCD=", gcd(a, b))
    