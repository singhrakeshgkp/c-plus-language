#include <iostream>
#include <fstream>

int main(){
    std::ifstream file ("demo.txt");
    std::string input;
    std::vector<std::string> names;
    while (file >> input)//read file until there is nothing left
    {
        names.push_back(input);
        /* code */
    }

    for(std::string name : names){
        std::cout << name << std::endl;
    }
    return 0;
    
}