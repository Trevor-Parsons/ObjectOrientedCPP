// Author: Trevor Parsons
// Date: 7/3/18
// Description: Header file that contains declarations for the struct Name, enum year, and class Student.

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

// Declaration for Name structure that holds students' first and last names
struct Name {
	string firstName;
	string lastName;
};

// Declaration for year enum that corresponds to years in shool
enum Year { FRESHMAN, SOPHMORE, JUNIOR, SENIOR };

// Declaration for Student class that contains student characteristic variables, constructors,
// set methods, and get methods for member variables
class Student
{
private:
	Name stuName; 
	int idNumber;
	string department;
	Year stuYear; 

public:
	// Constructors
	Student();
	Student(Name, int);
	Student(Name, int, string, Year);

	// Set methods
	void setName(Name);
	void setIdNumber(int);
	void setDepartment(string);
	void setYear(int);

	// Get methods
	void getName() const;
	int getIdNumber() const;
	string getDepartment() const;
	int getYear() const;

};

#endif 
