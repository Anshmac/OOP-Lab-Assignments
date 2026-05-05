#include <iostream>
using namespace std;

class Base {
protected:
    int secretValue;
};

class Derived : public Base {
public:
    void setValue(int num) {
        secretValue = num; 
    }

    void displayValue() {
        cout << "The protected value is: " << secretValue << endl;
    }
};

int main() {
    Derived obj;
    
    obj.setValue(100);
    obj.displayValue();

    return 0;
}