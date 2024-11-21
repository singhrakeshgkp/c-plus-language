#include <iostream>
#include <vector>

int main(){
    std::vector<int> data = {1,3,6,9,12,15};
    data.push_back(18);//add element to end 
    std::cout << data[2] << std::endl;
    std::cout << data[data.size()-1] << std::endl;
    data.pop_back();// remove last element
    std::cout << data[data.size()-1] << std::endl;
}