# Step decrementation algorithm
# Code by Akshat Aryan

def gcd(m, n):
    while(m != n):
        if(m > n):
            m = m - n
        else:
            n = n - m
    return m

if(__name__ == "__main__"):
    (a, b) = tuple(map(lambda x: int(x), input("Enter the two numbers:").split()))
    print("GCD =", gcd(a, b))
    