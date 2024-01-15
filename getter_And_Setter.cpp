#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle() // default constructor
    {
        length = 0;
        width = 0;
    }

    Rectangle(int l, int w) // parameterized constructor
    {
        length = l;
        width = w;
    }

    int getLength() {
        return length;
    }

    int getWidth() {
        return width;
    }

    void setLength(int l) {
        length = l;
    }

    void setWidth(int w) {
        width = w;
    }

    int calc_Area() {
        int area = length * width;
        return area;
    }
};

int main() {
    int length, width;

    cout << "Enter length: " << endl;
    cin >> length;

    cout << "Enter width: " << endl;
    cin >> width;

    Rectangle r1(length, width); // calling the parameterized constructor

    cout << "\nLength of R1: " << r1.getLength();
    cout << "\nWidth of R1: " << r1.getWidth();
    cout << "\nArea of R1: " << r1.calc_Area();

    Rectangle r2; // default constructor calls automatically

    cout << "\n\nLength of R2: " << r2.getLength();
    cout << "\nWidth of R2: " << r2.getWidth();

    return 0;
}

