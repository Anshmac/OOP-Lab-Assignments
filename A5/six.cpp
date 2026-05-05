#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    void setBookDetails(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    void displayBookDetails() {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: $" << price << endl;
    }
};

class Textbook : public Book {
public:
    string subject;

    void setSubject(string s) {
        subject = s;
    }

    void displayTextbookDetails() {
        displayBookDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Textbook myTextbook;
    
    myTextbook.setBookDetails("C++ Primer", "Stanley B. Lippman", 45.99);
    myTextbook.setSubject("Computer Science");
    
    myTextbook.displayTextbookDetails();

    return 0;
}