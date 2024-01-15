#include <iostream>
#include <string>
using namespace std;

// Define a structure named MovieData
struct MovieData {
    string title;
    string director;
    int yearReleased;
};

// Function to create MovieData and return the structure
MovieData createMovieData() {
    MovieData movie; // Declare a variable of type MovieData

    // Prompt the user to enter movie information
    cout << "Enter movie title: ";
    getline(cin, movie.title);

    cout << "Enter director: ";
    getline(cin, movie.director);

    cout << "Enter year released: ";
    cin >> movie.yearReleased;

    // Clear the input buffer
    cin.ignore();

    return movie; // Return the created MovieData structure
}

// Function to display MovieData
void displayMovieData(const MovieData& movie) {
    // Display movie information in a formatted manner
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
}

int main() {
    // Create two variables of the MovieData structure
    MovieData movie1, movie2;

    // Call the createMovieData function for each movie
    movie1 = createMovieData();
    movie2 = createMovieData();

    // Display movie information using the displayMovieData function
    cout << "\nMovie 1 Information:" << endl;
    displayMovieData(movie1);

    cout << "\nMovie 2 Information:" << endl;
    displayMovieData(movie2);

    return 0;
}

