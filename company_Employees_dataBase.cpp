#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string ID;
    string name;
    string jobTitle;
    int hoursWorked;

public:
    Employee() : ID(""), name(""), jobTitle(""), hoursWorked(0) {}

    Employee(const string& empID, const string& empName, const string& empJobTitle, int empHours)
        : ID(empID), name(empName), jobTitle(empJobTitle), hoursWorked(empHours) {}

    ~Employee() {
        cout << "Employee " << name << "'s data destroyed." << endl;
    }

    // Getter and setter methods
    string getID() const {
        return ID;
    }

    void setID(const string& empID) {
        ID = empID;
    }

    string getName() const {
        return name;
    }

    void setName(const string& empName) {
        name = empName;
    }

    string getJobTitle() const {
        return jobTitle;
    }

    void setJobTitle(const string& empJobTitle) {
        jobTitle = empJobTitle;
    }

    int getHoursWorked() const {
        return hoursWorked;
    }

    void setHoursWorked(int empHours) {
        hoursWorked = (empHours < 0) ? 0 : empHours;
    }

    // Method to calculate salary
    double calcSalary() const {
        const double hourlyRate = 10.0; // Adjust the hourly rate as needed
        const int baseHours = 40;

        if (hoursWorked <= baseHours) {
            return hoursWorked * hourlyRate;
        } else {
            int overtimeHours = hoursWorked - baseHours;
            return (baseHours * hourlyRate) + (overtimeHours * 2 * hourlyRate);
        }
    }
};

int main() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    Employee* employees = new Employee[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        string empID, empName, empJobTitle;
        int empHours;

        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        cout << "Employee ID: ";
        cin >> empID;
        cout << "Employee Name: ";
        cin.ignore(); // Clear the buffer
        getline(cin, empName);
        cout << "Job Title: ";
        getline(cin, empJobTitle);
        cout << "Hours Worked: ";
        cin >> empHours;

        employees[i] = Employee(empID, empName, empJobTitle, empHours);
    }

    cout << "\nSalary Details:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << employees[i].getName() << "'s Salary: $" << employees[i].calcSalary() << endl;
    }

    delete[] employees;

    return 0;
}

