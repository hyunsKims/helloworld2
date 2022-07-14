#pragma oncde
#include <iostream>
#include <vector>
#include "Employee.h"

namespace Records{
    const int kFirstEmployeeNumber = 1000;

    class Database
    {
        public:
            Database();

            // Employee 등록
            Employee& addEmployee(
                const std::string& firstName,
                const std::string& lastName
            );
            // Employee& removeEmployee(
            //     int employeeNumber
            // );
            
            // 두 가지 버전으로 Employee 객체를 얻을 수 있도록 한다.
            Employee& getEmployee(
                int employeeNumber
            );
            Employee& getEmployee(
                const std::string& firstName,
                const std::string& lastName
            );  

            // 출력
            void displayAll() const;
            void displayCurrent() const;
            void displayFormer() const;

        private:
            std::vector<Employee> mEmployees;
            int mNextEmployeeNumber;
    };
}