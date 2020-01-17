// Author: Trevor Parsons
// Date: 7/3/18
// Description: .cpp file for the Student class that contains constructor and class function definitions.

#include <iostream>
#include <string>
#include "student.h"

using namespace std;

// Constructors
Student::Student()
{
	stuName.firstName = "";
	stuName.lastName = "";
	idNumber = 0;
	department = "";
	stuYear = FRESHMAN;
}

Student::Student(Name n, int x)
{
	stuName.firstName = n.firstName;
	stuName.lastName = n.lastName;
	idNumber = x;
	department = "";
	stuYear = FRESHMAN;
}

Student::Student(Name n, int x, string y, Year z)
{
	stuName.firstName = n.firstName;
	stuName.lastName = n.lastName;
	idNumber = x;
	department = y;
	stuYear = z; 
}


// Get methods
void Student::setName(Name s)
{
	stuName.firstName = s.firstName;
	stuName.lastName = s.lastName;
}

void Student::setIdNumber(int x)
{
	idNumber = x; 
}

void Student::setDepartment(string x)
{
	department = x; 
}

void Student::setYear(int x)
{
	stuYear = static_cast<Year>(x);
}

// Set methods
void Student::getName() const
{
	cout << stuName.firstName << " " << stuName.lastName;
}

int Student::getIdNumber() const
{
	return idNumber;
}

string Student::getDepartment() const
{
	return department; 
}

int Student::getYear() const
{
	return stuYear; 
}