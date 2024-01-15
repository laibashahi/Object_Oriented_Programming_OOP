#include <iostream>
using namespace std;

int main() {
    // Declare and initialize the variable 'x'
    int x = 20;

    // Check if 'x' is equal to 10
    if (x == 10) {
        cout << "x is 10";
    }
    // Check if 'x' is equal to 15
    else if (x == 15) {
        cout << "x is 15";
    }
    // Check if 'x' is equal to 20
    else if (x == 20) {
        cout << "x is 20";
    }
    // If none of the above conditions are true
    else {
        cout << "Sorry! x is not present";
    }

    return 0; // Return 0 to indicate successful program execution
}

