#include <iostream>
using namespace std;

class Population {
private:
    int population;
    int numBirths;
    int numDeaths;

public:
    // Constructor with input validation
    Population(int pop, int births, int deaths) {
        if (pop < 1 || births < 0 || deaths < 0) {
            cout << "Invalid input. Population should be greater than 0, and birth/death numbers should not be negative." << endl;
            exit(1);
        }

        population = pop;
        numBirths = births;
        numDeaths = deaths;
    }

    // Calculate and return the birth rate
    double calculateBirthRate() {
        return static_cast<double>(numBirths) / population;
    }

    // Calculate and return the death rate
    double calculateDeathRate() {
        return static_cast<double>(numDeaths) / population;
    }
};

int main() {
    // Example usage
    int population = 100000;
    int births = 8000;
    int deaths = 6000;

    // Create a Population object
    Population city(population, births, deaths);

    // Display the birth rate and death rate
    cout << "Birth Rate: " << city.calculateBirthRate() << endl;
    cout << "Death Rate: " << city.calculateDeathRate() << endl;

    return 0;
}

