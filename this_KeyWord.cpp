#include <iostream>
using namespace std;

class Account {
public:
    int accno;      // Data member (also instance variable)
    string name;    // Data member (also instance variable)
    static float rateOfInterest;  // Static data member (shared among all objects of the class)

    // Parameterized constructor to initialize accno and name
    Account(int accno, string name) {
        this->accno = accno;
        this->name = name;
    }

    // Member function to display account details
    void display() {
        cout << "Account Number: " << accno << " Name: " << name << " Rate of Interest: " << rateOfInterest << endl;
    }
};

// Initialize static member of class Account
float Account::rateOfInterest = 6.5;

int main(void) {
    // Creating objects of class Account
    Account a1 = Account(201, "Kashif");
    Account a2 = Account(202, "Amir");

    // Displaying details of each account
    a1.display();
    a2.display();

    return 0;
}

