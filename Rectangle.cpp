#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Member functions
    void setLength(float len) {
        length = len;
    }

    void setWidth(float wid) {
        width = wid;
    }

    float perimeter() {
        return 2 * (length + width);
    }

    float area() {
        return length * width;
    }

    void show() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    int sameArea(Rectangle rect) {
        return (area() == rect.area()) ? 1 : 0;
    }
};

int main() {
    // Create two rectangle objects
    Rectangle rect1, rect2;

    // Set length and width for the first rectangle
    rect1.setLength(5);
    rect1.setWidth(2.5);

    // Set length and width for the second rectangle
    rect2.setLength(5);
    rect2.setWidth(18.9);

    // Display details and calculations for the first rectangle
    cout << "Rectangle 1:" << endl;
    rect1.show();
    cout << "Perimeter: " << rect1.perimeter() << endl;
    cout << "Area: " << rect1.area() << endl;

    // Display details and calculations for the second rectangle
    cout << "\nRectangle 2:" << endl;
    rect2.show();
    cout << "Perimeter: " << rect2.perimeter() << endl;
    cout << "Area: " << rect2.area() << endl;

    // Check whether the two rectangles have the same area
    if (rect1.sameArea(rect2)) {
        cout << "\nRectangles have the same area." << endl;
    } else {
        cout << "\nRectangles do not have the same area." << endl;
    }

    // Update length and width for the first rectangle
    rect1.setLength(15);
    rect1.setWidth(6.3);

    // Display updated details and calculations for the first rectangle
    cout << "\nUpdated Rectangle 1:" << endl;
    rect1.show();
    cout << "Perimeter: " << rect1.perimeter() << endl;
    cout << "Area: " << rect1.area() << endl;

    // Check whether the two rectangles have the same area after update
    if (rect1.sameArea(rect2)) {
        cout << "\nRectangles have the same area." << endl;
    } else {
        cout << "\nRectangles do not have the same area." << endl;
    }

    return 0;
}

