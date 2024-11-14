#include "TeamLeader.h"
#include <iostream>

using namespace std;

//Default constructor
TeamLeader::TeamLeader():ProductionWorker(), monthlyBonus(0.0), requiredTrainingHours(0), attendedTrainingHours(0) {
    // Postcondition: Initializes monthlyBonus, requiredTrainingHours, and attendedTrainingHours to 0
}

//Parameterized constructor
TeamLeader::TeamLeader(const string& empName, int empNumber, const string& empHireDate,int empShift, double empHourlyPay, double empMonthlyBonus,
    int empRequiredTrainingHours, int empAttendedTrainingHours):ProductionWorker(empName, empNumber, empHireDate, empShift, empHourlyPay),
    monthlyBonus(empMonthlyBonus), requiredTrainingHours(empRequiredTrainingHours), attendedTrainingHours(empAttendedTrainingHours) {
    //Precondition: empMonthlyBonus, empRequiredTrainingHours, and empAttendedTrainingHours must be non-negative
    //Postcondition: Initializes all member variables, including those from ProductionWorker
}
//Accessors
double TeamLeader::getMonthlyBonus() const {
    //Postcondition: Returns the monthly bonus
    return monthlyBonus;
}

int TeamLeader::getRequiredTrainingHours() const {
    //Postcondition: Returns the required training hours
    return requiredTrainingHours;
}

int TeamLeader::getAttendedTrainingHours() const {
    //Postcondition: Returns the attended training hours
    return attendedTrainingHours;
}
//Mutators
void TeamLeader::setMonthlyBonus(double empMonthlyBonus) {
    //Precondition: empMonthlyBonus must be non-negative
    //Postcondition: Sets the monthly bonus to empMonthlyBonus
    if (empMonthlyBonus >= 0.0) {
        monthlyBonus = empMonthlyBonus;
    }
    else {
        cout << "Invalid monthly bonus! It must be non-negative." << endl;
    }
}

void TeamLeader::setRequiredTrainingHours(int empRequiredTrainingHours) {
    //Precondition: empRequiredTrainingHours must be non-negative
    //Postcondition: Sets the required training hours to empRequiredTrainingHours
    if (empRequiredTrainingHours >= 0) {
        requiredTrainingHours = empRequiredTrainingHours;
    }
    else {
        cout << "Invalid required training hours! It must be non-negative." << endl;
    }
}

void TeamLeader::setAttendedTrainingHours(int empAttendedTrainingHours) {
    //Precondition: empAttendedTrainingHours must be non-negative
    //Postcondition: Sets the attended training hours to empAttendedTrainingHours
    if (empAttendedTrainingHours >= 0) {
        attendedTrainingHours = empAttendedTrainingHours;
    }
    else {
        cout << "Invalid attended training hours! It must be non-negative." << endl;
    }
}

//Override print function
void TeamLeader::print() const {
    //Postcondition: Outputs all employee and team leader information to the console
    ProductionWorker::print(); // Call base class print function
    cout << "Monthly Bonus: $" << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}