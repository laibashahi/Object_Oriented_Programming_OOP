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

// Function to draw all shapes in the array
void drawAll(Shape* s[]) {
    cout << "\nDrawing shapes in drawAll() method" << endl;
    for (int i = 0; i < 2; i++) {
        s[i]->draw();
    }
}

int main() {
    Shape* s[2];

    // Creating objects of Circle and Rectangle
    s[0] = new Circle();
    s[1] = new Rectangle();

    cout << "Drawing shapes in main" << endl;
    for (int i = 0; i < 2; i++) {
        s[i]->draw();
    }

    // Call function to draw all shapes
    drawAll(s);

    // Freeing the allocated memory
    for (int i = 0; i < 2; i++) {
        delete s[i];
    }

    return 0;
}

