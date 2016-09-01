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
	const double PI = 3.14159265359;
	// Define variables for radius, height, volume
	double radius,
		height,
		volume;

	// Prompt user for radius and height
	cout << "Enter the radius of a cylinder: ";
	cin >> radius;
	cout << "Enter the height of a cylinder: ";
	cin >> height;

	// Calculate the volume
	volume = PI * radius * radius * height;

	// Display radius, height, volume to std::out
	// Use setprecision(2) and fixed to round to two decimals
	cout << setprecision(2) << fixed;
	cout << "The radius is " << radius << "\n";
	cout << "The height is " << height << "\n";
	cout << "The volume is " << volume << "\n";

	return 0;
}