#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Define a structure for student data
struct Student {
    string name;
    int marks[3]; // Array to store marks of 3 courses
};

// Function to display data of all students
void Display_data(const Student students[], int numStudents) {
    cout << "Student Data:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student Name: " << students[i].name << endl;
        cout << "Marks: ";
        for (int j = 0; j < 3; ++j) {
            cout << students[i].marks[j] << " ";
        }
        cout << endl << endl;
    }
}

// Function to change marks for a specific course of a student
void Change_Marks(Student& student) {
    int courseNo;
    
    // Display current marks
    cout << "Current Marks: ";
    for (int i = 0; i < 3; ++i) {
        cout << student.marks[i] << " ";
    }
    cout << endl;

    // Ask user for course number and updated marks
    cout << "Enter course number (1-3): ";
    cin >> courseNo;
    if (courseNo >= 1 && courseNo <= 3) {
        cout << "Enter updated marks for course " << courseNo << ": ";
        cin >> student.marks[courseNo - 1];
        cout << "Marks updated successfully!" << endl;
    } else {
        cout << "Invalid course number. Marks not updated." << endl;
    }
}

// Function to calculate the average marks of a student
float Calc_Average_Marks(const Student& student) {
    int totalMarks = 0;
    for (int i = 0; i < 3; ++i) {
        totalMarks += student.marks[i];
    }
    return static_cast<float>(totalMarks) / 3.0;
}

int main() {
    const int numStudents = 2; // Number of students
    Student students[numStudents]; // Array of students

    // Input student data
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter student name: ";
        getline(cin, students[i].name);

        cout << "Enter marks for 3 courses (separated by space): ";
        for (int j = 0; j < 3; ++j) {
            cin >> students[i].marks[j];
        }

        // Clear the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << endl;
    }

    // Display initial student data
    Display_data(students, numStudents);

    // Change marks for the first student
    Change_Marks(students[0]);

    // Display updated student data
    Display_data(students, numStudents);

    // Calculate and display average marks for the second student
    float averageMarks = Calc_Average_Marks(students[1]);
    cout << "Average Marks for " << students[1].name << ": " << fixed << setprecision(2) << averageMarks << endl;

    return 0;
}

