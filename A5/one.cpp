#include <iostream>
using namespace std;

class Base {
public:
    void displayBase() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void displayDerived() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base obj1;
    obj1.displayBase();

    Derived obj2;
    obj2.displayBase(); 
    obj2.displayDerived();

    return 0;
}