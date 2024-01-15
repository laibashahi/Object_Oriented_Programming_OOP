#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Friend function to calculate area
    friend double calculateArea(const Rectangle& rect);

    // Member function to display length, width, and area
    void display() const {
        std::cout << "Length: " << length << " units\n";
        std::cout << "Width: " << width << " units\n";
        std::cout << "Area: " << calculateArea(*this) << " square units\n";
    }
};

// Friend function definition to calculate area
double calculateArea(const Rectangle& rect) {
    return rect.length * rect.width;
}

int main() {
    // Create a Rectangle object
    Rectangle myRectangle(5.0, 3.0);

    // Display information about the rectangle
    myRectangle.display();

    return 0;
}

