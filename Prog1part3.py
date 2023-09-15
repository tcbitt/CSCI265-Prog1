# Name: Travis Bittner
# Email: travis.bittner@und.edu
#
# Simple Python program that gets user input as a string and casts to an integer.
# Prints the calculated minutes/seconds as strings.
# Subtracts calculated minutes/seconds as milliseconds from total.
# Prints remaining milliseconds as a string.

import math

mSeconds = input("Milliseconds: ")
mSeconds = int(mSeconds)

print(str(math.floor(mSeconds/60000))) if (mSeconds >= 60000) else print(0)
mSeconds -= ((60000) * math.floor(mSeconds/60000))
print(str(math.floor(mSeconds/1000))) if (mSeconds >= 1000) else print(0)
mSeconds -= ((1000) * math.floor(mSeconds/1000))

print(str(mSeconds)) 
