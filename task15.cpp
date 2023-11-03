#include <iostream>
#include <string>
using namespace std;


class Product {
protected:
    string name;
    double price;

public:
    Product(const string n, double p) : name(n), price(p) {}

    void displayInfo() {
        cout << "Product Name: " << name << endl;
        cout << "Price: $" << price << endl;
    }
};


class Electronics : public Product {
private:
    string category;

public:
    Electronics(const string n, double p, const string& cat) : Product(n, p), category(cat) {}

    void displayElectronicsInfo() {
        cout << "Electronics Category: " << category << endl;
        displayInfo();
    }
};

int main() {
    Product book("E-Book Reader", 149.99);
    Electronics laptop("Laptop", 899.99, "Computers");

    book.displayInfo();
    cout << endl;
    laptop.displayElectronicsInfo();

    return 0;
}
