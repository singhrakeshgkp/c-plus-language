#include <iostream>

int main(){
    int numArr[10] = {55,99,89,4,5};// partially initialized array element, value of rest of the element would be zero
    int numArr2[10];// Uninitialized array, array element value will be unpredictable here
    int size = sizeof(numArr)/sizeof(numArr[0]);
    std::cout << "array size " << std::endl;

   
   for(int i=0; i<size; i++){
    std::cout << numArr[i] << std::endl;
   }
std::cout << "numArr 2 elements are " << std::endl;
   for(int i=0; i<size; i++){
    std::cout << numArr2[i] << std::endl;
   }
}