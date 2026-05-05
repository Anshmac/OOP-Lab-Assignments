#include <iostream>
using namespace std;

class Class2; 

class Class1 {
private:
    int value1;

public:
    Class1(int v) {
        value1 = v;
    }

    void display() {
        cout << "Class1 value: " << value1 << "\n";
    }

    friend void swapValues(Class1 &obj1, Class2 &obj2);
};

class Class2 {
private:
    int value2;

public:
    Class2(int v) {
        value2 = v;
    }

    void display() {
        cout << "Class2 value: " << value2 << "\n";
    }
    friend void swapValues(Class1 &obj1, Class2 &obj2);
};

void swapValues(Class1 &obj1, Class2 &obj2) {
    int temp = obj1.value1;
    obj1.value1 = obj2.value2;
    obj2.value2 = temp;
}

int main() {
    Class1 obj1(10);
    Class2 obj2(20);

    cout << " Before Swapping \n";
    obj1.display();
    obj2.display();
    swapValues(obj1, obj2);

    cout << "\n After Swapping \n";
    obj1.display();
    obj2.display();

    return 0;
}