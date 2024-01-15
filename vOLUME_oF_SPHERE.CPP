#include <iostream>
#include <cmath> // Include the cmath library for mathematical operations
using namespace std;

int main() {
    // Declare variables
    double radius, volume;

    // Prompt user to enter the radius
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Check if the entered radius is non-negative
    if (radius < 0) {
        cout << "Invalid input. Radius cannot be negative." << endl;
        return 1; // Exit the program with an error code
    }

    // Calculate the volume of the sphere
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    // Display the calculated volume
    cout << "The volume of the sphere with radius " << radius << " is: " << volume << endl;

    return 0; // Return 0 to indicate successful program execution
}

