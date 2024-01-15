#include <iostream>
using namespace std;

class xyz {
private:
    int a, b, c;

public:
    void getData(void) {
        cout << "Enter value of a, b, and c: ";
        cin >> a >> b >> c;
    }

    void printData(void) {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

int main() {
    xyz obj; // Creating an object of class xyz
    obj.getData(); // Calling the getData() function to input values
    obj.printData(); // Calling the printData() function to display values

    return 0;
}

