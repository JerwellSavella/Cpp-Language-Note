#include <iostream>
using namespace std;

/*Create a program that will calculate the sum and difference of two numbers.*/

int main() {
//interact with the program by entering two values into the variable.
//will print out the sum and aswell the difference of those two values you entered.
  int num1;
  int num2;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a number: ";
    cin >> num2;
    int sum = num1 + num2;
    int difference = num1 - num2;
    cout << "The sum is: " << sum << " ";
    cout << "The difference is: " << difference << " ";
       
  return 0;
  
  }

  