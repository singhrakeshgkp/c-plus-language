#include <iostream>
using std::cout;

int main(){
    int empsalary = 20000;
    int managerSalary = empsalary;// empsalary is copied into manager salary now they both have 20000 value
    empsalary = 30000; // Here only empsalary will be chaged not manager salary as they are not pointing to same thing
    cout << empsalary;
    cout << "\n Manager salary\n";
    cout << managerSalary;

}