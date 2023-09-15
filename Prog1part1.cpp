/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C++ program that uses cin and cout to ask the user for input and store it in strings.
Uses getline to grab strings that may contain whitespace.
Uses 6 cout statements to display mailing address.
*/
#include <iostream>
#include <string>

int main(){
	std::string firstName,
		lastName,
		address,
		city,
		state;

	int zipCode;

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
	std::cin >> zipCode;
	

	//Display input in mailing address format
	std::cout << firstName << " ";
	std::cout << lastName << std::endl;
	std::cout << address << std::endl;
	std::cout << city << ", ";
	std::cout << state << " ";
	std::cout << zipCode;

}