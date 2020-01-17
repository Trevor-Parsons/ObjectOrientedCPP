// Name: Trevor Parsons
// Date: 7/25/18
// Description: This is the main file for a program that accepts a series
// of user-entered parentheses and/or brackets, stores them in a STL stack,
// and then informs the user if the series of entered parentheses and/or
// brackets are nested properly. 

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	// Stack declaration for parentheses/brackets processing
	stack <char> charStack;

	// Variable declarations
	string strInput;
	bool inOrder = true;
	char contProg = 'y';
	char currentTop = ' ';
	int parenthesisCount;
	int bracketCount;

	// While loop that operates as long as the user wants to check
	// a series of parentheses and/or brackets for proper nesting
	while (contProg == 'y')
	{
		cout << "Enter parenthesis and/or braces: ";
		cin >> strInput;

		// Initial variable values to test new input
		inOrder = true; 
		parenthesisCount = 0;
		bracketCount = 0;

		// Loop used to check if input is properly nested
		for (int i = 0; i < strInput.length(); i++)
		{
			// Check if the first parenthesis/bracket is open
			if (strInput[i] == '{')
			{
				charStack.push(strInput[i]);
				bracketCount++;
				continue;
			}
			else if(strInput[i] == '(')
			{
				charStack.push(strInput[i]);
				parenthesisCount++;
				continue;
			}
			// Check if the first parenthesis/bracket is not open
			else if (charStack.empty())
			{
				inOrder = false;
				break; 
			}

			// Check to determine if closed parenthesis is nested properly
			if (strInput[i] == ')')
			{
				currentTop = charStack.top();
				charStack.pop();
				parenthesisCount--;

				if (currentTop == '{')
				{ 
					inOrder = false;
					break;
				}
			}

			// Check to detrimine if closed bracket is nested properly
			if (strInput[i] == '}')
			{
				currentTop = charStack.top();
				charStack.pop();
				bracketCount--;

				if (currentTop == '(')
				{
					inOrder = false;
					break;
				}
			}
		}

		// Inform the user if their input was properly nested
		// and ask if they want to try anoter input
		if (inOrder == true && charStack.empty()
			&& bracketCount == 0 && parenthesisCount == 0)
		{
			cout << "Parentheses/braces are nested properly" << endl;
			cout << "Continue? (y/n) ";
			cin >> contProg; 
			cout << endl << endl;
		}
		else
		{
			cout << "Parenthesis/braces are NOT nested properly" << endl;
			cout << "Continue? (y/n) ";
			cin >> contProg;
			cout << endl;
		}

		// Remove any left over stack contents from previous input
		while (!charStack.empty())
		{
			charStack.pop();
		}

	}

	return 0;
}