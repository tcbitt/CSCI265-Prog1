/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C++ program that uses cin and cout to ask the user for input and store it in strings.
Uses getline to grab strings that may contain whitespace.
Uses a single cout statement to display mailing address.

*/
#include <iostream>
#include <string>

int main(){
	std::string firstName,
		lastName,
		address,
		city,
		state,
		zip;



	//Display field and get input
	std::cout << "First: ";
	std::cin >> firstName;

	std::cout << "Last: ";
	std::cin >> lastName;
	
	//Clear buffer for getline
	std::cin.ignore();
	
	std::cout << "Address: ";
	getline(std::cin, address, '\n');

	std::cout << "City: ";
	getline(std::cin, city, '\n');

	std::cout << "State: ";
	getline(std::cin, state, '\n');

	std::cout << "Zip: ";
	std::cin >> zip;


	//Display input in mailing address format in a single cout statement
	std::cout << firstName << " "
			  << lastName << std::endl
			  << address << std::endl
			  << city << ", "
			  << state << "  "
			  << zip;

}
