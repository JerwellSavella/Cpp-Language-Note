
#include <iostream>
using namespace std;
 
int main () {
   // local variable declaration:
   char grade;
    
    cout << "Enter your grade here: ";
    cin >> grade;
 
   // check the boolean condition
   if( grade <= 3 ) {
      // if condition is true then print the following
      cout << "Congrats! Your Passed the semester!" << endl;
   } else {
      // if condition is false then print the following
      cout << "I'm sorry, Better luck next sem :(" << endl;
   }

 
   return 0;
} 