#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the user-inputted alphabet
    char alphabet;

    // Prompt the user to enter an alphabet
    cout << "Enter alphabet: ";
    cin >> alphabet;

    // Switch statement to check if the entered alphabet is a vowel
    switch (alphabet) {
        // Cases for lowercase vowels
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        // Cases for uppercase vowels
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "You entered a vowel"; // Display if the entered alphabet is a vowel
            break;
        default:
            cout << "You entered a consonant"; // Display if the entered alphabet is a consonant
    } // switch body closed

    return 0; // Return 0 to indicate successful program execution
}

