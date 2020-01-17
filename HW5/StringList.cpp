// Name: Trevor Parsons
// Date: 7/18/18
// Description: This file contains the definitions for the StringList member functions. 

#include <iostream>
#include <string>
#include "StringList.h"

using namespace std;

// Linked List Operations

//Destructor
StringList::~StringList()
{
	ListNode *nodePtr;
	ListNode *nextNode;

	nodePtr = head;

	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;

		delete nodePtr;

		nodePtr = nextNode;
	}
}

// Function to insert a node at the beginning of the list
void StringList::insertFront(string x)
{
	ListNode *newNode;
	ListNode *nodePtr;

	newNode = new ListNode;
	newNode->text = x;

	if (!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		nodePtr = head;
		head = newNode;
		newNode->next = nodePtr;
	}
}

// Function to insert a node at the back of the list
void StringList::insertBack(string x)
{
	ListNode *newNode;
	ListNode *nodePtr;
	ListNode *previousNode = nullptr;

	newNode = new ListNode;
	newNode->text = x;

	if (!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		nodePtr = head;

		while (nodePtr != nullptr)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		
		previousNode->next = newNode;
		newNode->next = nullptr;
	}
}

// Function to delete the first node in the list
void StringList::deleteFront()
{
	ListNode *nodePtr;

	nodePtr = head->next;
	delete head;
	head = nodePtr;
}

// Function for deleting the last node in the list
void StringList::deleteBack()
{
	ListNode *nodePtr;
	ListNode *previousNode = nullptr;

	nodePtr = head;

	while (nodePtr->next != nullptr)
	{
		previousNode = nodePtr;
		nodePtr = nodePtr->next;
	}
	
	if (!head)
	{
		return;
	}
	else if (!head->next)
	{
		delete nodePtr;
		head = nullptr;
	}
	else
	{
		delete nodePtr;
		previousNode->next = nullptr;
	}


}

// Display Function
void StringList::display()
{
	ListNode *x = head;

	if (!head)
	{
		cout << "The list is empty!" << endl;
	}
	else
	{
		while (x != nullptr)
		{
			cout << x->text << endl;
			x = x->next;
		}
	}
}