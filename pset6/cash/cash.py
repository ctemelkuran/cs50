from cs50 import get_float

while True:
    dollars = get_float("Enter the owed amount:")
    if dollars >= 0:
        break

cents = (dollars * 100)

total = 0
for coin in [25, 10, 5, 1]:
    total += int(cents // coin)
    cents %= coin
    
print(total)