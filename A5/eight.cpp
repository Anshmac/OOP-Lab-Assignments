#include <iostream>
#include <string>
using namespace std;

class LibraryUser {
public:
    string name;
    int id;
    string contact;
};

class Student : public LibraryUser {
public:
    int gradeLevel;
    
    void displayStudent() {
        cout << "Student: " << name << ", ID: " << id << ", Contact: " << contact << ", Grade: " << gradeLevel << endl;
    }
};

class Teacher : public LibraryUser {
public:
    string department;
    
    void displayTeacher() {
        cout << "Teacher: " << name << ", ID: " << id << ", Contact: " << contact << ", Dept: " << department << endl;
    }
};

int main() {
    Student s;
    s.name = "Alice";
    s.id = 101;
    s.contact = "alice@email.com";
    s.gradeLevel = 10;
    
    Teacher t;
    t.name = "Mr. Smith";
    t.id = 202;
    t.contact = "smith@email.com";
    t.department = "Mathematics";
    
    s.displayStudent();
    t.displayTeacher();
    
    return 0;
}