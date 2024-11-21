#include <iostream>
int main(){
    int numArr[10] = {55,99,89,4,5,6,7,8,9,10};

    //int size = sizeof(numArr) this will print 40 bytes, each element has 4 bytes so to get actual size we need to divide totlabyte/size of one element
    int size = sizeof(numArr)/sizeof(numArr[0]);
    std::cout << size << std::endl;
    std::cout << "element of arrays are " << std::endl;
    for(int i =0; i<size; i++){
        std::cout << numArr[i] << std::endl;
    }
}