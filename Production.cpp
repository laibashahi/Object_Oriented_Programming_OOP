#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int employeeNumber;
    string hireDate;

public:
    // Constructors
    Employee() : name(""), employeeNumber(0), hireDate("") {}
    Employee(const string& empName, int empNumber, const string& hireDt)
        : name(empName), employeeNumber(empNumber), hireDate(hireDt) {}

    // Accessor functions
    string getName() const { return name; }
    int getEmployeeNumber() const { return employeeNumber; }
    string getHireDate() const { return hireDate; }

    // Mutator functions
    void setName(const string& empName) { name = empName; }
    void setEmployeeNumber(int empNumber) { employeeNumber = empNumber; }
    void setHireDate(const string& hireDt) { hireDate = hireDt; }
};

class ProductionWorker : public Employee {
private:
    int shift; // 1 for day shift, 2 for night shift
    double hourlyPayRate;

public:
    // Constructors
    ProductionWorker() : shift(1), hourlyPayRate(0.0) {}
    ProductionWorker(const string& empName, int empNumber, const string& hireDt,
                      int sh, double payRate)
        : Employee(empName, empNumber, hireDt), shift(sh), hourlyPayRate(payRate) {}

    // Accessor functions
    int getShift() const { return shift; }
    double getHourlyPayRate() const { return hourlyPayRate; }

    // Mutator functions
    void setShift(int sh) { shift = sh; }
    void setHourlyPayRate(double payRate) { hourlyPayRate = payRate; }
};

int main() {
    // Create a Production Worker object
    ProductionWorker worker("John Doe", 1001, "2022-01-15", 1, 15.0);

    // Display information about the employee
    cout << "Employee Information:\n";
    cout << "Name: " << worker.getName() << "\n";
    cout << "Employee Number: " << worker.getEmployeeNumber() << "\n";
    cout << "Hire Date: " << worker.getHireDate() << "\n";
    cout << "Shift: " << worker.getShift() << "\n";
    cout << "Hourly Pay Rate: $" << worker.getHourlyPayRate() << "\n";

    return 0;
}

