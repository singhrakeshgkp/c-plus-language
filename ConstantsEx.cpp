#include <iostream>
#define X 30
int main(){
    const int x = 10;
   // x=20; this will give compilation error
  // X = 20; compilation error
  enum {a = 10};
  std::cout << a << std::endl;
   std::cout << X << std::endl;
}