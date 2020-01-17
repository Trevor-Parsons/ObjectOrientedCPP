// Autor: Trevor Parsons
// Date: 6/23/18
// Description: Function definitions for main.cpp

#include <iostream>

using namespace std;

// Function definition for showArray, which is used to output the contents of a 
// dynamially allocated array 
void showArray(char * randArray)
{
	while (*randArray != '\0')
	{
		cout << *randArray;

		*(randArray++);
	}
}

// Function definition for reverseArray, which reassigns the values of a dynamically
// allocated array in reverse order 
void reverseArray(char * randArray)
{
	int beginning = 0;
	int end = 0;
	char* p = randArray;

	while (*p != '\0')
	{
		p++;

		end++;
	}
	end--;

	while (beginning < end)
	{
		char temp = *(randArray + beginning);
		*(randArray + beginning) = *(randArray + end);
		*(randArray + end) = temp;
		end--; 
		beginning++;
	}
}