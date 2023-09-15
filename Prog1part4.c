/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C program that uses printf and scanf to ask the user for input and store at the addresses of their corresponding int variables.
Prints total amount by summing # of coins multiplied by their respective denominations. Uses float specifier to two decimal places.

Pragma statement to allow compilation. Disables error C4996 in Visual Studio
*/
//#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int quarters, nickels, dimes, pennies;

	printf("Quarters: ");
	scanf("%d", &quarters);

	printf("Dimes: ");
	scanf("%d", &dimes);

	printf("Nickels: ");
	scanf("%d", &nickels);

	printf("Pennies: ");
	scanf("%d", &pennies);

			
	printf("Amount: $%.2f",
		(quarters * 0.25) +
		(dimes * 0.10)	  +
		(nickels * 0.05)  +
		(pennies * 0.01));
}