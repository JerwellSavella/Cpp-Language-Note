
#include <iostream>
using namespace std;
 
/* If the grade of A college student is above 4, the program will printout "I'm sorry, Better luch next sem :("
If the grade of A college student is 3 and below, the program will printout "Congrats! You passed the semester!"*/


int main () {
   // local variable declaration
    
    float grade; 

    cout << "Enter your grade here: ";
    cin >> grade;

   // check the boolean condition
   if(grade <= 3)
    cout <<"congratulations!, you passed the semester!" << endl;
   else if(grade <= 4)
    cout <<"Better luck next time buddy." << endl;
   else
    cout <<"I don't know, you might wanna consider shifting course, changing career path or something..." << endl;

   return 0;

} 
