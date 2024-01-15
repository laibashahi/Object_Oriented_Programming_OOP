#include <iostream>
#include <string>

using namespace std;

// Base class representing personal data
class PersonData {
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zip;
    string phone;

public:
    // Accessor and Mutator functions for PersonData
    string getLastName() const { return lastName; }
    void setLastName(const string& lname) { lastName = lname; }

    string getFirstName() const { return firstName; }
    void setFirstName(const string& fname) { firstName = fname; }

    string getAddress() const { return address; }
    void setAddress(const string& addr) { address = addr; }

    string getCity() const { return city; }
    void setCity(const string& c) { city = c; }

    string getState() const { return state; }
    void setState(const string& s) { state = s; }

    string getZip() const { return zip; }
    void setZip(const string& z) { zip = z; }

    string getPhone() const { return phone; }
    void setPhone(const string& ph) { phone = ph; }
};

// Derived class representing customer data, inherits from PersonData
class CustomerData : public PersonData {
private:
    int customerNumber;
    bool mailingList;

public:
    // Accessor and Mutator functions for CustomerData
    int getCustomerNumber() const { return customerNumber; }
    void setCustomerNumber(int num) { customerNumber = num; }

    bool getMailingList() const { return mailingList; }
    void setMailingList(bool ml) { mailingList = ml; }
};

int main() {
    // Create an object of the CustomerData class
    CustomerData customer;

    // Set values using accessor functions
    customer.setLastName("Doe");
    customer.setFirstName("John");
    customer.setAddress("123 Main St");
    customer.setCity("Cityville");
    customer.setState("CA");
    customer.setZip("12345");
    customer.setPhone("555-1234");

    customer.setCustomerNumber(1001);
    customer.setMailingList(true);

    // Display customer information
    cout << "Customer Information:\n";
    cout << "Name: " << customer.getFirstName() << " " << customer.getLastName() << "\n";
    cout << "Address: " << customer.getAddress() << ", " << customer.getCity() << ", "
         << customer.getState() << " " << customer.getZip() << "\n";
    cout << "Phone: " << customer.getPhone() << "\n";
    cout << "Customer Number: " << customer.getCustomerNumber() << "\n";
    cout << "Mailing List: " << (customer.getMailingList() ? "Yes" : "No") << "\n";

    return 0;
}

