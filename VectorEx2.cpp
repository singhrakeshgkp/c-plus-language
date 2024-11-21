#include <iostream>
#include <vector>
void printPassByValue(std::vector<int> data);
void printPassByReference(std::vector<int> &data);
int main(){
 std::vector<int> passByValueData = {1,2,3};
 std::vector<int> passByReferenceData = {9,10,11};
 printPassByReference(passByReferenceData);
 printPassByReference(passByReferenceData);
 printPassByReference(passByReferenceData);

/*
Above method will modify original variable value, in output u can observe  44 will be added multiple times, 

below method will copy original variable value, in output u can observe  44 will be added only one time 
*/
std::cout << "\n";
 std::cout << "pass by value start" << std::endl;
 printPassByValue(passByValueData);
 printPassByValue(passByValueData);
 printPassByValue(passByValueData);
 printPassByValue(passByValueData);
}

void printPassByValue(std::vector<int> data){
   data.push_back(44);
    std::cout << "\n";
   for(int i = 0; i<data.size(); i++){
    std::cout << data[i] << "\t";
 }
}
void printPassByReference(std::vector<int> &data){
 data.push_back(44);
 std::cout << "\n";
 for(int i = 0; i<data.size(); i++){
    std::cout << data[i] << "\t";
 }
}