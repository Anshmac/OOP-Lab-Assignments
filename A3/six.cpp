#include <iostream>
using namespace std;

int cube(int n) {
    return n * n * n;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    cout << "The cube of " << num << " is: " << cube(num) << "\n";
    
    return 0;
}