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

    Rectangle(int l, int b = 10) {
        length = l;
        breadth = b;
    }

    ~Rectangle() {
        cout << "Destructor called" << endl;
    }

    void calculateArea() {
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle arr[3] = {
        Rectangle(),       
        Rectangle(5),      
        Rectangle(4, 5)    
    };

    for (int i = 0; i < 3; i++) {
        arr[i].calculateArea();
    }

    return 0;
}