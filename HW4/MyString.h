// Name: Trevor Parsons
// Date: 7/12/18
// Description: File containing definitions for the MyString class including member variables, functions,
// constructors, and destructors.

#ifndef MYSTRING_H
#define MYSTRING_H

#include <string>
#include <cstring>

using namespace std;

class MyString
{
private:
	// Member variables 
	char* str;
	int SIZE;
	static int strCount;

public:
	// Constructors
	MyString();
	MyString(string);
	MyString(const MyString &);

	// Destructor
	~MyString();

	// Set functions
	void setStr(char, int);
	void setSIZE(int);

	// Get functions
	char* getStr() const;
	int getSIZE() const;
	int getStrCount() const;

	// Display function
	void display();

	// Operator overloading
	void operator= (const MyString &);
	void operator+= (const MyString &);
};

#endif 