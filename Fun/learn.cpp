#include <iostream>
#include <cmath>
using namespace std;

/*Random Coding Practice from 2018 Programming Bootcamp I attended*/


int main() {
    int x = 45;                              //integers
    double y = 50.5;                         //double digits numbers
    char lets = 'B';                         //Character
    string main = "sentences that I";        //Text, Sentences
    bool myBoolean = true;                   //Boolean (true or false)
    cout << "main " << lets << " y ";

    if (true)
    {
        cout << "Jerwell";
    }
    



    double x, y;
    int sum;
    cout << "Enter your numbers: ";
    cin >> x;
    cout << "Enter another numbers: ";
    cin >> y;
    sum = x + y;
    cout << "The total is: " << sum;


    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;  // Outputs 1 (true)
    cout << isFishTasty;  // Outputs 0 (false)*/


    string firstName = "Jerwell ";
    string lastName = "Savella";
    string fullName = firstName.append(lastName);
    cout << fullName;



    string myString = "Hello";
    cout << myString[0];



    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;




    cout << sqrt(64);
    cout << round(2.6);
    cout << log(2);




    //if
    int x = 20;
    int y = 18;
    if (x > y) {
     cout << "I love cats";
    }





    //else
    int time = 20;
    if (time < 18) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }
    // Outputs "Good evening."




    //else if
    int x = 50;
    int y = 50;
    if(x == y) {
    cout << "1";
    } else if (x>y) {
    cout << "2";
    } else {
        cout << "3";        
    }

    


    //Short Hand if...Else (Ternary Operator)
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;




    //Simple loop samples c++

    int x = 40;
    if (x == 50){
        cout << "Good morning manila";
    } else if (x > 39){
        cout << "45.68";
    } else {
        cout << "I love Hotdogs";
    }
    
    
    
    //simple if, else if, and else statement
    double y = 45;
    int x = 60;
    if (x > 40){  //This is true on boolean
        cout << "95.4";
    } else if (x < 60){  //This is false on boolean
        cout << "The number was invalid";
    } else {
        cout << "Constant";
    }
    
    

    //simple else statements
    int gule = 80;
    int mate = 95;
    if (gule < mate) {
        cout << "Type your number here: ";
        cin >> gule;
    } else {
        cout << "Don't type any number here";
        cin >> mate;
    }




    //The switch expression is evaluated once
    //The value of the expression is compared with the values of each case
    //If there is a match, the associated block of code is executed
    //The break and default keywords are optional.
            int day = 5;
        switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;  
        }




    //While Loops  //There are bugs on this line of codessss
    //The while loop loops through a block of code as long as a specified condition is true:
            int i = 0;
        while (i < 200) {
        cout << i << "\n";
        i++;
        }

    //Example 2
        int i = 200;
        while (i < 200)
        {
            cout << i << "\n";
            i++;
        }


    //Do/while loop
        int i = 0;
    do {
    cout << i << "\n";
    i++;
    }
    while (i < 5);

    //Example 2
        int e = 0;
    do {
        cout << e << "\n";
    e++;
    } 
    while (e < 11);   
    if (e == 3)
    { cout << e << "\n";
    e++;
    }



    //For Loop
    for (int i = 0; i < 5; i++) {
  cout << i << "\n";
    }

    //Example 2 it will print the loop of 1 to 50
    for (double i = 1; i < 51; i++)  
    {
        cout << i << "\n";
    }

    //Example 3 It will print the loop from 3 to 100
    for (int i = 3; i < 101; i++)
    {
        cout << i << "\n";
    }
    
    //Example 4 it will print the loop from 4 to 59
    for (int i = 4; i < 60; i++)
    {
        cout << i << "\n";
    }

    //If statement sample practice
    int x = 60;
    if (x == 60)
    {
        cout << "I'm a good boy";
    }
    else if (x > 61)
    {
        cout << "I'm not a good boy";
    }


    //cin 'see in' statement practice line (Simple calculator)
    double x, y;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a number: ";
    cin >> y;
    double Minus = x * y;
    cout << "The total number is: " << Minus << " ";    


    int fizzbuzz = (3,5);
    if (fizzbuzz / 3){
        cout << "fizz"; 
    } else if (fizzbuzz / 5){
        cout << "buzz";
    } else {
        cout << "Number" "\n";
    }
    

    /*The break statement can also be used to jump out of a loop.
    This example jumps out of the loop when i is equal to 4:*/
    for (int i = 1; i < 10; i++) {
        if (i == 4)
        {
            break;      
        }
        cout << i << "\n";
    }

    
    /*The continue statement breaks one iteration (in the loop), 
    if a specified condition occurs, and continues with the next iteration in the loop.*/
    for (int i = 1; i < 10; i++) {
        if (i == 4)
        {
            continue;
        }
        cout << i << "\n";
    }
}

