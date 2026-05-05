#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    void getdata() {
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "Enter the height of the rectangle: ";
        cin >> height;
    }
    void calculatearea() {
        int area = width * height;
        cout << "Area of the rectangle: " << area << endl;
    }
};

int main() {
    Rectangle rect1;
    cout << " Rectangle Calculator " << endl;
    rect1.getdata();
    rect1.calculatearea();

    return 0;
}