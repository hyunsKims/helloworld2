struct Employee {
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary;
};

struct Employee *getEmployee() 
{
    struct Employee *Employee_pointer = new Employee();
    return Employee_pointer;
}