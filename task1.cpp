#include <iostream>
#include <string>
using namespace std;

const int MAX_BOOKS = 10;
int count = 0;

struct Library {
    int accessionNumber;
    string bookTitle;
    string author;

    void displayMenu() {
        cout << "What you want to do?" << endl;
        cout << "1. Add a book" << endl;
        cout << "2. Display all books in the library" << endl;
        cout << "3. Display books by a particular author" << endl;
        cout << "4. Display the number of books in the library" << endl;
        cout<<endl;
    }

    void addBook() {
        if (count == MAX_BOOKS) {
            cout << "No more space" << endl;
        } else {
            cout << "Enter the details of the book:" << endl;
            cout << "Enter the ID: ";
            cin >> accessionNumber; // Should be library, not Library
            cin.ignore();

            cout << "Enter book title: ";
            getline(cin,bookTitle);
            cout << "Enter author name: ";
            getline(cin,author);
            count++;
            cout<<endl;
        }
    }

    void displayBooks() {
        if (count == 0) {
            cout << "No books in the library." << endl;
        } else {
            cout << "Details of " << count << " books in the library:" << endl;
            for (int i = 0; i < count; i++) {
                cout << "Accession number: " << accessionNumber << endl;
                cout << "Title: " << bookTitle << endl;
                cout << "Author: " << author << endl;
                cout<<endl;
            }
        }
    }

    void displayBookByAuthor() {
        int cnt = 0;
        string name;
        cout << "Enter the name of the author: ";
        cin.ignore();
        getline(cin, name);

        cout << "Books by author " << name << ":" << endl;
        for (int i = 0; i < count; i++) {
            if (name == author) {
                cnt++;
                cout << "Accession Number: " <<accessionNumber << endl;
                cout << "Title: " << bookTitle << endl;
                cout << "Author: " << author << endl;
                cout<<endl;
            }
        }
        if (cnt == 0) {
            cout << "No books by " << name << " found." << endl;
        }
    }

    void totalBooks() {
        cout << "Total books are: \n" << count << endl;
    }
};

Library library[MAX_BOOKS];

int main() {
    int choice;
    Library libraryObj;

    while (true) {
        libraryObj.displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                libraryObj.addBook();
                break;
            case 2:
                libraryObj.displayBooks();
                break;
            case 3:
                libraryObj.displayBookByAuthor();
                break;
            case 4:
                libraryObj.totalBooks();
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                return 1;
        }
    }
    return 0;
}
