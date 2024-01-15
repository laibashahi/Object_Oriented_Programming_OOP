#include <iostream>
using namespace std;

class NumberArray {
private:
    float* numbers; // Array to hold floating-point numbers
    int size;       // Size of the array

public:
    // Constructor to dynamically allocate the array
    NumberArray(int arraySize) {
        if (arraySize <= 0) {
            cout << "Invalid array size. It should be greater than 0." << endl;
            exit(1);
        }

        size = arraySize;
        numbers = new float[size];
    }

    // Destructor to free the dynamically allocated memory
    ~NumberArray() {
        delete[] numbers;
    }

    // Store a number in any element of the array
    void storeNumber(int index, float value) {
        if (index < 0 || index >= size) {
            cout << "Invalid index. Index should be between 0 and " << size - 1 << "." << endl;
            exit(1);
        }

        numbers[index] = value;
    }

    // Retrieve a number from any element of the array
    float retrieveNumber(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index. Index should be between 0 and " << size - 1 << "." << endl;
            exit(1);
        }

        return numbers[index];
    }

    // Return the highest value stored in the array
    float getHighestValue() {
        float highest = numbers[0];
        for (int i = 1; i < size; ++i) {
            if (numbers[i] > highest) {
                highest = numbers[i];
            }
        }
        return highest;
    }

    // Return the lowest value stored in the array
    float getLowestValue() {
        float lowest = numbers[0];
        for (int i = 1; i < size; ++i) {
            if (numbers[i] < lowest) {
                lowest = numbers[i];
            }
        }
        return lowest;
    }

    // Return the average of all the numbers stored in the array
    float getAverage() {
        float sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += numbers[i];
        }
        return sum / size;
    }
};

int main() {
    // Example usage
    NumberArray arr(5);

    // Store numbers in the array
    arr.storeNumber(0, 10.5);
    arr.storeNumber(1, 20.3);
    arr.storeNumber(2, 15.7);
    arr.storeNumber(3, 8.2);
    arr.storeNumber(4, 12.9);

    // Retrieve and display a number
    cout << "Number at index 2: " << arr.retrieveNumber(2) << endl;

    // Display highest, lowest, and average values
    cout << "Highest value: " << arr.getHighestValue() << endl;
    cout << "Lowest value: " << arr.getLowestValue() << endl;
    cout << "Average value: " << arr.getAverage() << endl;

    return 0;
}

