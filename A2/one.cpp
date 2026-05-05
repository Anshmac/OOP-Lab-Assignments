#include <iostream>
#include <string>

using namespace std;

struct Student {
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;

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
        cout << "Enter updated Name: ";
        cin >> Name;
        cout << "Enter updated Roll No: ";
        cin >> RollNo;
        cout << "Enter updated Degree: ";
        cin >> Degree;
        cout << "Enter updated Hostel: ";
        cin >> Hostel;
        cout << "Enter updated Current CGPA: ";
        cin >> CurrentCGPA;
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> CurrentCGPA;
    }

    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin >> Hostel;
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

    cout << " Updating CGPA \n";
    s1.updateCGPA();
    s1.displaydetails();

    cout << " Updating Hostel \n";
    s1.updateHostel();
    s1.displaydetails();

    cout << " Updating All Details \n";
    s1.updateDetails();
    s1.displaydetails();
    return 0;
}