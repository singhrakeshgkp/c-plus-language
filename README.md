# C++ Language
- [Reference](#reference)
- [Basic](#Basic)
   - [Hello world Program](#Hello-world-program)
   - [Variables](#variables)
   - [Functions](#functions)
   - [Data Types](#data-types)
   - [Constants](#constants)
   - [Operand Operators and Precedence](#operand-operators-and-precedence)
   - [Arrays And Vector](#arrays-and-vector)
     - [Arrays](#arrays)
     - [Vector](#vector)
     - [STL Array](#stl-array)
     - [Array vs STL Array vs Vector](#array-vs-stl-array-vs-vector)
     
# Reference
- https://en.cppreference.com/w/
# Basic
- For windows use C++ Builder and visual studio code tool.
- For Mac u can use Visual studio code, and run g++ command from terminal if it gives ```clang: error: no input files``` response that mean c++ is already installed
## Hello world Program
- Create new File ```MyFirstCPlus.cpp```, compile it using ```g++ <.cpp file name>``` command and run it with ```./a.out``` command.
## Variables
- Create new file ```Variables1Ex.cpp```----> this will output variable values
- **String concatenation** Create new file ```Variables2Ex.cpp``` this will concatenate variable in string.
- **Input Variable value from User console** create new file ```Variables3.Ex.cpp``` this will take input from user and output that on console.
- **Input String value from console into a variable**- ```Variables4Ex.cpp``` If we pass ```hello world``` it will grab only first word into variable.
- **Input whole line from Console into a variable** - ```Variables5Ex.cpp```
- 

## Functions
- **Using Predefined Fuction and Creating custom function** create a file ```Func1.cpp``` this will use pow(base,exponent) function and return power of base.
- **Functions in String class** ```Func2.cpp``` ---> size and length function produce same results.

## Data Types
## Constants
- Create a file named ```ConstantsEx.cpp``` and define following constants
   - Defining Constants using macro, syntax ```define X 10```
   - Constants using enum ```enum{x=10}```
   - Constants using keyword ```const``` ```const x =10```

## Operand Operators and Precedence
- ```OperatorEx1``` https://en.cppreference.com/w/cpp/language/operator_precedence
## Arrays And Vector
  ### Arrays
   - **Calculating Array size** ```ArrayEx1.cpp```
   - **Passing array to function** ```ArrayEx2.cpp``` printArray1 method will not be able to iterate as we dont know size of array and if we calculate 
     it, we will get size of pointer not array. printArray2 method get rid of this limitation.
   - **Initialized and partiallized array element values** ```ArrayEx3.cpp``` If array is partially initialized, rest of the elements values would be 
      zero, if its not initialized array element values are unpredictable.
   - **Initialize array element from console** ```ArrayEx4.cpp```

### Vector 
- Vector is a dynamic collection. use ```g++ VectorEx1.cpp -std=c++11``` to avoid compilation issue use c++11 while compiling
- ```VectorEx1.cpp``` ----> How to use vector
- **Passing Vector to Method** --> ```VectorEx2.cpp```
   - **PassByValue**--> if we pass vector to another method the variable value will be copied.
   - **PassByReference** --> Here memory address will be copy, both variable will be refering to same memory address.
 
### STL Array 
  - **STL(Standard Template Library) Array** acts Similar to vector while passing to function, also it knows its size.
  - Its size is fix, however Vector size is not.
  -  ```STLArrayEx1.cpp``` 
### Array vs STL Array vs Vector
- 
