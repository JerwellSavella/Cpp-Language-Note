

#include <iostream>
using namespace std;

//  1.  Using while loop, write a c++ program
//      That computes the sum of the inputted positive integer
void sumOfInteger() {
    int n=0, i=0, sum=0;                // Number, Index, and Sum variable
    cout << "Input a number: ";         // Get number from user
    cin >> n;                           // Store then number in n-var
    while (i != abs(n)) {               // While loop (while index is not equal to absolute value of n)
        i++; sum+=i;                    // Increment index by 1; Add up the current index to sum
    }
    cout << "Answer: " << sum;          // Display output
}


//  2.  Using do-while loop, write a pseudo code and draw its equivalent flowchart
//      that display all even numbers between 1 to 100.
//      Example: 2, 4, 6, 8... 
void evenNumbersIn(int m) {
    int n=1;                                        // Number variable
    do {                                            // Do-while loop
        n++;                                        // Increment number by 1
        cout << (n%2 == 0 ? to_string(n):", ");     // Display only even numbers
    } while (n != m);                               // Continue the loop until n var reaches 100
}


//  3.  Using for loop, draw a flowchart and write the corresponding
//      pseudo code of a program that will display the name of the 20 students
void nameOf20Students() {
    string students[20] = {"Verdadero", "Moreno", "Padilla",        // String array of names
            "Burgos", "Bermudez", "Rivera", "Rosales", "Martin",
            "Ochoa", "Hernandez", "Villacruz", "Zepeda", "Tamayo",
            "Javier", "Agustin", "Benitez", "San Jose", "Santiago",
            "Cornejo", "Chavez"};
    for (int i=0; i<20; i++) {                                      // For-loop
        cout << i+1 << ". " << students[i] << endl;                 // Display every name using the curr. index
    }
}


int main() {
    sumOfInteger(); cout << endl;
    evenNumbersIn(100); cout << endl;
    nameOf20Students(); cout << endl;
    return 0;
}
