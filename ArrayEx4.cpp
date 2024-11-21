#include <iostream>

int main(){
    const int size = 10;
    int numArr[10] = {55,99,89,4,5};
   for(int i=0; i<size; i++){
    if(std::cin >> numArr[i]){
        //valid input
    }else{
        //not a valid input
        break;
    }
   }
   std::cout << "Printing array elements" << std::endl;
   for(int i=0; i<size; i++){
    std::cout << numArr[i] << std::endl;
   }
    std::cin.clear();
    std::cin.ignore(1000,'\n');
    std::cin >> numArr[7];  /* it will not ask for input as leftover junk value (char value what we passed) is still in input stream.
    we need to clcear and ignore that */
    std::cout << numArr[7] << std::endl;
}