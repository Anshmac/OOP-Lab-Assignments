#include <iostream>
using namespace std;
 
class ClassB;

class ClassA {
private:
    int numA;

public:
    ClassA(int val) {
        numA = val;
    }
    friend int add(ClassA, ClassB);
};

class ClassB {
private:
    int numB;

public:
    ClassB(int val) {
        numB = val;
    }
    friend int add(ClassA, ClassB);
};
int add(ClassA obj1, ClassB obj2) {
    return obj1.numA + obj2.numB; 
}

int main() {
    ClassA objA(15);
    ClassB objB(25);
    int sum = add(objA, objB);
    cout << "The sum of the private data members is: " << sum << endl;
    return 0;
}