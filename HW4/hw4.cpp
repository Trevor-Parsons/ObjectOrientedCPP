// Name: Trevor Parsons
// Date: 7/12/18
// Description: Main file used to create MyString objects, display their contentes, and manipulate their contents.

#include <iostream>
#include <string>
#include <cstring>
#include "MyString.h"

using namespace std;

int main()
{
	// Test for MyString(string) constructor
	MyString s1("abc");

	cout << "String Object 1: ";
	s1.display(); 
	cout << endl;

	// Test for MyString() constructor
	MyString s2;

	cout << "String Object 2: ";
	s2.display();
	cout << endl;

	// Test for copy constructor
	MyString s3 = s1;
	
	cout << "String Object 3: ";
	s3.display(); 
	cout << endl;
	
	// Test for overloaded operator= 
	s2 = s1;

	cout << "String Object 2 (after reassignment): ";
	s2.display();
	cout << endl;

	// Test for overloaded operator+=
	s1 += s2; 

	cout << "String Object 1 (after string addition): ";
	s1.display();
	cout << endl;

	// Test for properly incrimenting strCount as objects are created
	cout << "Current number of string objects: "
		 << s1.getStrCount() << endl;



	system("pause");

	return 0;
}