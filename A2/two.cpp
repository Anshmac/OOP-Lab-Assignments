#include <iostream>
#include <string>

using namespace std;

class Student {
private: 
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> CurrentCGPA;
        cout << "CGPA updated successfully.\n";
    }

    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin >> Hostel;
        cout << "Hostel updated successfully.\n";
    }

public: 
    void addDetails() {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Roll No: ";
        cin >> RollNo;
        cout << "Enter Degree: ";
        cin >> Degree;
        cout << "Enter Hostel: ";
        cin >> Hostel;
        cout << "Enter Current CGPA: ";
        cin >> CurrentCGPA;
    }

    void updateDetails() {
        int choice;
        cout << "\nWhich detail would you like to update?\n";
        cout << "1. Update CGPA\n";
        cout << "2. Update Hostel\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            updateCGPA(); 
        } else if (choice == 2) {
            updateHostel(); 
        } else {
            cout << "Invalid choice.\n";
        }
    }

    void displaydetails() {
        cout << "\n Student Details \n";
        cout << "Name: " << Name << "\n";
        cout << "Roll No: " << RollNo << "\n";
        cout << "Degree: " << Degree << "\n";
        cout << "Hostel: " << Hostel << "\n";
        cout << "Current CGPA: " << CurrentCGPA << "\n\n";
    }
};

int main() {
    Student s1;

    cout << " Adding Details \n";
    s1.addDetails(); 
    s1.displaydetails(); 

    cout << " Updating Details \n";
    s1.updateDetails(); 
    s1.displaydetails();

    return 0;
}