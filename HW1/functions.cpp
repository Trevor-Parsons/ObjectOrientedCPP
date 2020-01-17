#pragma once

// Author: Trevor Parsons
// Date: 6/20/18
// Description: File that contains the definition of the binary search
// function for use in main.cpp. 

int binSearch(int x[], int sizeOf, int searchValue)
{
	int first = 1;
	int last = sizeOf - 1;
	int middle;
	int position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;

		if (x[middle] == searchValue)
		{
			found = true;
			position = middle;
		}

		else if (x[middle] > searchValue)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}

