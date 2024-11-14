#include "ProductionWorker.h"
#include <iostream>

// Default constructor
ProductionWorker::ProductionWorker() :Employee(), shift(1), hourlyPayRate(0.0) {}

//Parameterized constructor
ProductionWorker::ProductionWorker(const string& empName, int empNumber, const string& empHireDate, int empShift, double empHourlyPayRate)
	:Employee(empName, empNumber, empHireDate), shift(empShift), hourlyPayRate(empHourlyPayRate) {}

//Accessors
int ProductionWorker::getShift() const{
	return shift;
}
double ProductionWorker::getHourlyPayRate() const {
	return hourlyPayRate;
}

//Mutators
void ProductionWorker::setShift(int empShift) {
	shift = empShift;
}
void ProductionWorker::setHourlyPayRate(double empHourlyPayRate) {
	hourlyPayRate = empHourlyPayRate;
}

//Print 
void ProductionWorker::print() const {
	Employee::print(); // Calling base class print function
	cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
	cout << "Hourly Pay Rate : $" << hourlyPayRate << endl;
}