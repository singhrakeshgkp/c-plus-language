#include <iostream>

template<typename T>
void swap(T &a, T &b){
T temp = a;
a = b;
b = temp;
}
int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    std::cout << a << " and " << b << std::endl;
    std::string str1 = "singh";
    std::string str2 = "rakesh";
    swap(str1,str2);
std::cout << str1 << " and " << str2 << std::endl;
    return 0;
}