/* 
C++ provides two powerful features for memory manipulation:

    References: aliases to existing variables
    Pointers: store memory address as its value

Reference variables are created using the & symbol. & is also used to access the memory address of a variable.

Pointer variables are created using the * symbol. * is also used to obtain the value pointed to by a pointer variable.
*/

int year = 2021; 
 
int &ref = year; 
 
int *ptr = &year;
 
std::cout << &year << "\n";
 
std::cout << *ptr << "\n";