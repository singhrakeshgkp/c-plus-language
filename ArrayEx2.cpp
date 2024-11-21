#include <iostream>
void printArray1(int numArr []){
 int size = sizeof(numArr)/sizeof(int); // will return size of pointer not the array
 std::cout << size << std::endl;  
}
void printArray2(int numArr[], int size){
    for(int i =0; i<size; i++){
        std::cout << numArr[i] << std::endl;
    }
}
int main(){
    int numArr[10] = {55,99,89,4,5,6,7,8,9,10};
    int size = sizeof(numArr)/sizeof(numArr[0]);
    std::cout << "array size " << std::endl;
    printArray1(numArr);
    std::cout << "Printing array element" << std::endl;
    printArray2(numArr,size);
}