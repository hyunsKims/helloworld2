#include <iostream>
#include "Employee.h"
using namespace std;
using namespace Records;

enum class MyEum : int 
{
    EnumValue1,
    EnumValue2 = 10,
    EnumValue3
};

int main()
{
    cout << "Testing the Employee class." << endl;
    Employee emp;
    emp.setFirstName("John");
    emp.setLastName("Kim");
    emp.setEmployeeNumber(81);
    emp.setSalary(50000);
    emp.promote();
    emp.promote(50);
    emp.hire();
    emp.display();

    MyEum value1 = MyEum::EnumValue1;

    int num = static_cast<int>(value1);
    if (num == 0)
    {
        cout << "hi" << endl;
    }

    return 0;
}