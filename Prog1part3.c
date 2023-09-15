/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C program that uses printf and scanf to ask the user for input. Gets an integer and stores it at the address of mSeconds.
Ternary statement to print X minutes. If mSeconds >= 60000 break up into minutes then subtract the amount of milliseconds from total, else print 0 minutes.
The second ternary statement does the same but checks for seconds, once calculated it display's remaining milliseconds.

Pragma statement to allow compilation. Disables error C4996 in Visual Studio
*/
//#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>

int main() {
	int mSeconds;

	printf("Milliseconds: ");
	scanf("%d", &mSeconds);

	if (mSeconds >= 60000 ? printf("%g\n", floor(mSeconds / 60000)) : printf("%d\n", 0));
	mSeconds -= ((60000) * floor(mSeconds / 60000));

	if (mSeconds >= 1000 ? printf("%g\n", floor(mSeconds / 1000)) : printf("%d\n", 0));
	mSeconds -= ((1000) * floor(mSeconds / 1000));

	printf("%d", mSeconds);
}
