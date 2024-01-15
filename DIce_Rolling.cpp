#include <iostream>
#include <cstdlib> // Include the cstdlib library for rand() and srand()
#include <ctime>   // Include the ctime library for time()

using namespace std;

class Dice {
    int value = 0;

public:
    int getValue() {
        return value;
    }

    void setValue(int v) {
        value = v;
    }

    void roll() {
        srand(time(0)); // Seed the random number generator with the current time
        int random_number = rand() % 6 + 1; // Generate a random number between 1 and 6
        cout << "Side: " << random_number << " ";
        value = random_number;

        // Display a message based on the rolled number
        if (random_number == 6) {
            cout << "(Chakkaaaaa)";
        } else {
            cout << "(better luck next time)";
        }
        cout << endl;
    }
};

int main() {
    char choice;
    Dice d;

    do {
        cout << "Do you want to roll the dice? Y/N" << endl;
        cin >> choice;
        if (choice == 'Y' || choice == 'y') {
            d.roll();
        }
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

