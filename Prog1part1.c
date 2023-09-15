/*
Name: Travis Bittner
Email: travis.bittner@und.edu

Simple C program that uses printf and scanf to ask the user for input and store it in C-strings. 
Uses %[^\n]%*c format specifier to grab the entire line. 
Outputs mailing address using 6 printf statements.

Pragma statement to allow compilation. Disables error C4996 in Visual Studio
#pragma warning(disable : 4996)
*/
#include <stdio.h>
#include <stdlib.h>


int main() {
    char firstName[25],
        lastName[25],
        address[50],
        city[25],
        state[25];
    
    int zipCode = 0;

    //scanf("%[^\n]%*c) to grab the entire string instead of gets()
    printf("First: ");
    scanf("%[^\n]%*c", firstName);

    printf("Last: ");
    scanf("%[^\n]%*c", lastName);

    printf("Address: ");
    scanf("%[^\n]%*c", address);

    printf("City: ");
    scanf("%[^\n]%*c", city);

    printf("State: ");
    scanf("%[^\n]%*c", state);

    printf("Zip: ");
    scanf("%d", zipCode);

    printf("%s ", firstName);
    printf("%s", lastName);
    printf("\n%s", address);
    printf("\n%s", city);
    printf(", %s", state);
    printf(" %d", zipCode);

    return 0;    
}
