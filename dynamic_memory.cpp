#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;
    int marks;

public:
    Student(string name, int marks) : name(name), marks(marks) {}
};

class Teacher {
protected:
    string name;
    int salary;

public:
    Teacher(string name, int salary) : name(name), salary(salary) {}
};

class TA : protected Student, protected Teacher {
public:
    TA(string name, int marks, int salary) : Student(name, marks), Teacher(name, salary) {}

    void display() {
        cout << "Name: " << name << " Marks: " << marks << " Salary: " << salary << endl;
    }
};

int main() {
    TA t("Ali", 90, 10000);
    t.display();

    return 0;
}

