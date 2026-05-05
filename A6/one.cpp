#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    string title, author, ISBN;

    Book(string t, string a, string i) {
        title = t;
        author = a;
        ISBN = i;
    }
};

class Library {
    vector<Book> books; 
public:
    void addNewBook(string t, string a, string i) {
        books.push_back(Book(t, a, i)); 
    }

    bool removeBook(string targetISBN) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].ISBN == targetISBN) {
                books.erase(books.begin() + i); 
                return true;
            }
        }
        return false;
    }

    void display() {
        for (int i = 0; i < books.size(); i++) {
            cout << books[i].title << " | " << books[i].author << " | " << books[i].ISBN << "\n";
        }
    }
};

int main() {
    Library lib;

    lib.addNewBook("C++ Primer", "Stanley", "111");
    lib.addNewBook("Clean Code", "Robert", "222");
    lib.addNewBook("Effective C++", "Scott", "333");
    lib.addNewBook("Design Patterns", "GoF", "444");

    cout << "All Books:\n";
    lib.display();

    cout << "\nAfter removing book with ISBN 333:\n";
    lib.removeBook("333");
    lib.display();

    return 0;
}