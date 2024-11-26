#include <iostream>
class Employee{

    private: static int empCount;
    public:
    std::string firstName;
    std::string lastName;

    Employee(){
        empCount++;
    }

    public:
    static int getEmpCount(){
        return empCount;
    }

    ~Employee(){
        std::cout << "Descructor Called " << std::endl;
        empCount--;
    }
};

int Employee::empCount = 0;  // allocates memory , can not initialize from inside class



int main(){
    
    Employee emp1, emp2, emp3;
    std::cout << "Employee count is " << Employee::getEmpCount() << std::endl;
   
    return 0;
}