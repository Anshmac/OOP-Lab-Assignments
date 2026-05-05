#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Using if-else " << endl;
    if (num % 2 == 0) {
        cout << num << " is Even." << endl;
    } else {
        cout << num << " is Odd." << endl;
    }
    cout << "Using conditional operator " << endl;
    (num % 2 == 0) ? cout << num << " is Even." << endl : cout << num << " is Odd." << endl;
    
    return 0;
}