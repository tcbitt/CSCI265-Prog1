# Name: Travis Bittner
# Email: travis.bittner@und.edu
#
# Simple Python program that gets users input and casts as integers, then stores in an array.
# Variable total gets the value of the sum of coins multiplied by their respective denominations.
# Print total, rounded to 2 decimal places, as a concatenated string.

coins = [0] * 4

coins[0] = int(input("Quarters: "))
coins[1] = int(input("Dimes: "))
coins[2] = int(input("Nickels: "))
coins[3] = int(input("Pennies: "))

total = ((coins[0] * 0.25)
    +(coins[1] * 0.10)
    +(coins[2] * 0.05)
    +(coins[3] * 0.01))

print("Amount: $" + str(round(total, 2)))