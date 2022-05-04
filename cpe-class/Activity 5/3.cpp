// The user will input the grade (from 75 to 100) and will display the remarks.
// Develop a program that will display the remarks of the students given in the following informations.
#include<iostream>
using namespace std;

    int main () {
        double grade;

        //User Input:
        cout << "Enter your Grade: ";
        cin >> grade;

        //Condition:
        //Checking the Grade of the student and will display the remarks.
        if (grade == 100) {
            cout << "Excellent!";
        }
        else if (grade <= 99 & grade >= 90) {
            cout << "Very Good!";
        }
        else if (grade <= 89 & grade >= 80) {
            cout << "Good!";
        }
        else if (grade <= 79 & grade >= 75) {
            cout << "Fair";
        }
        else if (grade <= 74 & grade > 0) {
        cout << "Fail";
        }

    return 0;
 }
