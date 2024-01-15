#include <iostream>
using namespace std;

// Base class Boat
class Boat {
protected:
    int boatLength;

public:
    // Constructor for Boat
    Boat(int length) : boatLength(length) {}

    // Swim method
    void swim() const {
        cout << "I am swimming." << endl;
    }
};

// Base class Plane
class Plane {
protected:
    int maxAltitude;

public:
    // Constructor for Plane
    Plane(int altitude) : maxAltitude(altitude) {}

    // Fly method
    void fly() const {
        cout << "I am flying." << endl;
    }
};

// Derived class Skimmer
class Skimmer : protected Boat, protected Plane {
private:
    int numPassengers;

public:
    // Constructor for Skimmer
    Skimmer(int length, int altitude, int passengers) : Boat(length), Plane(altitude), numPassengers(passengers) {}

    // Display method
    void display() const {
        cout << "Skimmer Properties:" << endl;
        cout << "Boat Length: " << boatLength << " meters" << endl;
        cout << "Max Altitude: " << maxAltitude << " meters" << endl;
        cout << "Number of Passengers: " << numPassengers << endl;
    }

    // Swim and fly method
    void swimAndFly() const {
        swim();
        fly();
    }
};

int main() {
    // Create an object of Skimmer and initialize through constructor
    Skimmer mySkimmer(10, 500, 4);

    // Display the properties of the Skimmer
    mySkimmer.display();

    // Simulate the behavior of the Skimmer
    mySkimmer.swimAndFly();

    return 0;
}

