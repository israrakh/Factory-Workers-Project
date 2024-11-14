#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"
#include <string>

class ProductionWorker : public Employee {
private:
	int shift; // 1 for day shift, 2 for night shift
	double hourlyPayRate;

public:
	// Defualt constructor
	// Precondition: None
	// Postcondition: Initializes shift to 1, and hourly pay rate to 0.0
	ProductionWorker();
	// Parameterized constructor
	// Precondition: Shift is either 1 or 2, hourly pay rate is non-negative
	ProductionWorker(const string& empName, int empNumber, const string& empHireDate, int empShift, double empHourlyPayRate);
	
	//Accessors
	//Postcondition: returns the shift
	int getShift() const;
	//Postcondition: returns the hourly pay rate
	double getHourlyPayRate() const;

	//Mutators
	//Precondition: empShift is either 1 or 2
	//Postcondition: sets the shift to empShift
	void setShift(int empShift);
	//Precondition: empHourlyPayRate is non-negative
	//Postcondition: sets the hourly pay rate to empHourlyPayRate
	void setHourlyPayRate(double empHourlyPayRate);
	
	// Overriding print function
	//Postcondition: outputs employee's name, number, hire date, shift, and hourly pay rate.
	void print() const;
};

#endif // !PRODUCTIONWORKER_H
