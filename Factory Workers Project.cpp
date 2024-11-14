// Factory Workers Project.cpp

#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

using namespace std;
int main()
{
    Employee emp1("Israr Ali", 12364, "01/11/2023");
    emp1.print();

    ProductionWorker worker1("Paul Jones", 12345, "10/28/2024", 1, 20.25);
    ProductionWorker worker2("Harriet Smith", 54321, "6/15/2024", 2, 25.50);

    cout << "\nProduction Worker:" << endl;
    worker1.print();
    cout << "\nProduction Worker:" << endl;
    worker2.print();
    
    cout << "\nShift Supervisor:" << endl;
    ShiftSupervisor supervisor("Elmer Velasquez", 100325, "1/17/2024", 70000.0, 1000.0);
    supervisor.print();

    TeamLeader teamLeader("Mike Rogers", 64327, "2/7/2024", 2, 25.50, 150.0, 20, 10);
    cout << "\nTeam Leader: " << endl;
    teamLeader.print();
    return 0;
}

