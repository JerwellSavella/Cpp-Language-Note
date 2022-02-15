// Input and Output will make a C++ programs more interactive.


/* 
"#include <iostream>"" must be placed at the beginning of the program to access input and output.
"std::cout" is the “character output” and it is used together with << to print to the terminal.
"std::cin" is the “character input” and it is used together with >> to read user input.
"std::endl" or \n can be used to insert a new line. 
*/




#include <iostream>
 
int main() {
  int age;
  std::cout << "How old are you? ";
  std::cin >> age;
  std::cout << "You are " << age << " years old.";
  
  return 0;
}