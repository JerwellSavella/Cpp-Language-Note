#include <iostream>
#include <cmath>

using namespace std;

// 2. Convert from Celsius to Fahrenheit (C(9/5) + 32)

int main() {

	float fahrenheit, celsius;

	cout << "Enter the temperature in Celsius: ";
	cin >> celsius;

	fahrenheit = (celsius * 9.0) / 5.0 + 32;

	cout << "The temperature in Celsius: " << celsius << endl;
	cout << "The temperature in Fahrenheit: " << fahrenheit << endl;

	return 0;
}


