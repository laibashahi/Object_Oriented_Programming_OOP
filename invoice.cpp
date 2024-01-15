#include <iostream>
#include <string>

using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    int pricePerItem;

public:
    // Constructor
    Invoice(string partNumber, string partDescription, int quantity, int pricePerItem)
        : partNumber(partNumber), partDescription(partDescription), quantity(quantity), pricePerItem(pricePerItem) {
        // Ensure non-negative values for quantity and pricePerItem
        if (quantity < 0) {
            this->quantity = 0;
        }
        if (pricePerItem < 0) {
            this->pricePerItem = 0;
        }
    }

    // Getter and setter functions for partNumber
    string getPartNumber() const { return partNumber; }
    void setPartNumber(string newPartNumber) { partNumber = newPartNumber; }

    // Getter and setter functions for partDescription
    string getPartDescription() const { return partDescription; }
    void setPartDescription(string newPartDescription) { partDescription = newPartDescription; }

    // Getter and setter functions for quantity
    int getQuantity() const { return quantity; }
    void setQuantity(int newQuantity) {
        // Ensure non-negative value for quantity
        if (newQuantity >= 0) {
            quantity = newQuantity;
        } else {
            quantity = 0;
        }
    }

    // Getter and setter functions for pricePerItem
    int getPricePerItem() const { return pricePerItem; }
    void setPricePerItem(int newPricePerItem) {
        // Ensure non-negative value for pricePerItem
        if (newPricePerItem >= 0) {
            pricePerItem = newPricePerItem;
        } else {
            pricePerItem = 0;
        }
    }

    // Member function to calculate invoice amount
    int getInvoiceAmount() const {
        // Calculate and return the invoice amount
        return quantity * pricePerItem;
    }
};

int main() {
    // Create an Invoice object
    Invoice invoice("A001", "Widget", 5, 10);

    // Display the initial information
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price Per Item: $" << invoice.getPricePerItem() << endl;
    cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << endl;

    // Modify some values
    invoice.setQuantity(8);
    invoice.setPricePerItem(12);

    // Display the updated information
    cout << "\nUpdated Information:" << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price Per Item: $" << invoice.getPricePerItem() << endl;
    cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << endl;

    return 0;
}

