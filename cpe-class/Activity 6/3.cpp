#include <iostream>
using namespace std;

//  3.  Using for loop, Develop a program that will display the name 
//      of the 20 students.
void studentsNames() {
    string students[20] = {"Savella", "Belleza", "Caburong",        
            "Deguit", "Nama", "Daso", "Luther", "Damian",
            "Loid", "Marian", "Billy", "Yuki", "Toothless",
            "Javier", "Charles", "Benitez", "Jerry", "Jessie",
            "Linda", "Abigail"};
    for (int i=0; i<20; i++) {                                      
        cout << i+1 << ". " << students[i] << endl;                 
    }
}

int main() {
    studentsNames(); cout << endl;
    return 0;
}
