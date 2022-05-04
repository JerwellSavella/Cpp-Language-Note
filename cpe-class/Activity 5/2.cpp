// Develop a program to find largest from three numbers given by the user.
#include<iostream>
using namespace std;

    int main () {
        
        int a, b, c;

        // User Input:
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the Second number: ";
        cin >> b;
        cout << "Enter the Third number: ";
        cin >> c;

        //Condition:
        //Checking the largest Number given by the user.
        if (a > b && a > c) {
            cout << a << " is the largest number.";
        }
        if (b > a && b > c) {
            cout << b << " is the largest number.";
        }
        if (c > a && c > b) {
            cout << c << " is the largest number.";
        }

    return 0;
    }