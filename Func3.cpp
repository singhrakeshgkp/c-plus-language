#include <iostream>

void defaultFunTest(std::string str1, std::string str2 = "suresh"){
 std::cout << str1 << " " << str2 << std::endl;
}
int main(){
 defaultFunTest("rakesh","mahesh");
}