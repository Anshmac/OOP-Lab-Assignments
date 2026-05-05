#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    string address;
};

class Staff : virtual public Person {
public:
    int employee_id;
    string department;
};

class Student : virtual public Person {
public:
    int student_id;
    char grade;
};

class TeachingAssistant : public Staff, public Student {
public:
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Department: " << department << endl;
        cout << "Student ID: " << student_id << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    TeachingAssistant ta;
    
    ta.name = "Joe";
    ta.address = "123 College St";
    ta.employee_id = 1001;
    ta.department = "Computer Science";
    ta.student_id = 55501;
    ta.grade = 'A';
    
    ta.displayDetails();
    
    return 0;
}