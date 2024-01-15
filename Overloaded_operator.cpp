#include <iostream>

using namespace std;

template <typename T>
bool isEqualTo(const T& a, const T& b) {
    return a == b;
}

class MyClass {
public:
    int value;
    MyClass(int v) : value(v) {}

    // Overloading the equality operator
    bool operator==(const MyClass& other) const {
        return value == other.value;
    }
};

int main() {
    cout << boolalpha; // Print bool values as true/false

    // Using isEqualTo with fundamental types
    cout << "Is 5 equal to 5? " << isEqualTo(5, 5) << endl;
    cout << "Is 3.14 equal to 3.14? " << isEqualTo(3.14, 3.14) << endl;
    cout << "Is 'A' equal to 'A'? " << isEqualTo('A', 'A') << endl;

    

    MyClass obj1(10);
    MyClass obj2(10);

    cout << "Is obj1 equal to obj2? " << isEqualTo(obj1, obj2) << endl;

    return 0;
}

