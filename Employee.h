#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
	string name;
	int number;
	string hireDate;

public:
	// Default and Parameterized constructors
	Employee();
	Employee(const string& empName, int empNumber, const string& empHireDate);
	// Accessors
	string getName() const;
	int getNumber() const;
	string getHireDate() const;
	// Mutators
	void setName(const string& empName);
	void setNumber(int empNumber);
	void setHireDate(const string& empHireDate);
	// Output function
	void print() const;
};

#endif

