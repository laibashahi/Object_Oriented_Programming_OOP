#include <iostream>
using namespace std;

class Box {
public:
    static int objectCount; // Static member variable to count objects

    // Constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0) {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        // Increase count every time an object is created
        objectCount++;
    }

    // Method to calculate the volume of the box
    double Volume() {
        return length * breadth * height;
    }

    // Static method to get the count of objects
    static int getCount() {
        return objectCount;
    }

private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};

// Initialize static member of class Box
int Box::objectCount = 0;

int main(void) {
    // Print total number of objects before creating objects
    cout << "Initial Stage Count: " << Box::getCount() << endl;

    // Declare and create objects of class Box
    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);

    // Print total number of objects after creating objects
    cout << "Final Stage Count: " << Box::getCount() << endl;

    return 0;
}

