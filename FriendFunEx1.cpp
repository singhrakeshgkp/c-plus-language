#include <iostream>

class Employee{
    private:
    int salary;

    public:
    std::string fullName;

    void setSalary(int salary){
        this->salary = salary;
    }
    friend void outputSalary(const Employee &emp);
    friend std::ostream& operator << (std::ostream& output, Employee &emp);
    };

std::ostream& operator << (std::ostream& output, Employee &emp){  // overloaded insert operator
        output << "Full name " << emp.fullName  << std::endl;
        return output;
    }
void outputSalary(const Employee &emp){
    std::cout << emp.salary;
}

int main(){
    Employee emp;
    emp.fullName = "Rakesh Singh";
    emp.setSalary(40000);
    outputSalary(emp);

    std::cout << std::endl;
    std::cout << emp << std::endl;

    return 0;
}