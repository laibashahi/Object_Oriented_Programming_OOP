#include <iostream>
using namespace std;

int main() {
    // Declare and initialize the variable 'time'
    int time = 20;

    // Use the ternary operator to assign a message based on the value of 'time'
    string result = (time < 18) ? "Good day." : "Good evening.";

    // Display the result to the user
    cout << result;

    return 0; // Return 0 to indicate successful program execution
}

