/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C++ program that gets a number of milliseconds from the user and determines minutes, seconds, and remaining milliseconds.
Uses ternary statements to calculate amount of minutes/seconds and display, or display 0 if less than amount needed.
Subtract # of milliseconds used and continue to find seconds, then repeat and display remaining milliseconds.

*/

#include <iostream>

int main() {
	int mSeconds = 0;

	std::cout << "Milliseconds: ";
	std::cin >> mSeconds;

	//Ternary operations to account for 0 minutes/seconds easier
	if (mSeconds >= 60000 ? std::cout << std::floor(mSeconds / 60000) << " minute(s)" << std::endl : std::cout << 0 << " minute(s)" << std::endl);
		mSeconds -= ((60000) * std::floor(mSeconds / 60000));


	if (mSeconds >= 1000 ? std::cout << std::floor(mSeconds / 1000) << " second(s)" << std::endl : std::cout << 0 << " second(s)" << std::endl);
		mSeconds -= ((1000) * std::floor(mSeconds / 1000));


	//Output remaining ms
	std::cout << mSeconds << " milliseconds";
	
	
}