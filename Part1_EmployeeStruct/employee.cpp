#include <iostream>
#include "employeestruct.h"
using namespace std;

int main()
{
    // Employee anEmployee;
    // anEmployee.firstInitial = 'M';
    // anEmployee.lastInitial = 'G';
    // anEmployee.employeeNumber = 42;
    // anEmployee.salary = 80000;
    Employee* anEmployee = getEmployee();
    anEmployee->employeeNumber = 1;
    anEmployee->salary = 80000;
    anEmployee->firstInitial = 'M';
    cout << "Employee: " << anEmployee->employeeNumber << " " << anEmployee->salary << endl;
    delete anEmployee;
    anEmployee = nullptr;
}
