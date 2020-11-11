from cs50 import get_int

while True:
    hgt = get_int("Enter the height between 1-8:")
    if hgt < 1 or hgt > 8:
        continue
    break

def triangle(n):
    for i in range(1, n +1):
        print(' ' * (n - i) + '#' * i)
        
triangle(hgt)