#include <iostream>

struct Employee
{
    std::string name;
    private: int salary= 20000;
   public: int getSalary(){
        return salary;
    }

};

int main(){
    Employee emp;
    emp.name = "Rakesh Singh";
    std::cout<< "Name  " <<  emp.name << "salary " << emp.getSalary() << std::endl;
    return 0;
}