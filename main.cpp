#include <iostream>
#include "Employee.h"
int main(){
    Employee emp;
    emp.fullName = "Rakesh Singh";
    emp.setSalary(40000);
    outputSalary(emp);

    std::cout << std::endl;
    std::cout << emp << std::endl;

    return 0;
}