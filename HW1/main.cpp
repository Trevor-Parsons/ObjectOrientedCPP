// Author: Trevor Parsons
// Date: 6/20/18
// Description: Main function of HW1 that creates an arry of
// 20 random variables from 1-100, sorts the array by ascending value, and 
// then promps the user for a number between 1-100 and tells the user if
// that value is in the array of random numbers. 


#include <iostream>
#include <ctime>
#include <string>	
#include "functions.h"

using namespace std;

int main ()
  {
    srand (time (NULL));
  
    // Program Variables
    const int SIZE = 20;
    int randNums[SIZE];
    bool duplicateTest; 
    bool swap;
    int temp;
    int userNumber;
    bool cont = true;
    string userPref;

    // Assignment of random values to array
    do 
      {
        duplicateTest = true;
        
        for (int i = 0; i < SIZE; i++)
        {
          randNums[i] = rand () % 100;
        };
         
        
        for (int i = 0; i < SIZE - 1; i++)
        {
          for (int j = i + 1; j < SIZE; j++)
          {
              if (randNums[i] == randNums[j])
              {
                  duplicateTest = false; 
              }
           }
         } 
        } while (duplicateTest == false);

    // Bubble sort for values in array
    do
       {
         swap = false;
         for (int i = 0; i < SIZE - 1; i++)
     	   {
	       if (randNums[i] > randNums[i + 1])
	         {
	           temp = randNums[i];
	           randNums[i] = randNums[i + 1];
  	           randNums[i + 1] = temp;
	           swap = true;
	         }
	     }
       } while (swap);

	// Print random values in array 
	for (int i = 0; i < SIZE; i++)
	   {
		    cout << randNums[i] << " ";
	   }

	cout << endl << endl;

	// Check array for user value 
    while (cont == true)
      {

        cout << "Please enter a whole number between 1 and 100" << endl;

        cin >> userNumber;

        if (randNums[binSearch (randNums, 20, userNumber)] == userNumber)
	       {
	         cout << "yes, the index of your number is: " << binSearch (randNums, 20, userNumber) << endl;
	       }
        else
	       {
	         cout << "no" << endl;
	       }

        cout << "Would you like to try another value? Please enter yes or no: " << endl;

        cin >> userPref; 
        
        if (userPref == "no")
	      cont = false;
      }

    return 0;
}
