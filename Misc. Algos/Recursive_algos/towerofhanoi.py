# Tower of Hanoi
# code by Akshat Aryan

def tower(n, src, aux, dest):
    if n == 1:
        print("Move Disk from", src, "to", dest)
    else:
        tower(n - 1, src, dest, aux)
        print("Move Disk from", src, "to", dest)
        tower(n - 1, aux, src, dest)
        
if(__name__ == "__main__"):
    n = int(input("Enter the number of disks:"))
    print("Follow these steps:")
    tower(n, "Source", "Auxiliary", "Destination")