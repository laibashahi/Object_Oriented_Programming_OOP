#include <iostream>
#include <string>

using namespace std;

class Parent {
public:
    virtual ~Parent() {
        cout << "Parent destructor called" << endl;
    }
};

class Child : public Parent {
public:
    ~Child() override {
        cout << "Child destructor called" << endl;
    }
};

int main() {
    // Creating an object of the derived class using a pointer to the base class
    Parent* p = new Child();

    // Deleting the object through the base class pointer
    delete p;

    // Note: Although the base class destructor is not explicitly marked as virtual,
    // it is good practice to make it virtual when using polymorphism to ensure
    // proper destruction of derived class objects.

    return 0;
}

