#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;
    double price;

public:

    Book(const string& t, const string& a, int year, double p)
        : title(t), author(a), publicationYear(year), price(p) {}


    void displayInfo() {
        cout << "Title: " << title <<endl;
        cout << "Author: " << author <<endl;
        cout << "Publication Year: " << publicationYear <<endl;
        cout << "Price: $" << price <<endl;
    }
};


class EBook : public Book {
private:
    string format;

public:

    EBook(const string& t, const string& a, int year, double p, const string& f)
        : Book(t, a, year, p), format(f) {}


    void displayFormat() {
        cout << "E-Book Format: " << format << endl;
    }
};

int main() {

    Book book("ACB", "GBV", 2001, 9);
    cout << "Book Information:" <<endl;
    book.displayInfo();


    EBook ebook("ABC", "XYZ", 2000, 3, "pdf");
    cout << "\nE-Book Information:" << endl;
    ebook.displayInfo();  // Inherited method from Book
    ebook.displayFormat(); // Additional method in EBook

    return 0;
}
