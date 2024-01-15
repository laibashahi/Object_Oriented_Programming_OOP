#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
public:
    // Public data members
    string name;
    int age;

    // Constructor
    Animal(const string& n, int a) : name(n), age(a) {}

    // Virtual speak method (to be overridden by derived classes)
    virtual void speak() const = 0;
};

// Derived class Bird
class Bird : private Animal {
private:
    double wingLength;

public:
    // Constructor using the constructor of the base class
    Bird(const string& n, int a, double w) : Animal(n, a), wingLength(w) {}

    // Override the speak method
    void speak() const override {
        cout << "I am a bird named " << name << ". I am " << age << " years old." << endl;
        cout << "I can sing!" << endl;
    }
};

// Derived class Reptile
class Reptile : private Animal {
private:
    string habitat;

public:
    // Constructor using the constructor of the base class
    Reptile(const string& n, int a, const string& h) : Animal(n, a), habitat(h) {}

    // Override the speak method
    void speak() const override {
        cout << "I am a reptile named " << name << ". I am " << age << " years old." << endl;
        cout << "I can creep in my habitat: " << habitat << endl;
    }
};

int main() {
    // Create objects of the derived classes
    Bird myBird("Robin", 3, 10.5);
    Reptile myReptile("Snake", 5, "Jungle");

    // Call speak method to display information
    myBird.speak();
    cout << endl; // Separate the output
    myReptile.speak();

    return 0;
}

