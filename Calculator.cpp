#include <iostream>
using namespace std;

int main() {
    // Declare variables for user input and the sum
    int x, y, sum;

    // Prompt the user to enter a number and store it in variable 'x'
    cout << "Type a number: ";
    cin >> x;

    // Prompt the user to enter another number and store it in variable 'y'
    cout << "Type another number: ";
    cin >> y;

    // Calculate the sum of the entered numbers
    sum = x + y;

    // Display the sum to the user
    cout << "Sum is: " << sum;

    return 0; // Return 0 to indicate successful program execution
}

