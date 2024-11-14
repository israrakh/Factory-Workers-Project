#include "Employee.h"
#include <iostream>

// Default constructor
// Precondition: None
// Post condition: Initializing name and hire date to empty string and number to zero
Employee::Employee() :name(""), number(0), hireDate("") {}

// Parameterized constructor
// Precondition: empNumber should be a positive integer
// Postcondition: Initializing name, number, and hireDate to provided values.
Employee::Employee(const string& empName, int empNumber, const string& empHireDate) :name(empName), number(empNumber), hireDate(empHireDate) {}

// Accessors
string Employee::getName() const {
	return name;
}
int Employee::getNumber() const {
	return number;
}
string Employee::getHireDate() const {
	return hireDate;
}

// Mutators
void Employee::setName(const string& empName) {
	name = empName;
}
void Employee::setNumber(int empNumber) {
	number = empNumber;
}
void Employee::setHireDate(const string& empHireDate) {
	hireDate = empHireDate;
}

// Output
void Employee::print() const {
	cout << "Employee Name: " << name << endl;
	cout << "Employee Number : " << number << endl;
	cout << "Employee Hire Date: " << hireDate << endl;
}