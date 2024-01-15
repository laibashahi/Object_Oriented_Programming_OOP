#include <iostream>
using namespace std;

int main() {
    bool job; 
    char martialStatus; 
    int age;

    // Prompt user to enter martial status
    cout << "Enter Martial Status: ";
    cin >> martialStatus;

    // Prompt user to enter age
    cout << "Enter age: ";
    cin >> age;

    // Prompt user to enter job status
    cout << "Enter job Status (1 for true / 0 for false): ";
    cin >> job;

    if (martialStatus == 'u') {
        if (age <= 25) {
            if (job == false) {
                cout << "Eligible for Loan";
            } else {
                cout << "Not eligible for Loan";
            }
        } else {
            cout << "Not eligible for Loan";
        }
    } else {
        cout << "Not eligible for Loan";
    }

    return 0;
}

