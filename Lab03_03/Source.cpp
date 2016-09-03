/*
Philip Fernandez
Lab03 Question 03
9/1/16
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Define and initialize constant PI
	const double PI = 3.14;
	// Define variables for radius, height, volume
	double radius,
		height,
		volume;

	// Prompt user for radius and height
	cout << "Enter the radius of a cylinder: ";
	cin >> radius;
	cout << "Enter the height of a cylinder: ";
	cin >> height;
	cout << "-----------------------------" << "\n";

	// Calculate the volume
	volume = PI * pow(radius, 2) * height;

	// Display radius, height, volume to std::out
	// Use setprecision(2) and fixed to round to two decimals
	cout << setprecision(2) << fixed;
	// Use setw(12) to keep results lined up
	cout << "The radius is " << setw(12) << radius << "   |" << "\n";
	cout << "The height is " << setw(12) << height << "   |" << "\n";
	cout << "The volume is " << setw(12) << volume << "   |" << "\n";
	cout << "-----------------------------" << "\n";

	return 0;
}









