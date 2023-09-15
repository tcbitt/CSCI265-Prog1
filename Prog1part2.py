# Name: Travis Bittner
# Email: travis.bittner@und.edu
# 
# Simple Python program, uses input() function to store user input, then uses print()
# Print uses end parameter to keep formatting for mailing address.
# Uses 1 print statement with concatenation to display formatted input.

firstName = input("First: ")
lastName = input("Last: ")
address = input("Address: ")
city = input("City: ")
state = input("State: ")
zipCode = input("Zip: ")

print(firstName + " " + lastName + "\n" + address + "\n" + city + ", " + state + " " + zipCode)
