#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    cout << "Demonstrating formatting:" << endl;
    cout << "1. Newline (\\n):\nThis is on a new line." << endl;
    cout << "2. Tab (\\t):\tThis text is indented." << endl;
    cout << "3. Backspace (\\b): ab\bc" << endl; 
    cout << "4. setw: |" << setw(15) << "Right Aligned" << "|" << endl;
    return 0;
}