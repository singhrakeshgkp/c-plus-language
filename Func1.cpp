#include <iostream>
#include <cmath>
using namespace std;

double customPowFun(double base, int exponent);// fun declaration
int main(){
    int base, exponent;
    cout << "what is base ? :";
    cin >> base;
    cout << "what is exponent ? :";
    cin >> exponent;
    cout << "pow of " << base << " is " << pow(base,exponent) << endl;
    cout <<  "custom function pow of " << base << " is " << customPowFun(base,exponent) << endl;
}

double customPowFun(double base, int exponent){// fun definition.
   double result = 1;
    for(int i=0;i <exponent; i++){
        result = result*base;
    }
    return result;
}