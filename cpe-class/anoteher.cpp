
#include <iostream>
using namespace std;

/* Create a program that will display the name, year, schedule and section 
of an engineering Student*/


int main() {
//will interact with the program by entering the value of variables needed 

//will print-out your name, year level, schedule, and section/block
  string name;
  string year;
  string sched;
  string section;   
  
    cout << "\nEnter your name: "; 
    cin >> name;

    cout << "\nType your year-level: ";
    cin >> year;

    cout << "\nEnter your Schedule: ";
    cin >> sched;

    cout << "\nEnter your Section: ";
    cin >> section;
    
    cout << "Your Name is: " << name << "\n"; 
    cout << "Your Year level is: " << year << "\n";
    cout << "Your Schedule is: " << sched << "\n";
    cout << "Your Section is: " << section << "\n";
       
  return 0; 
  
  }