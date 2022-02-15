// VARIABLES 
// - Variables are used to store and retrieve data. When declaring a variable, it must be given a data type and a name.
// - Multiple variables of the same type can be declared in a single statement using a comma-separated list.
// - Variables can be declared with the const keyword, which prevents their value from being changed later.
// - Variables are used to store and retrieve data 

 
// int      - stores integers (whole numbers), without decimals. 
// double   - stores floating point numbers, with decimals.
// string   - stores text, such as "Hello World". String values are surrounded by double quotes 
// char     - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
// bool     - stores values with two states: true or false



// Example of a variable named Age with a value of 20 

#include <iostream>
using namespace std;

int main() {
  int Age = 20;
  cout << Age;      
  return 0;
}


// Identifiers
// - All C++ variables must be identified with unique names. Those names are called *Identifiers*
// - Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume). It is recommended to use descriptive names to create maintainable code.



// Descriptive name or identifiers, considered as good
int secondsemGrade = 4;

// valid identifiers, but not so easy to understand and identify what s actually means.
int s = 4;  



// Constants
// - When you do not want others (or yourself) to override existing variable values, use the const keyword 
// - (this will declare the variable as "constant", which means unchangeable and read-only)
// - remember that you should always declare the variable as constant when you have values that you don't or others to change or override.

// int and float variable that you don't want to override or change, use const to them
const int dayPerYear = 365;
const float myCaretoYourMom = 99.9;


