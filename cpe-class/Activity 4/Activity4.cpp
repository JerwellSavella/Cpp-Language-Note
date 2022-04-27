#include <iostream>
#include <cmath>
using namespace std;

/* Activity 4 
Instruction: Create a C++ program for each given problem below.*/


// 1. Answer=(A+B+C)/Y
int main() {
   cout << "Problem # 1: Answer=(A+B+C)/Y \n"; 
   double total, a, b, c, y;

        cout << "\nInput the value of A: ";
        cin >> a;
        cout << "Input the value of B: ";
        cin >> b;
        cout << "Input the value of C: ";
        cin >> c;
        cout << "Input the value of Y: ";
        cin >> y;

    total = (a+b+c)/y;
        cout << "\nThe Answer is: " << total << "\n";
   

// 2. Convert from Celsius to Fahrenheit (C(9/5) + 32)
    cout << "\nProblem # 2: Convert from Celsius to Fahrenheit (C(9/5) + 32) \n";
	float fahrenheit, celsius;

	cout << "\nEnter the temperature in Celsius: ";
	cin >> celsius;

	fahrenheit = (celsius * 9.0) / 5.0 + 32;

	cout << "\nThe temperature in Celsius: " << celsius << endl;
	cout << "The temperature in Fahrenheit: " << fahrenheit << endl;


// 3. Area of a Circle (πr²)
    cout << "\nProblem # 3: Area of a Circle (πr²) \n";
    double radius, area;

	std::cout << "\nEnter the radius of Circle: ";
	std::cin >> radius;
	area = 3.14 * radius * radius;
	std::cout << "\nArea of circle with radius" 
		  << radius << "is " << area << "\n";


// 4. Volume of a Sphere ((4/3) πr³)
    cout << "\nProblem # 4: Volume of a Sphere ((4/3) πr³) \n";
    int rad,vol;
        cout<<"\nEnter Radius of Sphere : ";
        cin>>rad;
        vol=(4*3.14*rad*rad*rad)/3;
        cout<<"Volume of Sphere = "<< vol << "\n";



// 5. Average speed = Distance traveled / Time taken (S=D/T)
    double dist_trav, time_tkn;
    double Avrg_spd; 

        cout << "\nProblem # 5: Distance traveled / Time taken (S=D/T) \n";

        cout << "\nEnter Distanced traveled: ";
        cin >> dist_trav;

        cout << "\nEnter Time taken: ";
        cin >> time_tkn;


        Avrg_spd = (dist_trav / time_tkn); 
        cout << "\nThe Average Speed is: " << Avrg_spd << endl; 



	return 0;

}