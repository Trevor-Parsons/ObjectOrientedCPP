// Name: Trevor Parsons
// Date: 7/18/18
// Description: This is the file that contains the class declaration for the
// StringList class, member struture ListNode, member variables, and member functions.

#ifndef STRINGLIST_H
#define STRINGLIST_H

#include <string>
using namespace std;

class StringList
{
private:

	struct ListNode
	{
		string text;
		ListNode *next;
	};

	ListNode *head = nullptr;

public:
	// Constructor
	StringList() { head = nullptr; }
	
	// Destructor
	~StringList();

	// Linked List operations
	void insertFront(string);
	void insertBack(string);
	void deleteFront();
	void deleteBack();
	void display();
};

#endif