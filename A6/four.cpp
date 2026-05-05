#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    int numA;
public:
    ClassA(int val) {
        numA = val;
    }
    friend void addObjects(ClassA, ClassB);
};

class ClassB {
    int numB;
public:
    ClassB(int val) {
        numB = val;
    }
    friend void addObjects(ClassA, ClassB);
};

void addObjects(ClassA obj1, ClassB obj2) {
    int sum = obj1.numA + obj2.numB;
    cout << "The sum of the objects is: " << sum << endl;
}

int main() {
    ClassA a(25);
    ClassB b(40);
    
    addObjects(a, b);
    
    return 0;
}