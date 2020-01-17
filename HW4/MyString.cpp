// Name: Trevor Parsons
// Date: 7/12/18
// Description: File containing definitions for MyString class functions, constructors, and destructors.

#include "MyString.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// Static variable definition
int MyString::strCount = 0;

// Constructors
MyString::MyString()
{
	str = nullptr; 
	SIZE = 0;
	strCount++;
}

MyString::MyString(string x)
{
	SIZE = x.length();
	str = new char[SIZE + 1];
	strcpy(str, x.c_str());
	str[SIZE] = '\0';
	strCount++;
}

// Copy constructor
MyString::MyString(const MyString &x)
{
	SIZE = strlen(x.str);
	str = new char[SIZE + 1];
	str[SIZE] = '\0';
	strcpy(str, x.str);

	strCount++;
}

// Set functions
void MyString::setStr(char x, int SIZE)
{
	str = new char[SIZE];
}

void MyString::setSIZE(int x)
{
	SIZE = x;
}

// Destructor
MyString::~MyString()
{
	// delete[] str;
}

// Get functions
char* MyString::getStr() const
{
	return str;
}

int MyString::getSIZE() const
{
	return SIZE;
}

int MyString::getStrCount() const
{
	return strCount;
}

// Display function
void MyString::display()
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << str[i];
	}
}

// Operator overloading
void MyString::operator= (const MyString &x)
{
	SIZE = strlen(x.str);
	str = new char[SIZE + 1];
	str[SIZE] = '\0';
	strcpy(str, x.str);
}

void MyString::operator+= (const MyString &x)
{
	char *temp = new char[strlen(str) + 1];
	temp[strlen(str)] = '\0';
	strcpy(temp, str);
	delete[] str;

	SIZE = strlen(temp) + strlen(x.str);
	str = new char[SIZE + 2];
	str = strcat(temp, x.str);
	str[SIZE + 1] = '\0';
}