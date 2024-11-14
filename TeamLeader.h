#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"
#include <string>

using namespace std;
class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus; //Monthly bonus amount
    int requiredTrainingHours; //Required training hours per year
    int attendedTrainingHours; //Attended training hours

public:
    // Default constructor
    TeamLeader();

    //Parameterized constructor
    // Precondition: empMonthlyBonus, empRequiredTrainingHours, and empAttendedTrainingHours must be non-negative
    // Postcondition: Initializes all member variables, including those from ProductionWorker
    TeamLeader(const string& empName, int empNumber, const string& empHireDate,int empShift, double empHourlyPay, double empMonthlyBonus,
        int empRequiredTrainingHours, int empAttendedTrainingHours);

    //Accessors
    // Precondition: None
    // Postcondition: Returns the monthly bonus
    double getMonthlyBonus() const;

    // Precondition: None
    // Postcondition: Returns the required training hours
    int getRequiredTrainingHours() const;

    // Precondition: None
    // Postcondition: Returns the attended training hours
    int getAttendedTrainingHours() const;

    //Mutators
    // Precondition: empMonthlyBonus must be non-negative
    // Postcondition: Sets the monthly bonus to empMonthlyBonus
    void setMonthlyBonus(double empMonthlyBonus);

    // Precondition: empRequiredTrainingHours must be non-negative
    // Postcondition: Sets the required training hours to empRequiredTrainingHours
    void setRequiredTrainingHours(int empRequiredTrainingHours);

    // Precondition: empAttendedTrainingHours must be non-negative
    // Postcondition: Sets the attended training hours to empAttendedTrainingHours
    void setAttendedTrainingHours(int empAttendedTrainingHours);

    //Override print function
    // Precondition: None
    // Postcondition: Outputs all employee and team leader information to the console
    void print() const;
};
#endif // TEAMLEADER_H
