#include <iostream>
using namespace std;

int main() {
    int daysLate;
    double fine = 0.0;
    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;
    if (daysLate > 30) {
        cout << "Membership cancelled. Book is more than 30 days late." << endl;
    } else if (daysLate > 10) {
        fine = 5.00; 
        cout << "The fine is " << fine << " Rupees." << endl;
    } else if (daysLate >= 6) {
        fine = 1.00;
        cout << "The fine is " << fine << " Rupee." << endl;
    } else if (daysLate > 0) {
        fine = 0.50; 
        cout << "The fine is 50 Paise (0.50 Rupees)." << endl;
    } else {
        cout << "No fine. Book returned on time." << endl;
    }
    return 0;
}