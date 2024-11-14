// ShiftSupervisor.h
#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"
#include <string>

using namespace std;
class ShiftSupervisor : public Employee {
private:
    double annualSalary; //Annual salary of the shift supervisor
    double annualBonus;  //Annual production bonus for meeting goals

public:
    //Default constructor
    ShiftSupervisor();

    //Parameterized constructor
    //Precondition: empAnnualSalary and empAnnualBonus must be non-negative
    //Postcondition: Initializes all member variables, including those from Employee
    ShiftSupervisor(const string& empName, int empNumber, const string& empHireDate, double empAnnualSalary, double empAnnualBonus);

    //Accessors
    //Precondition: None
    //Postcondition: Returns the annual salary of the shift supervisor
    double getAnnualSalary() const;

    //Precondition: None
    //Postcondition: Returns the annual production bonus
    double getAnnualBonus() const;

    //Mutators
    //Precondition: empAnnualSalary must be non-negative
    //Postcondition: Sets the annual salary to empAnnualSalary
    void setAnnualSalary(double empAnnualSalary);

    //Precondition: empAnnualBonus must be non-negative
    //Postcondition: Sets the annual production bonus to empAnnualBonus
    void setAnnualBonus(double empAnnualBonus);

    //Override print function
    //Precondition: None
    //Postcondition: Outputs all employee and shift supervisor information to the console
    void print() const;
};

#endif // SHIFTSUPERVISOR_H