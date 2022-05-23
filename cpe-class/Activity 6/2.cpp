#include <iostream>
using namespace std;


//  2.  Using do-while loop, write a pseudo code and draw its equivalent flowchart
//      that display all even numbers between 1 to 100.
//      Example: 2, 4, 6, 8... 
void evenNumbers(int m) {
    int n=1;                                        
    do {                                            
        n++;                                        
        cout << (n%2 == 0 ? to_string(n):", ");     
    } while (n != m);                               
}

int main() {
    evenNumbers(100); cout << endl;
    return 0;
}