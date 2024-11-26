#include <iostream>
class Employee{

    public:
    std::string firstName;
    std::string lastName;
    Employee(){} //default constructor
    Employee(std::string firstName, std::string lastName){
        this->firstName = firstName;
        this->lastName = lastName;
    }

    ~Employee(){
        std::cout << "Descructor Called " << std::endl;
    }
};

int insertIfEmployeeNotExist(std::vector<Employee> &employees, Employee emp){
    for(int i =0; i<employees.size(); i++){
        if(employees[i].firstName == emp.firstName && employees[i].lastName == emp.lastName){
            return i;
        }
    }
    employees.push_back(emp);
    return employees.size()-1;
}

int main(){
    
    std::vector<Employee> emps;
    Employee emp ("Rakesh","Singh");
    insertIfEmployeeNotExist(emps,emp);
    insertIfEmployeeNotExist(emps,emp);
    Employee emp2("Aryan", "Singh");
    insertIfEmployeeNotExist(emps,emp2);
    for(Employee e: emps){
        std::cout<< " first name " << e.firstName << " last name " << e.lastName << std::endl;
    }
    return 0;
}