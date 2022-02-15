// DATA TYPES
// A variable in c++ must be specified data type.


#include <iostream>
#include <string>
using namespace std;
 
int main () {
  // Creating variables
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    string myString = "Hello";   // String
    
  // Print variable values
        cout << "int: " << myNum << "\n";
        cout << "float: " << myFloatNum << "\n";
        cout << "double: " << myDoubleNum << "\n";
        cout << "char: " << myLetter << "\n";
        cout << "bool: " << myBoolean << "\n";
        cout << "string: " << myString << "\n";
        
  return 0;
  } 
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    string myText = "Hello";     // String 



// NUMBERS
// Use 'int' when you need to store a whole number without decimals, like 35 or 1000, and float or double when you need a floating point number (with decimals), like 9.99 or 3.14515.


// FLOAT VS DOUBLE

// The precision of a floating point value indicates how many digits the value can have after the decimal point. 
// The precision of 'float' is only "six or seven decimal digits".
// While 'double' variables have a precision of about "15 digits". Therefore it is safer to use 'double' for most calculations.
// A floating point number can also store or be a scientific number with an "e" to indicate the power of 10:

int main () {

        int myNum = 1000;       // int: stores integers or whole number
            cout << myNum;          

        float myNum = 5.75;     // float: stores float numbers with decimals
            cout << myNum; 

        double myNum = 19.99;   // double: stores numbers with decimals
            cout << myNum; 

    return 0; 
} 


// BOOLEAN DATA TYPES
// A boolean data type is declared with the bool keyword and can only take the values true or false. When the value is returned, true = 1 and false = 0.

int main () {

        bool isCodingFun = true;
        bool isFishTasty = false;
        cout << isCodingFun;  // Outputs 1 (true)
        cout << isFishTasty;  // Outputs 0 (false)

    return 0;
}


// CHARACTER TYPES
// The char data type is used to store a single character. The character must be surrounded by single quotes, like 'A' or 'c':

int main () {
        char myGrade = 'B';
        cout << myGrade; 

    return 0;
}


// STRING TYPES
// The string type is used to store a sequence of characters (text). 
// This is not a built-in type, but it behaves like one in its most basic usage. 
// String values must be surrounded by double quotes (" *insert string here* ") :
// To use strings, you must include an additional header file in the source code, the <string> library:


int main () {
        string yourMom = "is great";
        cout << yourMom;

    return 0;
}

