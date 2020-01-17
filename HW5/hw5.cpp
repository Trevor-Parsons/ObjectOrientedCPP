// Name: Trevor Parsons
// Date: 7/18/18
// Description: This file is used to create a StringList object and instert nodes
// containing text in the front and back of the list, displaying the contents of the
// list as nodes are added. Then, all of the nodes are deleted one at a time, from 
// front to back, and the list is displayed after each node deletion. 

#include <iostream>
#include <string>
#include "StringList.h"

using namespace std;

int main()
{
	// Create StringList object to begin linked list.
	StringList Example;

	// Add nodes to Example that contain text, alternating positions from 
	// the front of the list to the back of the list.
    Example.insertFront("test3");
	cout << "The current contents of the list are:" << endl;
	Example.display();
	cout << endl;

	Example.insertBack("test4");
	cout << "The current contents of the list are:" << endl;
	Example.display();
	cout << endl;

	Example.insertFront("test2");
	cout << "The current contents of the list are:" << endl;
	Example.display();
	cout << endl;

	Example.insertBack("test5");
	cout << "The current contents of the list are:" << endl;
	Example.display();
	cout << endl;

	Example.insertFront("test1");
	cout << "The current contents of the list are:" << endl;
	Example.display();
	cout << endl;

	Example.insertBack("test6");
	cout << "The current contents of the list are:" << endl;
	Example.display();
	cout << endl;

	// Delete nodes from the list, alternating from front to back
	// of the list.
	Example.deleteFront();
	cout << "The current contents of the list are:" << endl;
	Example.display();
	cout << endl;

	Example.deleteBack();
	cout << "The current contents of the list are:" << endl;
	Example.display();
	cout << endl;

	Example.deleteFront();
	cout << "The current contents of the list are:" << endl;
	Example.display();
	cout << endl;

	Example.deleteBack();
	cout << "The current contents of the list are:" << endl;
	Example.display();
	cout << endl;

	Example.deleteFront();
	cout << "The current contents of the list are:" << endl;
	Example.display();
	cout << endl;

	Example.deleteBack();
	cout << "The current contents of the list are:" << endl;

	// Use the display() function to show that all of the nodes have been deleted
	// and the list is now empty.
	Example.display();
	cout << endl << endl << endl;


	system("pause");
	return 0;
}