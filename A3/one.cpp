#include <iostream>
using namespace std;

class Number {
public:
    int value;

    void setValue(int value) {
        this->value = value; 
    }

    void display() {
        cout << "Value: " << value << "\n";
    }
};

int main() {
    Number numObj;

    numObj.setValue(10);
    cout << "Using dot operator: ";
    numObj.display();

    Number* ptr = &numObj;

    ptr->setValue(20);
    cout << "Using arrow operator: ";
    ptr->display();

    (*ptr).setValue(30);
    cout << "Using dereferenced pointer with dot operator: ";
    (*ptr).display();

    return 0;
}