#include <iostream> 
#include <stdexcept>
#include "Database.h"

using namespace std;
namespace Records{
    Database::Database() : mNextEmployeeNumber(kFirstEmployeeNumber)
    {
    }

    Employee& Database::addEmployee(const string& firstName,
                                    const string& lastName)
    {
        Employee theEmployee;
        theEmployee.setFirstName(firstName);
        theEmployee.setLastName(lastName);
        theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
        theEmployee.hire();
        mEmployees.push_back(theEmployee);
        return mEmployees[mEmployees.size() - 1];
    }
    
    // Employee& Database::removeEmployee(int employeeNumber)
    // {
    //     int i = 0;
    //     for (auto& employee : mEmployees){
    //         if (employee.getEmployeeNumber() == employeeNumber){
    //             mEmployees.erase(mEmployees.begin() + i );
    //             break;
    //         }
    //         i++;
    //     }
    //     throw runtime_error("No employee found.");
    // }

    Employee& Database::getEmployee(int employeeNumber)
    {
        for (auto& employee : mEmployees){
            if (employee.getEmployeeNumber() == employeeNumber){
                return employee;
            }
        }
        throw runtime_error("No employee found.");
    }

    Employee& Database::getEmployee(const std::string& firstName,
                                    const std::string& lastName)
    {
        for (auto& employee : mEmployees){
            if (employee.getFirstName() == firstName && employee.getLastName() == lastName){
                return employee;
            }
        }
        throw runtime_error("No employee found.");
    }

    void Database::displayAll() const
    {
        for (const auto& employee : mEmployees) {
            employee.display();
        }
    }

    void Database::displayCurrent() const
    {
        for (const auto& employee : mEmployees) {
            if (employee.getIsHired())
                employee.display();
        }
    }

    void Database::displayFormer() const
    {
        for (const auto& employee : mEmployees) {
            if (employee.getIsFired())
                employee.display();
        }
    }
}

