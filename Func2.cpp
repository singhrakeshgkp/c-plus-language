#include <iostream>
int main(){
 std::string str = "hello world";
 std::cout << str.size() <<std::endl;
 std::cout << str.length() <<std::endl;
 str += ", welcome";
 str.append(" to c++");
 str.insert(3,"_____"); // insert given string after 3rd char
 str.erase(3,5);// erase 5 char after 3rd char
 std::string str2 = "hello";
 str2.pop_back(); // remove one char from end of string
 std::cout <<  str2 << std::endl;
 std::string str3 = "welcome to cinema";
 str3.replace(11,6,"c++ tutorial");// this will replace all 6 char which is after index 11 with given string
 std::cout << str3 << std::endl;
 std::cout << str <<std::endl;
}