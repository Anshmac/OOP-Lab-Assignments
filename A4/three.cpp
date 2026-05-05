#include <iostream>
using namespace std;

class DestructorDemo {
public:
    DestructorDemo() {
        cout << "Constructor called: Object created." << endl;
    }

    ~DestructorDemo() {
        cout << "Destructor called: Object destroyed." << endl;
    }
};

int main() {
    cout << "Starting main" << endl;
    {
        cout << "Entering inner scope" << endl;
        DestructorDemo obj; 
        cout << "Leaving inner scope" << endl;
    } 

    cout << "Ending main " << endl;

    return 0;
}