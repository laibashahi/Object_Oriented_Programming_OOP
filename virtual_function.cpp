#include <iostream>
#include <string>

using namespace std;

class Shape {
public:
    virtual void draw() = 0; // pure virtual function
};

class Rectangle : public Shape {
    int length, width;

public:
    void draw() override {
        cout << "Drawing rectangle" << endl;
    }
};

class Circle : public Shape {
    int radius;

public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->draw();

    s = new Rectangle();
    s->draw();

    delete s; // Don't forget to free the allocated memory

    return 0;
}

