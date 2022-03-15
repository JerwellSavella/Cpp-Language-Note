
#include <iostream>
using namespace std;

int main() {
//will interact with the program by entering the value of variables needed 
//will print-out your name, year level, schedule, and section/block
  string name;
  string year;
  string sched;
  string section;   
    cout << "Enter your name: "; 
    cin >> name;

    cout << "Type your year-level: ";
    cin >> year;

    cout << "Enter your Schedule: ";
    cin >> sched;

    cout << "Enter your Section: ";
    cin >> section;
    
    cout << "Your Name is: " << name << "\n"; 
    cout << "Your Year level is: " << year << "\n";
    cout << "Your Schedule is: " << sched << "\n";
    cout << "Your Section is: " << section << "\n";
       
  return 0;
  
  }