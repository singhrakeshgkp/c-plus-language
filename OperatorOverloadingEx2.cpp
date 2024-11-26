#include <iostream>
class Employee{
    public:
    std::string firstName;
    std::string lastname;

    Employee(){

    }
    Employee (std::string firstName, std::string lastname){
        this->firstName = firstName;
        this->lastname = lastname;
    }

};

 std::ostream& operator << (std::ostream& output, Employee &emp){  // overloaded insert operator
        output << "First name " << emp.firstName << "\nLast name " << emp.lastname << std::endl;
        return output;
    }

std::istream& operator >> (std::istream &input, Employee &emp){ // Overloaded extraction operator
    input >> emp.firstName >> emp.lastname;
    return input;
}

int main(){
    Employee emp("Rakesh","Singh");
    std::cout << emp << std::endl;  //without operator overloading it will give compile time error, 
    Employee emp2;
    std::cin >> emp2;

    std::cout << emp2 << std::endl; 

    return 0;
}