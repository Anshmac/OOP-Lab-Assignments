#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(int n) {
        length = n;
        breadth = n;
    }

    void calculateArea() {
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5, 10);
    Rectangle r3(6);

    r1.calculateArea();
    r2.calculateArea();
    r3.calculateArea();

    return 0;
}