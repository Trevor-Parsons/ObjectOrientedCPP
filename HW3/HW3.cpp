// Author: Trevor Parsons
// Date: 7/3/18
// Description: This program accepts and stores values for student first and last names,
// ID numbers, department name, and year in school. It then prints the stored vales. 

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

// Function prototype for displaying student characteristics
void displayStudent(Student);

int main()
{
	// Declaration and definition of student first and last names
	Name one, two, three;
	one.firstName = "Roger";
	one.lastName = "Federer";

	two.firstName = "Rafael";
	two.lastName = "Nadal";

	three.firstName = "Novak";
	three.lastName = "Djokovic";

	// Creation of an array of three student objects using the three different constructors
	Student studentList[3] = { Student(one, 12345, "Art", SENIOR),
							   Student(two, 56789),
							   Student() };
	
	// Assigning values for undefined student characteristics
	studentList[1].setDepartment("Computer Science");
	studentList[1].setYear(JUNIOR);

	// Assigning values for undefined student characteristics
	studentList[2].setName(three);
	studentList[2].setIdNumber(13579);
	studentList[2].setDepartment("Physics");
	studentList[2].setYear(FRESHMAN);

	// Using the displayStudent function to display student characteristics
	for (int i = 0; i < 3; i++)
	{
		displayStudent(studentList[i]);
	}

	cout << endl;
	system("pause");

	return 0;
}

// Function definition for displayStudent, used to display student characteristics
void displayStudent(Student s)
{
	cout << "Name: "; 
	s.getName();
	cout << endl; 
	cout << "ID Number: " << s.getIdNumber() << endl 
		 << "Department: " << s.getDepartment() << endl 
		 <<	"Year: " << s.getYear() + 1 << endl << endl;
}