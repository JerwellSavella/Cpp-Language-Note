// Create a program that will identify if the temperature input in Fahrenheit is below or above freezing point. 
// (Zero Degree Celsius is the freezing point)
#include<iostream>
using namespace std;

    int main () {
    
        double Temperature;

        //User Input:
        cout << "Enter the Temperature in Fahrenheit: ";
        cin >> Temperature;    
        cout << "\n";

        //Will identify if the inputted temperature in Fahrenheit is below or above freezing point.
        if (Temperature < 32) { 
            cout << Temperature << " Fahrenheit is Below Freezing Point" << endl;
        }
        else if (Temperature == 32) { 
            cout << Temperature << " Fahrenheit is the Freezing Point" << endl;  
        }
        else {
            cout << Temperature << " Fahrenheit is Above Freezing point" << endl;
        }
    return 0;

}