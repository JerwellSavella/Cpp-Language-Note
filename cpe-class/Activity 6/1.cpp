#include <iostream>
#include <cmath>
using namespace std;



// 1. Using while loop, write a c++ program 
//    that computes the sum of the inputted positive integer.

void sumOfPosInteger() {
    int n=0, i=0, sum=0;                
    cout << "Enter a number: ";         
    cin >> n;                           
    while (i != abs(n)) {               
        i++; sum+=i;                    
    }
    cout << "The sum is: " << sum;          
}


int main() {
    sumOfPosInteger(); cout << endl;
    return 0;
}




