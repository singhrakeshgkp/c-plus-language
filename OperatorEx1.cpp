#include <iostream>
int main(){
    double avg = 20/6;  // this will print 3 not 3.33333
          avg = 20./6; //this will print 3.33333
    std::cout << avg << std::endl;

    double x;
    double y;
    x = 10;
    y=x=100;  // here evaluation will happens from right to left, x will be first initialize with 100 and the y = x; so value of both will be 100
    std::cout << x << "\t" << y << std::endl;
    x = 10;
    y=5;
    (y=x)=100; // equal to y=10, y=100;
     std::cout << x << "\t" << y << std::endl;

}