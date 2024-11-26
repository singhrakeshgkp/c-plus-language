#include <iostream>
#include <string>
#include "Employee.h"

//class Employee{  this is not needed in cpp file as in header file we have already defined. also get rid of all data member, only functions will be here.
// Prefix every method of class with its Class name, static and access modifier such as public, private is no more needed here.
    void Employee::setSalary(int salary){
        this->salary = salary;
    }
   //  void ::outputSalary(const Employee &emp);
    // std::ostream& operator << (std::ostream& output, Employee &emp);
   // };

std::ostream& operator << (std::ostream& output, Employee &emp){  // overloaded insert operator
        output << "Full name " << emp.fullName  << std::endl;
        return output;
    }
void outputSalary(const Employee &emp){
    std::cout << emp.salary;
}