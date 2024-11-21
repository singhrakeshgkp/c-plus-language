
#include <iostream>
#include "math_utils.h"

double area(Rectangle rectangle){
 return rectangle.length*rectangle.width;
}
double pow(double base, int raise){
  double result = 1;
  for(int i=1; i<=raise; i++){
    result *= base;
  }
  return result;
}
