/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C++ program that asks user for # of specific denominations. 
Uses an int array instead of 4 separate variables. 
Displays sum of coins multiplied by their respective denomination.

*/
#include <iostream>
#include <iomanip>

int main() {
	std::cout << setprecision(2) << fixed;
	
	int coins[4] = { 0 };

	std::cout << "Quarters: ";
	std::cin >> coins[0];

	std::cout << "Dimes: ";
	std::cin >> coins[1];

	std::cout << "Nickels: ";
	std::cin >> coins[2];

	std::cout << "Pennies: ";
	std::cin >> coins[3];

	//Sum the array of coins for total
	std::cout << "Amount: $" << 
		  (coins[0] * 0.25)
		+ (coins[1] * 0.10)
		+ (coins[2] * 0.05)
		+ (coins[3] * 0.01);

}
