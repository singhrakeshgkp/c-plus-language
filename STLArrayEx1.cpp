#include <iostream>
#include <array>

void printPassByValue(std::array<int,3> data);
void printPassByReference(std::array<int,3> &data,int size);

int  main(){
    std::array<int, 3> data = {4,5,6};
    printPassByReference(data,3);
    printPassByValue(data);
     

}
void printPassByValue(std::array<int,3> data){
    std::cout << "\n";
   for(int i = 0; i<data.size(); i++){
    std::cout << data[i] << "\t";
 }
}
void printPassByReference(std::array<int,3> &data, int size){
 std::cout << "\n";
 for(int i = 0; i<size; i++){
    std::cout << data[i] << "\t";
 }
}