#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    string ISBN;

    Book() {
        this->title = "";
        this->author = "";
        this->ISBN = "";
    }

    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book& b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library {
    Book books[100];
    int count;

public:
    Library() {
        this->count = 0;
    }

    void loadBooks(Book arr[], int size) {
        for (int i = 0; i < size; i++) {
            this->books[this->count] = arr[i];
            this->count++;
        }
    }

    bool removeBooks(string ISBN) {
        for (int i = 0; i < this->count; i++) {
            if (this->books[i].ISBN == ISBN) {
                for (int j = i; j < this->count - 1; j++) {
                    this->books[j] = this->books[j + 1];
                }
                this->count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for (int i = 0; i < this->count; i++) {
            cout << this->books[i].title << " | " << this->books[i].author << " | " << this->books[i].ISBN << "\n";
        }
    }
};

int main() {
    Library lib;

    Book initList[3] = {
        Book("C++ Primer", "Stanley", "111"),
        Book("Clean Code", "Robert", "222"),
        Book("Effective C++", "Scott", "333")
    };

    Book* dynList = new Book[2];
    dynList[0] = Book("Design Patterns", "GoF", "444");
    dynList[1] = Book("Refactoring", "Martin", "555");

    lib.loadBooks(initList, 3);
    lib.loadBooks(dynList, 2);

    lib.displayDetails();
    
    cout << "\n";
    lib.removeBooks("333");
    
    lib.displayDetails();

    delete[] dynList;
    return 0;
}