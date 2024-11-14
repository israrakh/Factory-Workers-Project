#include "ShiftSupervisor.h"
#include <iostream>

using namespace std;
//Default constructor
ShiftSupervisor::ShiftSupervisor(): Employee(), annualSalary(0.0), annualBonus(0.0) {
// Postcondition: Initializes annualSalary and annualBonus to 0.0
}

//Parameterized constructor
ShiftSupervisor::ShiftSupervisor(const string& empName, int empNumber, const string& empHireDate, double empAnnualSalary, double empAnnualBonus)
    : Employee(empName, empNumber, empHireDate), annualSalary(empAnnualSalary), annualBonus(empAnnualBonus) {
    //Precondition: empAnnualSalary and empAnnualBonus must be non-negative
    //Postcondition: Initializes all member variables, including those from Employee
}

//Accessors
double ShiftSupervisor::getAnnualSalary() const {
//Postcondition: Returns the annual salary of the shift supervisor
    return annualSalary;
}

double ShiftSupervisor::getAnnualBonus() const {
//Postcondition: Returns the annual production bonus
    return annualBonus;
}

//Mutators
void ShiftSupervisor::setAnnualSalary(double empAnnualSalary) {
//Precondition: empAnnualSalary must be non-negative
//Postcondition: Sets the annual salary to empAnnualSalary
    if (empAnnualSalary >= 0.0) {
        annualSalary = empAnnualSalary;
    }
    else {
        cout << "Invalid annual salary! It must be non-negative." << endl;
    }
}

void ShiftSupervisor::setAnnualBonus(double empAnnualBonus) {
//Precondition: empAnnualBonus must be non-negative
//Postcondition: Sets the annual production bonus to empAnnualBonus
    if (empAnnualBonus >= 0.0) {
        annualBonus = empAnnualBonus;
    }
    else {
        cout << "Invalid annual bonus! It must be non-negative." << endl;
    }
}

// Override print function
void ShiftSupervisor::print() const {
//Postcondition: Outputs all employee and shift supervisor information to the console
    Employee::print(); // Call base class print function
    cout << "Annual Salary: $" << annualSalary << endl;
    cout << "Annual Bonus: $" << annualBonus << endl;
}