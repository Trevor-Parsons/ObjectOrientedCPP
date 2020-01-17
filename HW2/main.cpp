// Autor: Trevor Parsons
// Date: 6/23/18
// Description: This program accepts user input for a number of random characters.
// It generates and stores the random characters in a dynamically allocated array and then
// displays the contents of the array from beginning to end, and then displays the reverse. 

#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
	// Variable declaration and initialization 
	int numElements = 0;
	char *randChars = nullptr;
	char cont = 'y'; 
	
	while (cont == 'y')
	{
		// User input for the size of the random character array
		cout << "How many characters? ";

		cin >> numElements;

		// Creation of dynamic character array to hold random characters 
		randChars = new char[numElements + 1];

		// Assignment of random character arrays to user-defined array size
		for (int i = 0; i < numElements; i++)
		{
			randChars[i] = 'a' + rand() % 26;
		}

		// Assignment of the null character to the last elemnt of the random character array
		randChars[numElements] = '\0';
		
		// Function call to display the values of the random character array
		showArray(randChars);
		cout << endl;

		// Function call to reverse the order of the random characters in the array
		 reverseArray(randChars);

		// Function call to display the reversed array
		showArray(randChars);
		cout << endl;

		// Get user input to continue the program
		cout << "Continue? (y/n) ";

		cin >> cont;

		cout << endl;

		// Deletes the memory allocated for the rando character array
		delete[] randChars;

	}
		
	return 0;
}