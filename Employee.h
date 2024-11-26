#include <iostream>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{
    private:
    int salary;

    public:
    std::string fullName;
    void setSalary(int salary);
    friend void outputSalary(const Employee &emp);
    friend std::ostream& operator << (std::ostream& output, Employee &emp);
    };

    #endif