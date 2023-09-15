# Name: Travis Bittner
# Email: travis.bittner@und.edu
# 
# Simple Python program, uses input() function to store user input, then uses print()
# Print uses end parameter to keep formatting for mailing address.
# Uses 6 print statements to display formatted input.

firstName = input("First: ")
lastName = input("Last: ")
address = input("Address: ")
city = input("City: ")
state = input("State: ")
zipCode = input("Zip: ")

print(firstName, end = " ")
print(lastName)
print(address)
print(city, end = ", ")
print(state, end = " ")
print(zipCode)